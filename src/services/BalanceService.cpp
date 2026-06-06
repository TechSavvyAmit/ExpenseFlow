#include "services/BalanceService.h"
#include <iostream>
#include <iomanip>

void BalanceService::showBalances(Group* group) {

    for (auto& userBalance : group->balances) {

        std::cout << userBalance.first << std::endl;

        for (auto& balance : userBalance.second) {

            std::cout
                << " owes "
                << balance.first
                << " : "
                << std::fixed
                << std::setprecision(2)
                << balance.second
                << std::endl;
        }
    }
}