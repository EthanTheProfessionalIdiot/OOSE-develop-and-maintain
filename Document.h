#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
using std::string;

#include "Account.h"  // make sure this exists

class Document {

private:
    int pageCount;
    string content;
    Account recipient;
    string documentId;
    string documentIs;  // consider removing if typo

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
