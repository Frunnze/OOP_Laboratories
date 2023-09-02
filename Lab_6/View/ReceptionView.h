#ifndef RECEPTIONVIEW_H
#define RECEPTIONVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "ReceptionView.h"

class ReceptionView
{
public:
    void speakToCustomer(string name, bool employee);
    void indicateExchangeWindow();
    void indicateTicketMachine();
    void indicateATM();
};

#endif