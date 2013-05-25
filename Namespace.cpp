
#include "Namespace.h"

Namespace::Namespace(const std::string& name):
	Identifier(name),m_data()
{

}

void Namespace::add(Identifier& newIdentifier)
{
	m_data.push_back(&newIdentifier);
}
