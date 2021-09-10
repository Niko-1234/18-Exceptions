#include <iostream>
#include <vector>
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "I_Account.h"
#include "AccountUlti.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    try {
        std::unique_ptr<Account> MoesAccount = std::make_unique<CheckingAccount>("Moe", -10.0);
        std::cout << *MoesAccount << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << "Couldn't create account - negative saldo" << std::endl;
    }
    std::cout << "Program completed succesfully" << std::endl;
}

