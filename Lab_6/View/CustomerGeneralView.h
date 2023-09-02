#ifndef CUSTOMERGENERALVIEW_H
#define CUSTOMERGENERALVIEW_H

#pragma once

#include <iostream>
#include <string>
#include "../Model/Person.h"
using namespace std;

class CustomerGeneralView: public Person
{
public:
    void enterBank();
    void introduceYourself(string employeeGender);
    void waitInQueue(int number);
    void choose();
    void leaveBank();
};

#endif