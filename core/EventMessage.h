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
        EventMessage createEventMessage(int what, void* data);
        ~EventMessage() {};
};
