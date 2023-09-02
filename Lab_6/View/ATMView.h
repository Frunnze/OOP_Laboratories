#ifndef ATMVIEW_H
#define ATMVIEW_H

#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;

#include "../View/MachineView.h"
#include "../View/ATMInterface.h"

class ATMView: ATMInterface, public MachineView
{
public:
    void broken(bool Broken);
    void showOptions();
    void giveMoney(bool Broken, float AmountToWithdraw);
};

#endif