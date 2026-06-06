#pragma once

#include <vector>
#include <map>
#include <string>
#include "models/User.h"
#include "models/Expense.h"

class Group {
private:
    static int nextGroupId;

public:
    std::string groupId;
    std::string groupName;

    std::vector<User*> members;
    std::vector<Expense*> expenses;

    std::map<std::string, std::map<std::string, double>> balances;

    Group(const std::string& groupName);

    void addMember(User* user);

    bool hasMember(const std::string& userId);
};