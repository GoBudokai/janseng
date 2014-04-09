#include <inverted_index.h>
#include <term.h>
#include <database.h>

namespace utils
{

Database::Database()
	: m_invertedIndex()
	, m_termsHolder()
{}

Database::Database(const char* filename)
{}

Database::~Database()
{}
	
void Database::LoadDB(const char* filename)
{}
void Database::SaveDB(const char* filename)
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
void Database::GetDocumentsByTerm(const Term& term, std::vector<const Document*>& result) const
{
	m_invertedIndex.GetDocumentsByTerm(term, result);
}

void Database::AddDocument(const Document& document)
{
	m_invertedIndex.AddDocument(document);
}

} // utils
