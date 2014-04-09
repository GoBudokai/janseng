#include<query.h>
#include<term.h>
#include<database.h>
#include<document.h>
#include<result.h>
#include<vsm_engine.h>
#include<stdio.h>

VsmEngine::VsmEngine(utils::Database& database)
	: m_database(database)
{}

VsmEngine::~VsmEngine()
{}

void VsmEngine::StartSearch(const utils::Query& query, utils::SearchResult& searchResult) const
{
//	const utils::InvertedIndex& invertedIndex(m_database.GetInvertedIndex());
	
	utils::Query::ConstIterator endIt(query.End());
	
	for(utils::Query::ConstIterator it(query.Begin()); it != endIt; ++it)
	{
		std::vector<const utils::Document*> documents;
		m_database.GetDocumentsByTerm(**it, documents);

		for(std::vector<const utils::Document*>::iterator docIt(documents.begin()); docIt != documents.end(); ++docIt)
		{
			searchResult.Add(**docIt, 1);
		}
	}

}
