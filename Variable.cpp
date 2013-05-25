#include "Variable.h"

Variable::Variable(Type& DataType,const std::string& name):
	Identifier(name),m_dataType(&DataType)
{

}

Type Variable::getType()
{
	return m_dataType;
}

void Variable::setType(Type& DataType)
{
	m_dataType = &DataType;
}
