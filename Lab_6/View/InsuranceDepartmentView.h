#ifndef INSURANCEDEPARTMENTVIEW_H
#define INSURANCEDEPARTMENTVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;
#include "InsuranceDepartmentView.h"

#include "../View/DepartmentView.h"

class InsuranceDepartmentView : public DepartmentView
{
public:
    void tellOptions();
    InsuranceDepartmentView();
};

#endif