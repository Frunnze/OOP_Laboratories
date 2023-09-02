#include "QueueTicketMachine.h"

QueueTicketMachine::QueueTicketMachine(string c1, string c2, string c3, string c4)
{
    Category1 = c1;
    Category2 = c2;
    Category3 = c3;
    Category4 = c4;
}

string QueueTicketMachine::getCat1()
{
    return Category1;
}

string QueueTicketMachine::getCat2()
{
    return Category2;
}

string QueueTicketMachine::getCat3()
{
    return Category3;
}

string QueueTicketMachine::getCat4()
{
    return Category4;
}

int QueueTicketMachine::giveTicket()
{
    srand(time(0));
    return 1 + (rand() % 1000);
}