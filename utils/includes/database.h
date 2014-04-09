#ifndef DATABASE_H
#define DATABASE_H

#include <inverted_index.h>
#include <term.h>

namespace utils
{

class Database
{
/**
@brief Database

@detailed Database can be load from file and save to file
Database contains all documents and terms
*/

public:
	Database();
	Database(const char* filename);
	~Database();
	
	void LoadDB(const char* filename);
	void SaveDB(const char* filename);

	InvertedIndex& GetInvertedIndex();
	const InvertedIndex& GetInvertedIndex() const;

	void GetDocumentsByTerm(const Term&, std::vector<const Document*>& result) const;
	TermsHolder& GetTermsHolder();
	void AddDocument(const Document&);

private:
	InvertedIndex m_invertedIndex;
	TermsHolder m_termsHolder;
};

} // utils

#endif // DATABASE_H
