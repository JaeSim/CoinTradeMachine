#ifndef __INPUTMANAGER_H__
#define __INPUTMANAGER_H__
#include "Singleton.h"

class InputManager : public Singleton<InputManager>
{
public:
    InputManager() {};
    ~InputManager() {};
};
#endif
