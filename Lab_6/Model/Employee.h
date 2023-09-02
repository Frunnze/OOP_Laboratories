#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Employee.h"
#include "../Model/Person.h"

class Employee: public Person
{
private:
    string JobTitle;

public:
    void setJobTitle(string title);
    string getJobTitle();
};

#endif