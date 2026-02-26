#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
#include "Account.h"
#include "Date.h"

class Account;  // forward declaration
class Date;     // forward declaration


class Statement {
private:
    std::string statementId;
    std::string content;
    Account* destination;   // pointer
    Date* dateSent;         // pointer

public:
    Statement();   // ADD THIS
    void generate(int string_content);
    std::string getContent();
    void setContent(std::string content);
    Account* getDestination();
    void setDestination(Account* destination);
};

#endif


