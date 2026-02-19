#ifndef ROLE_H
#define ROLE_H

class Role : User {

private:
	std::vector<User> users;
	string adminStatus;

public:
	void getPermissions();
};

#endif
