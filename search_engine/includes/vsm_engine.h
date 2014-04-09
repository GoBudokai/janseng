#include <query.h>
#include <result.h>
#include <database.h>

class VsmEngine
{
/**
	@brief: vector serch model engine
	
	@detailed: 
*/
private:
	VsmEngine();
	explicit VsmEngine(const VsmEngine&);
	VsmEngine& operator = (const VsmEngine&);
public:
	VsmEngine(utils::Database&);
	~VsmEngine();

	void StartSearch(const utils::Query&, utils::SearchResult&) const;
private:
	const utils::Database& m_database;
};
