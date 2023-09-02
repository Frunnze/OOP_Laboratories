#include "ATMView.h"

void ATMView::broken(bool Broken)
{
    if (Broken == true)
    {
        cout << "\n- ATM: ATM is broken, wait for the repairment.";
        cout << "\n- Customer: Waits.";
    }
}

void ATMView::showOptions()
{
    cout << "\n- ATM: Introduce the amount to withdraw.";
}

void ATMView::giveMoney(bool Broken, float AmountToWithdraw)
{
    if (Broken == false)
    {
        cout << "\n- ATM: Out " << AmountToWithdraw << " lei.";
    }
}