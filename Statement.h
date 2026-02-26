#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
using std::string;

class Account;  // ✅ Forward declaration
class Date;     // ✅ Forward declaration

class Statement {

private:
    string statementId;
    string content;
    Account* destination;  // ⚠️ pointer avoids incomplete type issue
    Date* dateSent;        // pointer for same reason

public:
    Statement();

    void generate(int contentLength);

    string getContent();
    void setContent(string content);

    Account* getDestination();
    void setDestination(Account* destination);
};

#endif
