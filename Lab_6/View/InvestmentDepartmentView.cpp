#include "InvestmentDepartmentView.h"

void InvestmentDepartmentView::tellOptions()
{
    cout << "\n- Options: ";
    cout << "\n" << Option1;
    cout << "\n" << Option2;
}

InvestmentDepartmentView::InvestmentDepartmentView()
{
    Option1 = "stocks";
    Option2 = "bonds";
}