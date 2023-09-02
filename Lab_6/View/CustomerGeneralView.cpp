#include "CustomerGeneralView.h"

void CustomerGeneralView::enterBank()
{
    cout << "- Customer " << getName() << " enters the bank.";
}

void CustomerGeneralView::introduceYourself(string employeeGender)
{
    if (employeeGender == "male")
    {
        cout << "\n- Customer: Hello, sir, how can I";
    }
    else if (employeeGender == "female")
    {
        cout << "\n- Customer: Hello, ma'am, how can I";
    }
}

void CustomerGeneralView::waitInQueue(int number)
{
    cout << "\n- Customer: Waits in line until ticket number " << number << " comes up.";
}

void CustomerGeneralView::choose()
{
    cout << "\n- Customer: Chooses and does the business.";
}

void CustomerGeneralView::leaveBank()
{
    cout << "\n- Customer: Leaves the bank.";
}