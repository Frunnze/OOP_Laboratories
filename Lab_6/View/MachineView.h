#ifndef MACHINEVIEW_H
#define MACHINEVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "MachineView.h"

class MachineView
{
private:
    bool broken;

public:
    void brokenMachine(bool Broken);
};

#endif