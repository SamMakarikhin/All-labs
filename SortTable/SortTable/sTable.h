#include "pch.h"

template<class T>
class TSortTable
{
protected:
	TSortElem<T> notFound;
	TSortElem<T>* mas;
	int leng;
	int count;
public:
	TSortTable(string* _keys, T* _data, int _leng);
	TSortTable(int _leng = 10);
	TSortTable(TSortTable<T> &elem);
	void SetLeng(int _leng);
	void SetCount(int _count);
	int GetLeng();
	int GetCount();
	int Put(string _key, T _data);
	void Del(string _key);
	TSortElem<T>& Search(string _key);
	T& operator[](string _key);
	void Resize(int _leng);
};