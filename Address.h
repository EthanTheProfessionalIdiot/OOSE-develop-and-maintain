#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>   // Needed for std::string

class Address {
private:
    std::string city;
    std::string state;
    std::string street;
    std::string zipCode;

public:
    // Constructor
    Address();

    // Getters
    std::string getCity();
    std::string getState();
    std::string getStreet();
    std::string getZipCode();

    // Setters
    void setCity(const std::string& city);
    void setState(const std::string& state);
    void setStreet(const std::string& street);
    void setZipCode(const std::string& zipCode);
};

#endif

