#include "pch.h"
#include "tarrlist.h"

template <class ArrListType>
class TArrList
{
private:
	int size;
	int count;
	int start;
	int end;
	int *after;
	int *before;
	ArrListType* memory;
	TQueue <int> nullElem;
public:
	TArrList(int _size = 10);
	TArrList(TArrList<ArrListType> &List);
	~TArrList();
	void Put(int n, ArrListType elem);
	void PutStart(ArrListType elem);
	void PutEnd(ArrListType elem);
	ArrListType Get(int n);
	ArrListType GetStart();
	ArrListType GetEnd();
	bool IsFull();
	bool IsEmpty();
	void Print();
};
