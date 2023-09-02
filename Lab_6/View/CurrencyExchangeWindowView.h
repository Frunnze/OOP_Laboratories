#ifndef CURRENCYEXCHANGEWINDOWVIEW_H
#define CURRENCYEXCHANGEWINDOWVIEW_H

#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;

#include "CurrencyExchangeWindowView.h"

class CurrencyExchangeWindowView
{
private:
    float EuroBuy;
    float EuroSell;
    float DollarBuy;
    float DollarSell;

public:
    CurrencyExchangeWindowView();
    void exchangeMoney(float amount, string currency, string action, bool employee);
};

#endif