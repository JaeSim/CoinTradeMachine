#include "ManagerBase.h"
#include "InputManager.h"
#include "DisplayManager.h"

ManagerBase::ManagerBase() {
    isIntialized = false;
}

void ManagerBase::init()
{
    InputManager* mInputManager = new InputManager();
    DisplayManager* mDisplayManager = new DisplayManager();
}

ManagerBase::~ManagerBase() {
    if (mInputManager != NULL) { delete mInputManager; mInputManager = NULL; }
    if (mDisplayManager != NULL) { delete mDisplayManager; mDisplayManager = NULL; }
}