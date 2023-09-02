#include "ATM.h"

void ATM::setAmount(float amount)
{
    AmountToWithdraw = amount;
}

int ATM::getAmount()
{
    return AmountToWithdraw;
}