#include "pch.h"

template <class T>
class THashTable
{
protected:
	static TElem<T> st;
	TElem<T>* node;
	int count;
	int size;
	const int m = 2;
	int Hash(String& key);
	void Expansion(int newsize);
public:
	THashTable(const int _size = 1);
	THashTable(const THashTable<T>& table);
	~THashTable();
	int GetCount() const;
	void Add(String& key, const T& data);
	void Add(TElem<T>& elem);
	bool Del(String& key);
	T& Search(String& key);
	bool IsSimple(const int number);
	friend std::ostream& operator<<(std::ostream& out, const THashTable<T>& table);
}