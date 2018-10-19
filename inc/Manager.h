#ifndef __MANAGER_H__
#define __MANAGER_H__
#include "Singleton.h"
#include <iostream>

class Manager : public Singleton<Manager>
{
public:
    virtual void start() { std::cout<<"start Manger"<<std::endl; };
    virtual void stop() {};
    virtual ~Manager() {};
};
#endif
