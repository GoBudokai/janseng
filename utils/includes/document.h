#ifndef DOCUMENT_H
#define DOCUMENT_H
#include<vector>
#include<term.h>

class Document
{
/**
@brief Document
@detailed Document is just a list of terms
*/
public:
	typedef std::vector<const Term*>::iterator Iterator;
	typedef std::vector<const Term*>::const_iterator ConstIterator;
	
	Document();
	~Document();

	void AddTerm(const Term*);
	ConstIterator Begin() const;
	ConstIterator End() const;
	void Print() const;
private:
	std::vector<const Term*> m_terms;
};

#endif // DOCUMENT_H
