#ifndef ATM_H
#define ATM_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "ATM.h"

class ATM
{
private:
    float AmountToWithdraw;

public:
    void setAmount(float amount);
    int getAmount();
};

#endif