#include "pch.h"
#include "exception.h"

class TException
{
private:
	std::string str;
public:
	TException(std::string _str);
	void Show();
};
