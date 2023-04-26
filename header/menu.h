#pragma once

#include <iostream>
#include <iomanip>

#include "./task.h"

using namespace std;

class Menu
{
public:
    static void displayMenuItem(int, Task);
    static void displayMenu();
    static int getUserChoice();
    static void executeOperation(int);
};

void Menu::displayMenuItem(int key, Task t)
{
    cout << setw(2) << left << key << " - ";
    if (t.isActive)
        cout << "Close ";
    else
        cout << "Open ";
    cout << t.name << endl;
}

// void Menu::displayMenu(){
//     cout<<"OS MENU ITEMS "<<endl;
//     displayMenuItem(1,Task::tasks[0]);
//     displayMenuItem(2,Task::tasks[1]);
//     displayMenuItem(3,Task::tasks[2]);
//     displayMenuItem(4,Task::tasks[3]);
//     displayMenuItem(5,Task::tasks[4]);
//     displayMenuItem(6,Task::tasks[5]);
//     displayMenuItem(7,Task::tasks[6]);
//     displayMenuItem(8,Task::tasks[7]);
//     displayMenuItem(9,Task::tasks[8]);
//     displayMenuItem(10,Task::tasks[9]);
//     cout<<"0- Exit OS "<<endl;
// }

// Testing Purpose
void Menu::displayMenu()
{
    cout << "OS MENU ITEMS " << endl;
    displayMenuItem(1, Task::tasks[0]);
    displayMenuItem(2, Task::tasks[1]);
    cout << "0- Exit OS " << endl;
}

int Menu::getUserChoice()
{
    int choice;
    do
    {

        cout << "Enter choice (0-10): ";
        cin >> choice;
    } while (choice > 10 || choice < 0);
    return choice;
}

void Menu::executeOperation(int i)
{
    switch (i)

    {
    case 0:
        cout << "Program Exit Succesfully" << endl;
        exit(0);
        break;
    case 1:
        if (Task::tasks[i - 1].isActive)
        {
            cout << "Closing Task :" << Task::tasks[i - 1].name << endl;
            Task::tasks[i - 1].exitTask();
        }
        else
        {
            cout << " Opening Task :" << Task::tasks[i - 1].name << endl;
            Task::tasks[i - 1].executeTask();
        }
        break;
    case 2:
        if (Task::tasks[i - 1].isActive)
        {
            cout << "Closing Task :" << Task::tasks[i - 1].name << endl;
            Task::tasks[i - 1].exitTask();
        }
        else
        {
            cout << " Opening Task :" << Task::tasks[i - 1].name << endl;
            Task::tasks[i - 1].executeTask();
        }
        break;
    default:
        cout << "Error no matching" << endl;
    };
};
