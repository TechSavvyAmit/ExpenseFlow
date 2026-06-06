#include "models/Expense.h"

int Expense::nextExpenseId = 0;

Expense::Expense(const std::string &description,
                 double amount,
                 const std::string &paidBy,
                 const std::vector<Split> &splits)
    : description(description),
      amount(amount),
      paidBy(paidBy),
      splits(splits)
{

  expenseId = "expense" + std::to_string(++nextExpenseId);
}