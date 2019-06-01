#include "pch.h"
#include "tpoint.h"
class TSection
{
protected:
	TPoint p1, p2;

public:
	TSection(TPoint _p1, TPoint _p2);
	TSection(TSection &S);
	void SetP1(TPoint _p);
	void SetP2(TPoint _p);
	TPoint GetP1();
	TPoint GetP2();
	virtual void show();
};

