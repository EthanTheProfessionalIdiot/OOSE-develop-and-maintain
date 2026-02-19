#ifndef USER_H
#define USER_H

class User {

private:
	string userId;
	string name;
	string status;
	std::vector<Account> accounts;
	std::vector<Address> address;

public:
	void ReceiveStatement();

	void UpdateEmail();

	void logIn();

	void logOut();
};

#endif
