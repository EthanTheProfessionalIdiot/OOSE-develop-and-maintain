#include "Statement.h"
#include <sstream>

Statement::Statement()
{
    this->statementId = "";
    this->content = "";
}

void Statement::generate(int contentLength)
{
    // Simple stub logic:
    // Generate fake content based on length

    if (contentLength <= 0)
    {
        content = "";
        return;
    }

    content = string(contentLength, 'X');

    // Auto-generate statement ID
    std::stringstream ss;
    ss << "STMT-" << contentLength;
    statementId = ss.str();
}

string Statement::getContent()
{
    return this->content;
}

void Statement::setContent(string content)
{
    this->content = content;
}

Account Statement::getDestination()
{
    return this->destination;
}

void Statement::setDestination(Account destination)
{
    this->destination = destination;
}
