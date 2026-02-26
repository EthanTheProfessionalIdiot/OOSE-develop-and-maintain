#ifndef BANK_H
#define BANK_H
#include "Role.h"
#include "User.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class Role;   // forward declare if needed
class User;   // forward declare

class Bank : Role {

private:
	std::string bankId;
	string bankName;
	string status;

public:
	Bank();

	void AddUser();

	void getUsers();
};

#endif



