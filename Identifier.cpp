#include "Identifier.h"

Identifier::Identifier(const std::string& name)
:m_name(name),m_guid(next_guid)
{
	next_guid++;
}

Identifier::~Identifier()
{

}

unsigned int Identifier::next_guid = 0;

unsigned int Identifier::getGuid() const
{
	return m_guid;
}

std::string Identifier::getName() const
{
	return m_name;
}

void Identifier::setName(chonst std::string& name)
{
	m_name = name;
}
