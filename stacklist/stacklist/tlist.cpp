#include "pch.h"
#include "tlist.h"

template <class ListType>
class TList
{
protected:
	int count;
	TElement<ListType>* start;
public:
	TList();
	TList(TList<ListType> &List);
	~TList();
	void Put(int _n, ListType elem);
	void PutStart(ListType List);
	void PutEnd(ListType List);
	ListType Get(int _n);
	ListType GetStart();
	ListType GetEnd();
	bool IsFull();
	bool IsEmpty();
	void PrintList();
};