#include <database.h>
#include <document.h>
#include <inverted_index.h>
#include <vsm_engine.h>
#include <term.h>
#include <result.h>
#include <stdio.h>

using namespace utils;

int main()
{
	Database database;
	VsmEngine vsmSearch(database);

	TermsHolder& termsHolder(database.GetTermsHolder());
	Document document1;
	Document document2;
	std::vector<const Term*> queryVector;
	
	const Term& term1(termsHolder.MakeTermFromString(std::string("yury1")));
	const Term& term2(termsHolder.MakeTermFromString(std::string("yury2")));
	const Term& term3(termsHolder.MakeTermFromString(std::string("yury3")));
	document1.AddTerm(&term1);
	document1.AddTerm(&term2);
	document2.AddTerm(&term2);
	document2.AddTerm(&term3);

	queryVector.push_back(&term1);

	database.AddDocument(document1);
	database.AddDocument(document2);

	Query query(queryVector);
	SearchResult searchResult;
	vsmSearch.StartSearch(query, searchResult);

	return 0;
}
