#ifndef CREDITDEPARTMENTVIEW_H
#define CREDITDEPARTMENTVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;
#include "CreditDepartmentView.h"

#include "../View/DepartmentView.h"

class CreditDepartmentView: public DepartmentView
{
public:
    void tellOptions();
    CreditDepartmentView();
};

#endif