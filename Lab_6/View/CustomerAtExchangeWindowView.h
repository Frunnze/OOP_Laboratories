#ifndef CUSTOMERATEXCHANGEWINDOWVIEW_H
#define CUSTOMERATEXCHANGEWINDOWVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "CustomerAtExchangeWindowView.h"

class CustomerAtExchangeWindowView
{
public:
    void goToExchangeWindow(string Gender);
    void askingToChange(int amount);
};

#endif