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
	VsmEngine(Database&);
	~VsmEngine();

	void StartSearch(const Query&, SearchResult&) const;
private:
	const Database& m_database;
};
