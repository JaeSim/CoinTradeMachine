#include "InputManager.h"
#include "EventMessage.h"

const string InputManager::name = "InputManager";


void InputManager::inputInterrupt() {
    char* input;
    while (true) {
        cout<<"Enter Input"<<endl;
        cin>>input;
        cout<<"input is ["<<input<<"]"<<endl;

        //EventMessage msg = EventMessage::createEventMessage(1, input);
    }
}

InputManager::InputManager() {

}

void InputManager::start() {
    cout<<"start "<<name<<endl;
    thread inputWait(&InputManager::inputInterrupt, this);

    inputWait.detach();
}

void InputManager::stop() {

}

