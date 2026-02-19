#include "Statement.h"

void Statement::generate(int string_content) {
	// TODO - implement Statement::generate
	throw "Not yet implemented";
}

string Statement::getContent() {
	return this->content;
}

void Statement::setContent(string content) {
	this->content = content;
}

Account Statement::getDestination() {
	return this->destination;
}

void Statement::setDestination(Account destination) {
	this->destination = destination;
}
