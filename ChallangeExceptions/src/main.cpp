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

    std::unique_ptr<Account> MoesAccount;
    std::unique_ptr<Account> CarlssAccount;

    try {
        MoesAccount  = std::make_unique<CheckingAccount>("Moe", -10.0);
        std::cout << *MoesAccount << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    try {
        CarlssAccount = std::make_unique<CheckingAccount>("Carl", 10.0);
        std::cout << *CarlssAccount << std::endl;
        CarlssAccount->Withdraw(5);
        CarlssAccount->Withdraw(20);
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    catch (const InsufficientFundusException &ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed succesfully" << std::endl;
}

