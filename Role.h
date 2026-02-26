#ifndef ROLE_H
#define ROLE_H

#include <vector>
#include <string>
#include "User.h"

class Role : public User {
private:
    std::string adminStatus;
protected:
    std::vector<User> users;
public:
    Role() = default;
};

#endif


