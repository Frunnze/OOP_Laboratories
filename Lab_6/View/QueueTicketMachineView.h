#ifndef QUEUETICKETMACHINEVIEW_H
#define QUEUETICKETMACHINEVIEW_H

#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;

#include "QueueTicketMachineView.h"
#include "../View/MachineView.h"
#include "../View/QueueTicketMachineInterface.h"

class QueueTicketMachineView: QueueTicketMachineInterface, public MachineView
{
public:
    void showOptions(string c1, string c2, string c3, string c4);
    void showChosenCategory(int choice, string c1, string c2, string c3, string c4);
};

#endif