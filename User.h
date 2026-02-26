#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Account.h"
#include "Address.h"

class User {
private:
    std::string userId;
    std::string name;
    std::string status;
    std::vector<Account> accounts;
    std::vector<Address> address;

public:
    User() = default;
    User(std::string name, std::string id)
        : name(name), userId(id) {}
};

#endif
