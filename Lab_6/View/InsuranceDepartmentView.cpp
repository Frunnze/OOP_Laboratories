#include "InsuranceDepartmentView.h"

void InsuranceDepartmentView::tellOptions()
{
    cout << "\n- Options: ";
    cout << "\n"
         << Option1;
    cout << "\n"
         << Option2;
}

InsuranceDepartmentView::InsuranceDepartmentView()
{
    Option1 = "life insurance";
    Option2 = "house insurance";
}