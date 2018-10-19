#ifndef __TRADEADAPTER_H__
#define __TRADEADAPTER_H__
#include <iostream>

class TradeAdapter
{
public:
    virtual void purchase() {};
    virtual void sell() {};
    virtual void getCurrentPrice() {};
    virtual ~TradeAdapter() {};
};
#endif
