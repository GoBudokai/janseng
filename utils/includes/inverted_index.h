#ifndef INVERTED_INDEX_H
#define INVERTED_INDEX_H

#include<document.h>
#include<term.h>
#include<vector>
#include<map>

namespace utils
{
class Database;

class InvertedIndex
{
/**
@brief InvertedIndex
@detailed class can be used only inside database
and couldn`t be used outside
*/
private:
	InvertedIndex();
	~InvertedIndex();

	void AddDocument(const Document& document);
	void GetDocumentsByTerm(const Term&, std::vector<const Document*>& result) const;

private:
	std::map<const Term*, std::vector<const Document*> > m_map;
	
	friend class Database;
};

} // utils

#endif // INVERTED_INDEX_H
