#include <iostream>
#include "services/GroupService.h"
#include "services/ExpenseService.h"
#include "services/BalanceService.h"

int main() {

    User* u1 = new User("Amit", "amit@gmail.com");
    User* u2 = new User("Rohit", "rohit@gmail.com");
    User* u3 = new User("Karan", "karan@gmail.com");

    GroupService groupService;
    ExpenseService expenseService;
    BalanceService balanceService;

    Group* tripGroup = groupService.createGroup("Goa Trip");

    groupService.addMember(tripGroup, u1);
    groupService.addMember(tripGroup, u2);
    groupService.addMember(tripGroup, u3);

    std::vector<std::string> users = {
        u1->userId,
        u2->userId,
        u3->userId
    };

    Expense* expense = expenseService.createExpense(
        "Dinner",
        3000,
        u1->userId,
        users,
        SplitType::EQUAL,
        {}
    );

    expenseService.applyBalances(tripGroup, expense);

    balanceService.showBalances(tripGroup);

    return 0;
}