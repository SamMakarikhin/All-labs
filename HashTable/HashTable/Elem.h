#include "pch.h"
#include <iostream>

template <class T>
class TElem
{
protected:
	T data;
	String key;
public:
	TElem();
	TElem(const T& _data, const String& _key);
	~TElem();
	TElem& operator=(const TElem<T>& elem);
	bool operator==(const TElem<T>& elem);
	bool operator!=(const TElem<T>& elem);
	T& GetData();
	void SetData(const T& _data);
	String& GetKey();
	void SetKey(const String& _key);
	friend std::ostream& operator<<(std::ostream& out, TElem<T>& elem)
	{
		out << elem.GetKey().GetArrChar() << "  ";
		out << "|  ";
		out << elem.GetData() << std::endl;
		return out;
	}
};
