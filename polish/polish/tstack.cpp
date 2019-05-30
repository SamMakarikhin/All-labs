#include "pch.h"
#include "tstack.h"

template <typename StackType>
class TStack
{
protected:
	int size;
	int top;
	StackType* memory;
public:
	int GetSize() { return size; }
	TStack(int n = 0);
	TStack(const TStack<StackType> &S);
	TStack& operator=(const TStack<StackType>& stack);
	~TStack() { delete[] memory; }
	StackType Get();
	StackType ShowLast();
	void Put(StackType A);
	bool IsFull();
	bool IsEmpty();
	void PrintStack();
	bool operator!=(const TStack<StackType>& stack) const;
	bool operator==(const TStack<StackType>& stack) const;
};