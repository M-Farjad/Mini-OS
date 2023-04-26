#pragma once

#include <iostream>
using namespace std;

class Config
{
public:
    static const std::string osName;
    static int ram;
    static int hardDisk;
    static int core;
    static void initConfig(int c, int r, int h);
    static void initConfig(int n,char** arg);
    static void displayConfig();
};
const string Config::osName = "YOUNGOS";
int Config::ram;
int Config::hardDisk;
int Config::core;

void Config::initConfig(int c, int r, int h)
{
    ram = r;
    hardDisk = h;
    core = c;
}
void Config::initConfig(int n,char** arg){
    if(n>=3){
      int core = atoi(arg[1]);  
      int ram = atoi(arg[2]);  
      int hardisk = atoi(arg[3]);  
    Config::initConfig(core,ram,hardisk);
    }
    else{
    Config::initConfig(4,1024,10240);
    }
}
void Config::displayConfig()
{
    cout << "OS Name " << Config::osName << endl;
    cout << "Total Cores" << Config::core << "" << endl;
    cout << "Total Ram " << Config::ram << "MBs" << endl;
    cout << "Total HardDisk " << Config::hardDisk << "MBs" << endl;
}
