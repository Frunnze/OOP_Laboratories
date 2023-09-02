#ifndef PERSON_H
#define PERSON_H
#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;

#include "Bank.h"

class Person : public Bank
{
private:
    string Gender;

public:
    void setGender(string gen);
    string getGender();
};

#endif