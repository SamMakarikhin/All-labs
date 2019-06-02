#include "TTextLink.h"
#include "TListStack.h"

class TText
{
protected:
	TTextLink* pFirst;
	TTextLink* pCurrent;
	TListStack<TTextLink*> st;
public:
	TText(char* s = 0);
	void GoNextLink();
	void GoDownLink();
	TTextLink* GetCurrent();
	int Reset();
	int GoNext();
	int IsEnded();
	TTextLink* GetLine();
	void InsertNext(char s);
	void InsertNext(char* s);
	void InsertNext(TTextLink* s);
	void InsertDown(char* s);
	void InsertDown(TTextLink* s);
	void DelNext();
	void DelDown();
	void Print(TTextLink *pLink);
	void Print();
};