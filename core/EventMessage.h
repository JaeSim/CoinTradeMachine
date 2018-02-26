#include <cstddef>

class EventMessage {
    private:
        int id;
        int what;
        char *data;
    public:
        char* getData() { return data; };
        EventMessage() {};
        EventMessage(int id);
        EventMessage(int id, int what, char* data);
        ~EventMessage() {};
};
