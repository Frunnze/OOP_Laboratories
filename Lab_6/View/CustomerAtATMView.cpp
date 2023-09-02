#include "CustomerAtATMView.h"

void CustomerAtATMView::goToATM()
{
    cout << "\n- Customer: Goes to the ATM.";
    cout << "\n- Customer: Waits in the queue.";
}

void CustomerAtATMView::introduceOption(int amount)
{
    cout << "\n- Customer: Introduces " << amount << " to withdraw.";
}