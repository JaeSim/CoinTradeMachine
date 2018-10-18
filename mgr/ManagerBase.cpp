#include "ManagerBase.h"
#include "InputManager.h"
#include "DisplayManager.h"
#include <iterator>

ManagerBase::ManagerBase() {
    isIntialized = false;
}

void ManagerBase::init()
{
    mManagerMap.clear();
    mInputManager = new InputManager();
    mDisplayManager = new DisplayManager();

    mManagerMap.insert(make_pair(InputManager::name, mInputManager));
    mManagerMap.insert(make_pair(DisplayManager::name, mDisplayManager));

    cout<<"Manager List is "<<mManagerMap.size()<<endl;
    map <string, Manager*>::iterator it;
    for (it = mManagerMap.begin(); it != mManagerMap.end(); it++) {
    	it->second->start();
    }
    isIntialized = true;
}

ManagerBase::~ManagerBase() {
    if (mInputManager != NULL) { delete mInputManager; mInputManager = NULL; }
    if (mDisplayManager != NULL) { delete mDisplayManager; mDisplayManager = NULL; }
}
