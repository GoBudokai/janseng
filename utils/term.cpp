#include<term.h>

TermsHolder::TermsHolder()
{}

TermsHolder::~TermsHolder()
{}

const Term& TermsHolder::GetTermByIndex(uint32_t index)
{
	return m_vectorOfTerms[index];
}

const Term& TermsHolder::MakeTermFromString(const std::string& word)
{
	std::map<std::string, Term>::const_iterator it;
	
	if (m_mapOfTerms.end() != (it = m_mapOfTerms.find(word)))
	{
		return it->second;
	}
	
	Term term(m_vectorOfTerms.size(), word);
	
	m_vectorOfTerms.push_back(term);
	m_mapOfTerms[word] = term;

	return m_vectorOfTerms.back();
}

//---------------------------------------------------------------------------//

Term::Term()
	: m_id(0)
	, m_word()
{}

Term::Term(uint32_t id, const std::string& word)
	: m_id(id)
	, m_word(word)
{}

Term::~Term()
{}

bool Term::operator < (const Term& rhs) const
{
	return m_id < rhs.m_id;
}

const std::string& Term::GetString() const
{
	return m_word;
}
