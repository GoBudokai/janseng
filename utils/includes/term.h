#ifndef TERM_H
#define TERM_H
#include <stdint.h>
#include <map>
#include <string>
#include <vector>

namespace utils
{

class Term;

class TermsHolder
{
public:
	TermsHolder();
	~TermsHolder();
	const Term& GetTermByIndex(uint32_t index);
	const Term& MakeTermFromString(const std::string& word);
private:
	std::map<std::string, Term> m_mapOfTerms;
	std::vector<Term> m_vectorOfTerms;
};

class Term
{
public:
	Term();
	Term(uint32_t id, const std::string& word);
	~Term();
	bool operator < (const Term&) const;
	const std::string& GetString() const;
private:
	uint32_t m_id;
	std::string m_word;
	friend class TermsHolder;
};

} // utils
#endif // TERM_H
