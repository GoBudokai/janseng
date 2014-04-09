#ifndef RESULT_H
#define RESULT_H
#include<map>

namespace utils
{
class Document;

class SearchResult
{
public:
	SearchResult();
	~SearchResult();

	void Add(const Document&, const double rank);
private:
	
};

} // utils

#endif // RESULT_H
