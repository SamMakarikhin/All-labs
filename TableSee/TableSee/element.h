#include "pch.h"
#include "tstring.h"
#include <iostream>

template <typename ElemType>
class TElement
{
protected:
	ElemType data;
	TString key;
public:
	TElement();
	TElement(const ElemType& A, const TString& B);
	TElement(const ElemType& A);
	~TElement() {}
	TElement& operator=(const TElement<ElemType>& A);
	bool operator==(const TElement<ElemType>& A);
	bool operator!=(const TElement<ElemType>& A);
	ElemType& GetData();
	TString& GetKey();
	void SetData(const ElemType& A);
	void SetKey(const TString& A);
	template <typename Operator>
	friend ostream& operator<<(ostream& out, TElement<Operator>& A);
};