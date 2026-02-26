#include "Document.h"
#include <string>
#include <sstream>

// If Account is defined elsewhere, make sure this is included
// #include "Account.h"

Document::Document()
{
    this->pageCount = 0;
    this->content = "";
    this->documentId = "";
    this->documentIs = "";
}

void Document::Generate()
{
    // Simple generation logic for now
    // Page count based on content length (example rule: 500 chars per page)

    if (content.length() == 0)
    {
        pageCount = 0;
        return;
    }

    pageCount = (content.length() / 500) + 1;

    // Optional: auto-generate documentId
    std::stringstream ss;
    ss << "DOC-" << content.length() << "-" << pageCount;
    documentId = ss.str();
}

string Document::getContent()
{
    return this->content;
}

void Document::setContent(string content)
{
    this->content = content;
}

Account Document::getRecipient()
{
    return this->recipient;
}

void Document::setRecipient(Account recipient)
{
    this->recipient = recipient;
}

int Document::getPageCount()
{
    return this->pageCount;
}

void Document::setPageCount(int pageCount)
{
    this->pageCount = pageCount;
}


