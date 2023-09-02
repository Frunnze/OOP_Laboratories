#ifndef INVESTMENTDEPARTMENTVIEW_H
#define INVESTMENTDEPARTMENTVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;
#include "InvestmentDepartmentView.h"

#include "../View/DepartmentView.h"

class InvestmentDepartmentView: public DepartmentView
{
public:
    void tellOptions();
    InvestmentDepartmentView();
};

#endif