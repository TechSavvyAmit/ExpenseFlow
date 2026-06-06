#include "services/GroupService.h"

Group* GroupService::createGroup(const std::string& name) {

    Group* group = new Group(name);

    groups[group->groupId] = group;

    return group;
}

void GroupService::addMember(Group* group, User* user) {
    group->addMember(user);
}

Group* GroupService::getGroup(const std::string& groupId) {
    return groups[groupId];
}