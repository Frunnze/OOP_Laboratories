#include "QueueTicketMachineView.h"

void QueueTicketMachineView::showOptions(string c1, string c2, string c3, string c4)
{
    cout << "\n- Options:";
    cout << "\n" << c1;
    cout << "\n" << c2;
    cout << "\n" << c3;
    cout << "\n" << c4;
}

void QueueTicketMachineView::showChosenCategory(int choice, string c1, string c2, string c3, string c4)
{
    cout << "\n- Customer chose: ";
    if (choice == 2) cout << c1;
    if (choice == 3) cout << c2;
    if (choice == 4) cout << c3;
    if (choice == 5) cout << c4;
}