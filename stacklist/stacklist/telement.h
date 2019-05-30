#pragma once
#include <iostream>
using namespace std;

template <class ElementType>
class TElement
{
private:
	ElementType elem; //��������
	TElement<ElementType>* next;//��������� �� ���� �������
public:
	TElement(ElementType _elem = 0, TElement<ElementType>* _next = 0); //����������� � ����������� :1 - �������� �������� 2 - ��������� �� ��������� �������
	TElement(TElement<ElementType> &Elem); //����������� �����������

	ElementType GetElem(); //�������� �������� ��������
	TElement* GetNext(); //�������� ��������� �� ���������

	void Set(ElementType _elem); //���������� ��������
	void SetNext(TElement<ElementType>* next); //���������� ���������
};

template <class ElementType>
TElement<ElementType>::TElement(ElementType _elem, TElement<ElementType>* _next)
{
	elem = _elem;
	if (_next == 0)
		next = 0;
	else
		next = _next;
}

template <class ElementType>
TElement<ElementType>::TElement(TElement<ElementType> &Elem)
{
	elem = Elem.elem;
	next = Elem.next;
}

template <class ElementType>
ElementType TElement<ElementType>::GetElem()
{
	return elem;
}

template <class ElementType>
TElement<ElementType>* TElement<ElementType>::GetNext()
{
	return next;
}

template <class ElementType>
void TElement<ElementType>::Set(ElementType _elem)
{
	elem = _elem;
}

template <class ElementType>
void TElement<ElementType>::SetNext(TElement<ElementType>* _next)
{
	next = _next;
}