#include "pch.h"
#include <iostream>
#include "exception.h"

template <class T>
class TSortElem
{
protected:
	string key;
	T data;
public:
	TSortElem(string _key = "", T _data = 0);
	TSortElem(TSortElem<T> &elem);

	void SetKey(string _key);
	void SetData(T _data);

	string GetKey();
	T GetData();
	T& GetDataAddress();

	TSortElem<T>& operator=(TSortElem<T> &elem);
	bool operator==(TSortElem<T> &elem);
	bool operator>(TSortElem<T> &elem);
	bool operator<(TSortElem<T> &elem);
};