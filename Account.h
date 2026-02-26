#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>      // ✅ ADD THIS
#include "Statement.h" // if you use Statement
#include <string>      // if you use string
class Account {

private:
	string accountId;
	string password;
	std::vector<Statement> statements;

public:
	void logIn();

	void LogOut();
};

#endif

