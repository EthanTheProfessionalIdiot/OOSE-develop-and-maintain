#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
using std::string;

#include "Account.h"
#include "Date.h"

class Statement {

private:
    string statementId;
    string content;
    Account destination;
    Date dateSent;

public:
    Statement();  // constructor

    void generate(int contentLength);

    string getContent();
    void setContent(string content);

    Account getDestination();
    void setDestination(Account destination);
};

#endif
