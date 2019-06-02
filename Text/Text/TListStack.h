#include <exeption.h>
#include <TDatLink.h>
#include<iostream>

using namespace std;

template<class ValType>
class TListStack
{
protected:
	TDatLink<ValType>* pFirst; 
	int len;
public:
	TListStack();
	~TListStack();
	int IsEmpty() const; 
	int GetLen();
	void Put(ValType Val); 
	ValType Get(); 
	void Print();
};

