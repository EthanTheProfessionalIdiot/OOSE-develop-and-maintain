#include "Statement.h"
#include "Account.h"   // full definition needed for cpp
#include "Date.h"

// Constructor
Statement::Statement() {
    destination = nullptr;
    dateSent = nullptr;
    content = "";
}

// Content getters/setters
std::string Statement::getContent() {
    return content;
}

void Statement::setContent(const std::string& newContent) {
    content = newContent;
}

// Destination getters/setters
Account* Statement::getDestination() {
    return destination;
}

void Statement::setDestination(Account* dest) {
    destination = dest;
}

// Date getters/setters
Date* Statement::getDateSent() {
    return dateSent;
}

void Statement::setDateSent(Date* date) {
    dateSent = date;
}








