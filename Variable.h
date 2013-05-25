#ifndef VARIABLE_H
#define VARIABLE_H

#include "Type.h"

class Variable: public Type
{
public:
	Variable(Type& DataType, const std::string& name);
	Type getType();
	void setType(Type& DataType);
private:
	Type* m_dataType;

};

#endif // VARIABLE_H
