#ifndef __EVENTMESSAGE_H__
#define __EVENTMESSAGE_H__
#include <cstddef>

class EventMessage {
private:
    int id;
    int what;
    void *data;
public:
    void* getData() { return data; };
    EventMessage() {};
    EventMessage(int id);
    EventMessage(int id, int what, void* data);
    static EventMessage createEventMessage(int what, void* data);
    ~EventMessage() {};
};
#endif
