#ifndef FUNCTION_H
#define FUNCTION_H

#include Variable

class Statement;

class Function:public Variable, public Namespace, public Statement
{
public:
	Function(Variable& return Type,const std::string& name,)
private:
	vector<statements*>
};

#endif // FUNCTION_H
