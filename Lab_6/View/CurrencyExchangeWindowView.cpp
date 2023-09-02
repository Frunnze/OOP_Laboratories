#include "CurrencyExchangeWindowView.h"

CurrencyExchangeWindowView::CurrencyExchangeWindowView()
{
    EuroBuy = 19.5;
    EuroSell = 19.0;
    DollarBuy = 18.5;
    DollarSell = 18.1;
}

void CurrencyExchangeWindowView::exchangeMoney(float amount, string currency, string action, bool employee)
{
    if (employee == true)
    {
        if (currency == "euro")
        {
            if (action == "sell")
            {
                cout << "\n- Employee: Here is " << EuroSell * amount << " lei.";
            }
        }
    }
    else if (employee == false)
    {
        cout << "\n- Customer: Waits for the employee.";
    }
}