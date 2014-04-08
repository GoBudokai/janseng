#include <inverted_index.h>
#include <term.h>
#include <database.h>

Database::Database()
	: m_invertedIndex()
	, m_termsHolder()
{}

Database::Database(const char* filename)
{}

Database::~Database()
{}
	
void Database::LoadBase(const char* filename)
{}
void Database::SaveBase(const char* filename)
{}

InvertedIndex& Database::GetInvertedIndex()
{
	return m_invertedIndex;
}

const InvertedIndex& Database::GetInvertedIndex() const
{
	return m_invertedIndex;
}

TermsHolder& Database::GetTermsHolder()
{
	return m_termsHolder;
}

void Database::AddDocument(const Document& document)
{
	m_invertedIndex.AddDocument(document);
}
