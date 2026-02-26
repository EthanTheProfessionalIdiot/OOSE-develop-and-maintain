#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
#include "Account.h"
#include "Date.h"

class Statement {
private:
    std::string statementId;
    std::string content;
    Account destination;
    Date dateSent;

public:
    void generate(int string_content);
    std::string getContent();
    void setContent(std::string content);
    Account getDestination();
    void setDestination(Account destination);
};

#endif
