#ifndef __DISPLAYMANAGER_H__
#define __DISPLAYMANAGER_H__
#include "Manager.h"
#include <iostream>
#include <string>

using namespace std;

class DisplayManager : public Manager
{
public:
	static const string name;
    void stop();
    void start();
    DisplayManager();
    ~DisplayManager() {};
};
#endif
