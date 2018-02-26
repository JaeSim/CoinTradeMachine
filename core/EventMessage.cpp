#include "EventMessage.h"

EventMessage::EventMessage(int id) {
    this->id = id;
    this->what = -1;
    this->data = NULL;
}
EventMessage::EventMessage(int id, int what, char* data) 
{
    this->id = id;
    this->what = what;
    this->data = data;
}
