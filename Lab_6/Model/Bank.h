#ifndef BANK_H
#define BANK_H
#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <cmath>
using namespace std;


class Bank
{
private:
    string Name;
public:
    void setName(string name);
    string getName();
};

#endif