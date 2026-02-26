#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Account.h"
#include "Address.h"

class User {
private:
    std::string userId;          // note: renamed to match member
    std::string name;
    std::string status;
    std::vector<Account> accounts;
    std::vector<Address> address;

public:
    User() = default;

    User(const std::string& name_, const std::string& id_)
        : name(name_), userId(id_) {}

    // Accessors
    std::string getName() const { return name; }
    std::string getId() const { return userId; }   // ✅ fixed

    // Optionally: setters
    void setName(const std::string& name_) { name = name_; }
    void setId(const std::string& id_) { userId = id_; }
};

#endif

