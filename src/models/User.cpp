#include<models/User.h>
#include<cmath>

int User::nextId = 0;

User::User(const std::string& name, const std::string& email)
    : name(name), email(email) {
    userId = "user" + std::to_string(++nextId);
}

void User::updateBalance(const std::string& otherUserId, double amount) {
    balances[otherUserId] += amount;

    if (std::abs(balances[otherUserId]) < 0.01) {
        balances.erase(otherUserId);
    }
}