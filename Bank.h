#ifndef BANK_H
#define BANK_H

class Bank : Role {

private:
	string bankId;
	string bankName;
	string status;

public:
	Bank();

	void AddUser();

	void getUsers();
};

#endif
