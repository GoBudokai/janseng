#ifndef RESULT_H
#define RESULT_H
#include<document.h>

class SearchResult
{
public:
	SearchResult();
	~SearchResult();

	void Add(const Document&, const double rank);
private:
};

#endif // RESULT_H
