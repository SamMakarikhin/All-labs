#include "pch.h"
#include "tnewstack.h"

template <typename NewStackType>
class TNewStack :public TStack<NewStackType>
{
public:
	TNewStack(int _size = 0, NewStackType* _memory = 0);
	TNewStack(TNewStack <NewStackType> &NS);
	int GetFreeMemory();
	int GetSize();
	int GetTop();
	void SetMemory(int _size, NewStackType* _memory);
	void Put(NewStackType _A);
	NewStackType Get();
};
