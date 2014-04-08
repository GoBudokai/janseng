#include <result.h>
#include <stdio.h>
	
SearchResult::SearchResult()
{}
SearchResult::~SearchResult()
{}

void SearchResult::Add(const Document& document, const double rank)
{
	document.Print();
//	::printf("%s\n", __PRETTY_FUNCTION__);
}
