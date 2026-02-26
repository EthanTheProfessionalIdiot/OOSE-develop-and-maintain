#ifndef BANK_H
#define BANK_H

#include <string>
#include <vector>
#include "Role.h"
#include "User.h"

class Bank : public Role {
private:
    std::string bankId;
    std::string bankName;
    std::string status;

public:
    Bank() = default;                    

    // Add user to inherited 'users' vector
    void AddUser(const User& user) { users.push_back(user); }

    // Access all users
    std::vector<User> getUsers() { return users; }

    // Add this so tests compile
    size_t GetUserCount() const { return users.size(); }
};

#endif






