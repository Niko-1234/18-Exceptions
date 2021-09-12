#ifndef _I_ACCOUNT_H_
#define _I_ACCOUNT_H_
#include <string>
#include "IllegalBalanceExceptions.h"
#include "InsufficientFundusException.h"

class I_Account
{
    friend std::ostream &operator<<(std::ostream &os, const I_Account &AccType);
public:
    virtual void Print(std::ostream &os) const = 0;
    virtual ~I_Account() = default;
};

#endif // _I_ACCOUNT_H_