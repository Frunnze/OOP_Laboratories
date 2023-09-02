#ifndef QUEUETICKETMACHINE_H
#define QUEUETICKETMACHINE_H

#pragma once

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;

#include "QueueTicketMachine.h"

class QueueTicketMachine
{
private:
    string Category1;
    string Category2;
    string Category3;
    string Category4;

public:
    QueueTicketMachine(string c1, string c2, string c3, string c4);
    string getCat1();
    string getCat2();
    string getCat3();
    string getCat4();
    int giveTicket();
};

#endif