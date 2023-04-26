
#include <iostream>
#include <string.h>

#include "./header/task.h"
#include "./header/config.h"
#include "./header/menu.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/shm.h>

using namespace std;

int main(int n, char **arg)
{
    int userChoice;
    Config::initConfig(n, arg); // take OS configurations

    Config::displayConfig(); // display Configurations of OS

    while (true)
    {

        Menu::displayMenu();
        userChoice = Menu::getUserChoice();

        Menu::executeOperation(userChoice);
    }
}

// g++ ./task/calculator.cpp -o ./obj/calculator