#ifndef __INPUTMANAGER_H__
#define __INPUTMANAGER_H__
#include "Manager.h"
#include <iostream>
#include <string>
#include <thread>

using namespace std;

class InputManager : public Manager
{
public:
    static const string name;
    void stop();
    void start();
    void inputInterrupt();
    InputManager();
    ~InputManager() {};
};
#endif
