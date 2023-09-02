#ifndef DEPARTMENTVIEW_H
#define DEPARTMENTVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "DepartmentView.h"

class DepartmentView
{
protected:
    string Option1;
    string Option2;

public:
    void tellOptions();
};

#endif