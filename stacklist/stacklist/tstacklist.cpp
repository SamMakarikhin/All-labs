#include "pch.h"
#include "tstacklist.h"

template <class StackListType>
class TStackList : public TList<StackListType>
{
protected:
	int size;
public:
	TStackList<StackListType>(int _size = 10);
	TStackList<StackListType>(TStackList<StackListType> &A);
	~TStackList();
	void Put(StackListType A);
	StackListType Get();
	int GetMaxSize();
	int GetSize();
	bool IsEmpty();
	bool IsFull();
	void PrintStack();
};