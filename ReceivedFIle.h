#ifndef RECEIVEDFILE_H
#define RECEIVEDFILE_H

class ReceivedFIle {

private:
	int pageCount;
	string statements;
	string documentType;
	string fileId;
	string documentId;

public:
	void Split(int char_splitChar);

	void SeparateStatements();
};

#endif
