#include "Address.h"

// Constructor
Address::Address() : city(""), state(""), street(""), zipCode("") {}

// Getters
std::string Address::getCity() { return city; }
std::string Address::getState() { return state; }
std::string Address::getStreet() { return street; }
std::string Address::getZipCode() { return zipCode; }

// Setters
void Address::setCity(const std::string& c) { city = c; }
void Address::setState(const std::string& s) { state = s; }
void Address::setStreet(const std::string& s) { street = s; }
void Address::setZipCode(const std::string& z) { zipCode = z; }
