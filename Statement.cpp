#include "Statement.h"
#include "Account.h"
#include "Date.h"
#include <sstream>

Statement::Statement()
{
    statementId = "";
    content = "";
    destination = nullptr;
    dateSent = nullptr;
}

void Statement::generate(int contentLength)
{
    if (contentLength <= 0)
    {
        content = "";
        return;
    }

    content = string(contentLength, 'X');

    std::stringstream ss;
    ss << "STMT-" << contentLength;
    statementId = ss.str();
}

string Statement::getContent()
{
    return content;
}

void Statement::setContent(string content)
{
    this->content = content;
}

Account* Statement::getDestination()
{
    return destination;
}

void Statement::setDestination(Account* destination)
{
    this->destination = destination;
}

