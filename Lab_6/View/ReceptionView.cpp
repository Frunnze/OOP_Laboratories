#include "ReceptionView.h"

void ReceptionView::speakToCustomer(string name, bool employee)
{
    if (employee == true)
    {
        cout << "\n- Employee: Hello, " << "my name is " << name << " what can I help you with?";
    }
    else if (employee == false)
    {
        cout << "\n- Customer: Waits for the employee.";
    }
}

void ReceptionView::indicateExchangeWindow()
{
    cout << "\n- Employee: There is the currency exchange Window.";
}

void ReceptionView::indicateTicketMachine()
{
    cout << "\n- Employee: You go to the queue ticket machine and choose the corresponding option";
    cout << " and then wait for your turn.";
}

void ReceptionView::indicateATM()
{
    cout << "\n- Employee: You can use the ATM, there it is.";
}