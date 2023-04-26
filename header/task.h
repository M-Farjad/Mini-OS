#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include <iostream>
using namespace std;
const int TOTAL_TASK = 10;

class Task
{
public:
    string name;
    string command;
    int ramNeeded;
    int hardNeeded;
    bool isActive;
    int shm_id;
    pid_t pid;

    Task(string n, string s, int r, int h, int sm = -1, bool ia = false, pid_t p = 0) : name(n),
                                                                                        command(s),
                                                                                        ramNeeded(r),
                                                                                        hardNeeded(h),
                                                                                        isActive(ia),
                                                                                        shm_id(sm),
                                                                                        pid(p) {}

    int exitTask();

    static Task tasks[TOTAL_TASK];
    int executeTask();
};

Task Task::tasks[TOTAL_TASK] = {
    {"NotePad", "./obj/notepad", 10, 10},
    {"Calculator", "./calculator", 10, 10},
    {"Time", "./obj/time", 10, 10},
    {"Creating a file", "./obj/create_file", 10, 10},
    {"Move file", "./obj/move_file", 10, 10},
    {"Copy file", "./obj/copy_file", 10, 10},
    {"Delete file", "./obj/delete_file", 10, 10},
    {"Check file info", "./obj/check_file_info", 10, 10},
    {"Image viewer", "./obj/image_viewer", 10, 10},
    {"Text editor", "./obj/text_editor", 10, 10}};
int Task::exitTask()
{
    if (isActive == false)
        return 1;

    isActive = false;
    // kill Process if it is Active;
    if (kill(pid, SIGTERM) == -1)
    {
        std::cout << "Error killing child process" << std::endl;
        ;
        return -1;
    }

    return 0;
}
int Task::executeTask()
{
    shm_id = shmget(IPC_PRIVATE, sizeof(int), IPC_CREAT | 0666); // create shared memory segment

    if (shm_id < 0)
    { // check for errors
        perror("shmget");
        // fail to create share memory
        return -1;
    }

    pid_t child_pid = fork(); // create a child process using fork()

    if (child_pid == 0)
    { // in the child process
        char shm_id_str[20];    //buffer to store shm_id
        sprintf(shm_id_str, "%d", shm_id); // convert shm_id to string

        execlp("/usr/bin/gnome-terminal", "/usr/bin/gnome-terminal", "--", command.c_str(), shm_id_str, NULL); // launch a new terminal and run ./calculator with shm_id as an argument
        perror("execlp");
        exit(1); // check for errors
    }
    else
    { // in the parent process
        // waitpid(child_pid, NULL, 0); // wait for the child process to exit
        sleep(1);
        Task::tasks[1].isActive = true;
        int *shared_int = (int *)shmat(shm_id, NULL, 0); // attach the shared memory segment

        if (shared_int == (void *)-1)
        { // check for errors
            perror("shmat");
            return -1;
        }
        pid = (pid_t)*shared_int; // Convert shared_int to pid_t
        printf("Task Process id is %d\n", pid);
        return 1;
    }

    return 0;
}
