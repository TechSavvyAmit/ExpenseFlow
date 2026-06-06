#pragma once

#include <string>
#include <vector>
#include "models/Split.h"

class Expense {
private:
    static int nextExpenseId;

public:
    std::string expenseId;
    std::string description;
    double amount;
    std::string paidBy;

    std::vector<Split> splits;

    Expense(const std::string& description,
            double amount,
            const std::string& paidBy,
            const std::vector<Split>& splits);
};