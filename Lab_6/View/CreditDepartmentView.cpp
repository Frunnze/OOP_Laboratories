#include "CreditDepartmentView.h"

void CreditDepartmentView::tellOptions()
{
    cout << "\n- Options: ";
    cout << "\n" << Option1;
    cout << "\n" << Option2;
}

CreditDepartmentView::CreditDepartmentView()
{
    Option1 = "house credit";
    Option2 = "business credit";
}