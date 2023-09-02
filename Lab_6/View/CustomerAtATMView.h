#ifndef CUSTOMERATATMVIEW_H
#define CUSTOMERATATMVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "CustomerAtATMView.h"

class CustomerAtATMView
{
public:
    void goToATM();
    void introduceOption(int amount);
};

#endif