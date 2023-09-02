#ifndef QUEUETICKETMACHINEINTERFACE_H
#define QUEUETICKETMACHINEINTERFACE_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

class QueueTicketMachineInterface
{
public:
    virtual void showOptions(string c1, string c2, string c3, string c4) = 0;
    virtual void showChosenCategory(int choice, string c1, string c2, string c3, string c4) = 0;
};

#endif