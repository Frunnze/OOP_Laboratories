#ifndef ATMINTERFACE_H
#define ATMINTERFACE_H

#pragma once

class ATMInterface
{
public:
    virtual void broken(bool Broken) = 0;
    virtual void showOptions() = 0;
    virtual void giveMoney(bool Broken, float AmountToWithdraw) = 0;
};

#endif