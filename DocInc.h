#ifndef DOCINC_H
#define DOCINC_H

class DocInc {

private:
	string name;
	std::vector<User> users;
	std::vector<ReceivedFIle> files;
	std::vector<Document> documents;
	std::vector<Statement> statements;
	Address address;
	string companyId;

public:
	DocInc();

	void FindUser(int User_user);

	void FindDocument(int string_documentId);

	void FindStatement(int string_statementId);

	void FindFile(int string_fileId);
};

#endif
