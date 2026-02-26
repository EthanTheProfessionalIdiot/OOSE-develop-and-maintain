#include "Statement.h"
#include "Account.h"
#include "Date.h"
#include <sstream>

Statement::Statement()
{
    // leave empty
}

void Statement::generate(int contentLength)
{
    if (contentLength <= 0)
    {
        content = "";
        return;
    }

    content = std::string(contentLength, 'X');

    std::stringstream ss;
    ss << "STMT-" << contentLength;
    statementId = ss.str();
}

std::string Statement::getContent()
{
    return content;
}

void Statement::setContent(std::string content)
{
    this->content = content;
}

Account Statement::getDestination()
{
    return destination;
}

void Statement::setDestination(Account destination)
{
    this->destination = destination;
}




