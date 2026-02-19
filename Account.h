#ifndef ACCOUNT_H
#define ACCOUNT_H

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
