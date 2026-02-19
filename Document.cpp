#include "Document.h"

Document::Document() {
	// TODO - implement Document::Document
	throw "Not yet implemented";
}

void Document::Generate() {
	// TODO - implement Document::Generate
	throw "Not yet implemented";
}

string Document::getContent() {
	return this->content;
}

void Document::setContent(string content) {
	this->content = content;
}

Account Document::getRecipient() {
	return this->recipient;
}

void Document::setRecipient(Account recipient) {
	this->recipient = recipient;
}

int Document::getPageCount() {
	return this->pageCount;
}

void Document::setPageCount(int pageCount) {
	this->pageCount = pageCount;
}
