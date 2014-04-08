#include <document.h>
#include <inverted_index.h>
#include <stdio.h>

InvertedIndex::InvertedIndex()
{}

InvertedIndex::~InvertedIndex()
{}


void InvertedIndex::AddDocument(const Document& document)
{
	Document::ConstIterator it(document.Begin()), endIt(document.End());

	for(; it != endIt; ++it)
	{
		m_map[*it].push_back(&document);
	}
}

void InvertedIndex::GetDocumentsByTerm(const Term& term
		,std::vector<const Document*>& result) const
{
	std::map<const Term*, std::vector<const Document*> >::const_iterator it;
	if(m_map.end() != (it = m_map.find(&term)))
	{
		result = it->second;
	}
}
