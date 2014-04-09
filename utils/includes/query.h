#ifndef UTILS__QUERY_H
#define UTILS__QUERY_H

#include<vector>
#include<term.h>

namespace utils
{

class Query
{
private:
	Query& operator = (const Query&);
	Query(const Query&);	
public:
	typedef std::vector<const Term*>::iterator Iterator;
	typedef std::vector<const Term*>::const_iterator ConstIterator;

	Query();
	Query(std::vector<const Term*>&);
	~Query();

	ConstIterator Begin() const;
	ConstIterator End() const;
	Iterator Begin();
	Iterator End();
	
	void AddTerm(const Term*);
private:
	std::vector<const Term*> m_termList;
};

} // utils
#endif // UTILS__QUERY_H
