#pragma once

#include <map>
#include "models/User.h"
#include "models/Expense.h"
#include "models/Group.h"
#include "enums/SplitType.h"

class ExpenseService {
public:
    Expense* createExpense(
        const std::string& description,
        double amount,
        const std::string& paidBy,
        const std::vector<std::string>& users,
        SplitType splitType,
        const std::vector<double>& values
    );

    void applyBalances(
        Group* group,
        Expense* expense
    );
};