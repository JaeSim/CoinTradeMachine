#ifndef __STRATEGEMANAGER_H__
#define __STRATEGEMANAGER_H__
#include "Manager.h"
#include <iostream>
#include <string>

using namespace std;

class StrategeManager : public Manager
{

public:
    static const string name;
    void stop();
    void start();
    void purchase();
    void sell();
    void calculate();
    StrategeManager();
    ~StrategeManager() {};
};
#endif
