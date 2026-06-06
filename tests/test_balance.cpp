#include <cassert>
#include "models/User.h"

int main()
{

    User u1("Amit", "a@gmail.com");
    User u2("Rohit", "r@gmail.com");

    u1.updateBalance(u2.userId, 100);

    assert(u1.balances[u2.userId] == 100);

    return 0;
}