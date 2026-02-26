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

    // Inline function definitions
    void AddUser(const User& user) { users.push_back(user); }
    std::vector<User> getUsers() { return users; }
    size_t GetUserCount() const { return users.size(); }
};

#endif





