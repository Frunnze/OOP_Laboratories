#include "CustomerAtExchangeWindowView.h"

void CustomerAtExchangeWindowView::goToExchangeWindow(string Gender)
{
    cout << "\n- Customer: Goes to the exchange Window.";
    if (Gender == "male")
    {
        cout << "\n- Customer: Waits his turn.";
    }
    else if (Gender == "female")
    {
        cout << "\n- Customer: Waits her turn.";
    }
}

void CustomerAtExchangeWindowView::askingToChange(int amount)
{
    cout << "\n- Customer: Hi, I would like to change " << amount << " euro in lei.";
}