#ifndef NAMESPACE_H
#define NAMESPACE_H

#include "Identifier.h"
#include <vector>

class Namespace: public Identifier
{
public:
	Namespace(const std::string& name);
	virtual ~Namespace();
	void add(Identifier&);
private:
	std::vector<Identifier*> m_data;
};

#endif // NAMESPACE_H
