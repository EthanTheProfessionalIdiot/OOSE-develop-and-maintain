#ifndef STATEMENT_H
#define STATEMENT_H

class Statement {

private:
	string statementId;
	string content;
	Account destination;
	Date dateSent;

public:
	void generate(int string_content);

	string getContent();

	void setContent(string content);

	Account getDestination();

	void setDestination(Account destination);
};

#endif
