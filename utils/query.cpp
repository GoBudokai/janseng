#include<vector>
#include<term.h>
#include<query.h>

Query::Query(std::vector<const Term*>& termlist)
	: m_termList(termlist)
{}

Query::ConstIterator Query::Begin() const
{
	return m_termList.begin();
}
Query::ConstIterator Query::End() const
{
	return m_termList.end();
}

Query::~Query()
{}
