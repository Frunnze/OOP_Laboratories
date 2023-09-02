#include "CustomerAtReceptionView.h"

void CustomerAtReceptionView::goToReception()
{
    cout << "\n- Customer: Goes to the Reception.";
}

int CustomerAtReceptionView::speakToReception(int id)
{
    srand(id);
    int option = 1 + (rand() % 6);
    switch (option)
    {
        case 1: cout << " exchange some money?"; break;
        case 2: cout << " transfer some money?"; break;
        case 3: cout << " sign up for an insurance?"; break;
        case 4: cout << " take a credit?"; break;
        case 5: cout << " invest here?"; break;
        case 6: cout << " withdraw some money?"; break;
    }
    return option;
}