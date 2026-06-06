#include "models/Group.h"

int Group::nextGroupId = 0;

Group::Group(const std::string& groupName)
    : groupName(groupName) {

    groupId = "group" + std::to_string(++nextGroupId);
}

void Group::addMember(User* user) {
    members.push_back(user);
}

bool Group::hasMember(const std::string& userId) {
    for (auto user : members) {
        if (user->userId == userId) {
            return true;
        }
    }

    return false;
}