#ifndef CUSTOMERDEPARTMENTVIEW_H
#define CUSTOMERDEPARTMENTVIEW_H

#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "CustomerDepartmentView.h"
#include "../View/DepartmentView.h"

class CustomerDepartmentView : public DepartmentView
{
public:
    void tellOptions();
    CustomerDepartmentView();
};

#endif