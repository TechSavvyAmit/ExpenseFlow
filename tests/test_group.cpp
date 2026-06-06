#include <cassert>
#include "models/Group.h"
#include "models/User.h"

int main() {

    User user("Amit", "amit@gmail.com");

    Group group("Trip");

    group.addMember(&user);

    assert(group.hasMember(user.userId));

    return 0;
}