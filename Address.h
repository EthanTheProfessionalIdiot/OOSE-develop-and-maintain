#ifndef ADDRESS_H
#define ADDRESS_H

class Address {

private:
	string city;
	string state;
	string street;
	string zipCode;

public:
	string getCity();

	void setCity(string city);

	string getState();

	void setState(string state);

	string getStreet();

	void setStreet(string street);

	string getZipCode();

	void setZipCode(string zipCode);
};

#endif
