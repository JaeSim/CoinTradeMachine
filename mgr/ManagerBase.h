#include "Singleton.h"
#include "InputManager.h"
#include "DisplayManager.h"

class ManagerBase : public Singleton<ManagerBase>
{
private:
    bool isIntialized;  
    InputManager* mInputManager;
    DisplayManager* mDisplayManager;
public:
    ManagerBase();
    void init();
    InputManager* getInputManager() { return mInputManager; };
    DisplayManager* getDisplayManager()  { return mDisplayManager; };
    ~ManagerBase();
};