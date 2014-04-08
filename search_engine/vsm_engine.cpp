#include<query.h>
#include<term.h>
#include<database.h>
#include<document.h>
#include<result.h>
#include<vsm_engine.h>
#include<stdio.h>

VsmEngine::VsmEngine(Database& database)
	: m_database(database)
{}

VsmEngine::~VsmEngine()
{}

void VsmEngine::StartSearch(const Query& query, SearchResult& searchResult) const
{
	const InvertedIndex& invertedIndex(m_database.GetInvertedIndex());
	
	Query::ConstIterator endIt(query.End());
	
	for(Query::ConstIterator it(query.Begin()); it != endIt; ++it)
	{
		std::vector<const Document*> documents;
		invertedIndex.GetDocumentsByTerm(**it, documents);

		for(std::vector<const Document*>::iterator docIt(documents.begin()); docIt != documents.end(); ++docIt)
		{
			searchResult.Add(**docIt, 1);
		}
	}

}
