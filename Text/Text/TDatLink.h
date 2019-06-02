#include <iostream>

template<class ValType>
class TDatLink {
protected:
	ValType value; 
	TDatLink* pNext; 
public:
	TDatLink(ValType Val = 0, TDatLink* next = NULL);
	void SetDatValue(ValType Val);
	ValType& GetDatValue();
	void SetNextLink(TDatLink* pLink);
	TDatLink* GetNextLink();
};