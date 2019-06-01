#include "pch.h"
#include "tpoint.h"


class TPlex : public TPoint
{
protected:
	TPoint *l, *r;

public:
	TPlex();
	TPlex(TPoint *_l, TPoint *_r);
	TPlex(TPlex& P);
	void SetL(TPoint *_l);
	void SetR(TPoint *_r);
	TPoint* GetL();
	TPoint* GetR();
	virtual void show();
	void Add(TPoint *_p1, TPoint *_p2);
	TPoint* Search(TPoint *point);
};
