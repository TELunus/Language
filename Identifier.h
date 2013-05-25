#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <string>

class Identifier
{
	public:
		Identifier(const std::string& name);
		virtual ~Identifier();
		std::string getName() const;
		void setName(const std::string& name);
		unsigned int getGuid() const;
	protected:
	private:
		std::string m_name;
		unsigned int m_guid;
		static unsigned int next_guid;
};

#endif // IDENTIFIER_H
