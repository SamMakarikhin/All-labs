#include "pch.h"
#include "tmultistack.h"

template <typename MultiStackType>
class TMStack
{
protected:
	int size;
	MultiStackType* memory;
	int n;
	TNewStack<MultiStackType>** newS;
	int GetFreeMemory();
	void Repack(int k);

public:
	TMStack(int _n, int _size);
	TMStack(TMStack<MultiStackType> &A);

	int GetSize() { return size; }
	MultiStackType Get(int _n);

	void Set(int _n, MultiStackType p);

	bool IsFull(int _n);
	bool IsEmpty(int _n);
};
