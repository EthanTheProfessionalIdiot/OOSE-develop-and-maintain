#include "Address.h"

string Address::getCity() {
	return this->city;
}

void Address::setCity(string city) {
	this->city = city;
}

string Address::getState() {
	return this->state;
}

void Address::setState(string state) {
	this->state = state;
}

string Address::getStreet() {
	return this->street;
}

void Address::setStreet(string street) {
	this->street = street;
}

string Address::getZipCode() {
	return this->zipCode;
}

void Address::setZipCode(string zipCode) {
	this->zipCode = zipCode;
}
