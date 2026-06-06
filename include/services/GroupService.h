#pragma once

#include <map>
#include "models/Group.h"

class GroupService {
private:
    std::map<std::string, Group*> groups;

public:
    Group* createGroup(const std::string& name);

    void addMember(Group* group, User* user);

    Group* getGroup(const std::string& groupId);
};