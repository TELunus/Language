#include "Type.h"

Type::Type(const std::string& name,vector<Type*>& superclasses):
	Namespace(name),m_superclasses(superclasses)
{

}
