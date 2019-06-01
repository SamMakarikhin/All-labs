#include "pch.h"
#include <iostream>

template <class ElementType>
class TElement
{
private:
	ElementType elem;
	TElement<ElementType>* next;
public:
	TElement(ElementType _elem = 0, TElement<ElementType>* _next = 0);
	TElement(TElement<ElementType> &Elem);
	ElementType GetElem();
	TElement* GetNext();
	void Set(ElementType _elem);
	void SetNext(TElement<ElementType>* next);
};

