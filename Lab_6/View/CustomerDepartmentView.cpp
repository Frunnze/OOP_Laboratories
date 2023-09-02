#include "CustomerDepartmentView.h"

void CustomerDepartmentView::tellOptions()
{
    cout << "\n- Options: ";
    cout << "\n" << Option1;
    cout << "\n" << Option2;
}

CustomerDepartmentView::CustomerDepartmentView()
{
    Option1 = "transfers";
    Option2 = "payment card";
}