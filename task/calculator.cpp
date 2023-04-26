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

void sigterm_handler(int signum)
{
    // Perform cleanup before exiting
    printf("Received SIGTERM signal. Cleaning up and exiting.\n");
    // Add any necessary cleanup code here
    exit(0);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    { // check for correct number of arguments
        fprintf(stderr, "Usage: %s <shm_id>\n", argv[0]);
        exit(1);
    }

    int shm_id = atoi(argv[1]); // convert shm_id argument to integer
    int *shared_int = (int *)shmat(shm_id, NULL, 0);

    if (shared_int == (void *)-1)
    { // check for errors
        perror("shmat");
        exit(1);
    }
    signal(SIGTERM, sigterm_handler);

    *shared_int = getpid(); // write process ID to shared memory

    printf("My process ID is %d and it has been written to shared memory\n", getpid());

    shmdt(shared_int); // detach shared memory segment

    while (true)
    {

        char op;
        double num1, num2, result;

        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;

        std::cout << "Enter first number: ";
        std::cin >> num1;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            if (num2 == 0)
            {
                std::cout << "Error: division by zero\n";
                return 1;
            }
            result = num1 / num2;
            break;

        default:
            std::cout << "Error: invalid operator\n";
            return 1;
        }

        std::cout << "Result: " << result << "\n";
    };
    return 0;
}
