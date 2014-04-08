#ifndef QUERY_H
#define QUERY_H

#include<vector>
#include<term.h>

class Query
{
private:

public:
//	typedef std::vector<const Term>::iterator Iterator;
	typedef std::vector<const Term*>::const_iterator ConstIterator;

	Query(std::vector<const Term*>&);
	~Query();
	ConstIterator Begin() const;
	ConstIterator End() const;
private:
	std::vector<const Term*> m_termList;
};

#endif // QUERY_H
