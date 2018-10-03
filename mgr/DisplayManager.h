#ifndef __DISPLAYMANAGER_H__
#define __DISPLAYMANAGER_H__
#include "Singleton.h"

class DisplayManager : public Singleton<DisplayManager>
{
public:
    DisplayManager() {};
    ~DisplayManager() {};
};
#endif
