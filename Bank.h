#ifndef BANK_H
#define BANK_H

#include <string>
#include "Role.h"
#include "User.h"

class Bank : public Role {
private:
    std::string bankId;
    std::string bankName;
    std::string status;

public:
    Bank() = default;                    // Constructor declaration
    void AddUser(User user);    // Function declaration
};

#endif





