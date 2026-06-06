#pragma once

#include <string>
#include <map>

class User
{
private:
    static int nextId;

public:
    std::string userId;
    std::string name;
    std::string email;

    std::map<std::string, double> balances;

    User(const std::string &name, const std::string &email);

    void updateBalance(const std::string &otherUserId, double amount);
};