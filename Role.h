#ifndef ROLE_H
#define ROLE_H

#include <vector>
#include <string>
#include "User.h"

class Role : public User {
private:
    std::vector<User> users;
    std::string adminStatus;

public:
    Role() = default;
};

#endif

