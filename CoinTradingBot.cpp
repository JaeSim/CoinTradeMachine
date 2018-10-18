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
    int cnt = 1;

    ManagerBase *mgrBase = ManagerBase::Instance();
    mgrBase->init();

    while(true) {
    	if (cnt%100000 == 0)
    		cout<<cnt<<endl;
        cnt++;
    }
    delete(evt);
}
