#ifndef TYPE_H
#define TYPE_H

#include "Identifier.h"

class Type:public Namespace
{
public:
	Type(const std::string& name,vector<Type*>& superclasses);
private:
	vector<Type*> m_superclasses;

};

#endif // TYPE_H
