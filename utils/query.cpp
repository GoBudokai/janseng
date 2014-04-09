#include<vector>
#include<term.h>
#include<query.h>

namespace utils
{
//---------------------------------------------------------------------------//
Query::Query()
{}

Query::Query(std::vector<const Term*>& termlist)
	: m_termList(termlist)
{}

Query::~Query()
{}

//---------------------------------------------------------------------------//
Query::ConstIterator Query::Begin() const
{
	return m_termList.begin();
}
Query::ConstIterator Query::End() const
{
	return m_termList.end();
}
Query::Iterator Query::Begin()
{
	return m_termList.begin();
}
Query::Iterator Query::End()
{
	return m_termList.end();
}
//---------------------------------------------------------------------------//
void Query::AddTerm(const Term* term)
{
	m_termList.push_back(term);
}

} // utils
