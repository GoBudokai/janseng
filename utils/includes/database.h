#ifndef DATABASE_H
#define DATABASE_H

#include <inverted_index.h>
#include <term.h>

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
	
	void LoadBase(const char* filename);
	void SaveBase(const char* filename);

	InvertedIndex& GetInvertedIndex();
	const InvertedIndex& GetInvertedIndex() const;

	TermsHolder& GetTermsHolder();
	void AddDocument(const Document&);

private:
	InvertedIndex m_invertedIndex;
	TermsHolder m_termsHolder;
};

#endif // DATABASE_H
