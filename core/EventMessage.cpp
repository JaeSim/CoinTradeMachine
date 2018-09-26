#include "EventMessage.h"

EventMessage::EventMessage(int id) {
    this->id = id;
    this->what = -1;
    this->data = NULL;
}

EventMessage::EventMessage(int id, int what, void* data) 
{
    this->id = id;
    this->what = what;
    this->data = data;
}

EventMessage EventMessage::createEventMessage(int what, void* data)
{
    EventMessage* evt = new EventMessage(0, what, data);
    return *evt;
}
