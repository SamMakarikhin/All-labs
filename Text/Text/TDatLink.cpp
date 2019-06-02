#include "pch.h"
#include "TDatLink.h"


template<class ValType>
TDatLink<ValType>::TDatLink(ValType Val, TDatLink* next)
{
	value = Val;
	pNext = next;
}

template<class ValType>
void TDatLink<ValType>::SetDatValue(ValType Val)
{
	value = Val;
}

template<class ValType>
ValType& TDatLink<ValType>::GetDatValue()
{
	return value;
}

template<class ValType>
void TDatLink<ValType>::SetNextLink(TDatLink * pLink)
{
	pNext = pLink;
}

template<class ValType>
TDatLink<ValType> * TDatLink<ValType>::GetNextLink()
{
	return pNext;
}