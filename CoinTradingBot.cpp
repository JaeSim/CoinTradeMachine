#include <iostream>
#include "EventMessage.h"
#include "mgr/ManagerBase.h"

using namespace std;
void startBot();
int main() 
{
    cout<<"CoinTradingBot started"<<endl;
    startBot();
    return 0;
}
void startBot()
{
    cout<<"CoinTradingBot process running"<<endl;
    char * str = "test";
    EventMessage *evt = new EventMessage(1, 1, (void*)str);
    int cnt = 0;

    ManagerBase *mgrBase = ManagerBase::Instance();
    mgrBase->init();

    while(1) {
        if (cnt > 10 ) break;
        cout<<evt->getData()<<endl;
        cnt++;
    }
    delete(evt);
}
