#ifndef __BITTHUMBADAPTER_H__
#define __BITTHUMBADAPTER_H__
#include "TradeAdapter.h"
#include <iostream>
#include <string>

using namespace std;

class BitThumbAdapter : public TradeAdapter
{
public:
    static const string name;
    void purchase();
    void sell();
    void getCurrentPrice();
    BitThumbAdapter();
    ~BitThumbAdapter() {};
};
#endif
