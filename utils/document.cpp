#include <document.h>
#include <stdio.h>

namespace utils
{

Document::Document()
{}

Document::~Document()
{}

void Document::AddTerm(const Term* term)
{
	m_terms.push_back(term);
}

Document::ConstIterator Document::Begin() const
{
	return m_terms.begin();
}
Document::ConstIterator Document::End() const
{
	return m_terms.end();
}

void Document::Print() const
{
#warning delete this method
	ConstIterator it(Begin()), endIt(End());

	for(; it != endIt; ++it)
	{
		::printf("%s ", (*it)->GetString().c_str());
	}
	::printf("\n");
}

} // utils
