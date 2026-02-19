#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document {

private:
	int pageCount;
	string content;
	Account recipient;
	string documentId;
	string documentIs;

public:
	Document();

	void Generate();

	string getContent();

	void setContent(string content);

	Account getRecipient();

	void setRecipient(Account recipient);

	int getPageCount();

	void setPageCount(int pageCount);
};

#endif
