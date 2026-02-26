#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>   // for std::string

// Forward declarations to avoid circular includes
class Account;
class Date;

class Statement {
private:
    std::string content;
    Account* destination;   // pointer to Account
    Date* dateSent;         // pointer to Date

public:
    // Constructor
    Statement();

    // Getters and setters for content
    std::string getContent();
    void setContent(const std::string& content);

    // Getters and setters for destination
    Account* getDestination();
    void setDestination(Account* destination);

    // Getters and setters for dateSent
    Date* getDateSent();
    void setDateSent(Date* date);
};

#endif




