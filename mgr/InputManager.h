#ifndef __INPUTMANAGER_H__
#define __INPUTMANAGER_H__
#include "Manager.h"
#include <iostream>
#include <string>

using namespace std;

class InputManager : public Manager
{
public:
	static const string name;
    void stop();
    void start();
    InputManager();
    ~InputManager() {};
};
#endif
