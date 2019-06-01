#pragma once
#include <iostream>
class TPoint
{
protected:
	double x, y;

public:
	TPoint(double _x = 0, double _y = 0);
	TPoint(TPoint &point);
	void SetX(double _x);
	void SetY(double _y);
	double GetX();
	double GetY();
	virtual void show();
	bool operator == (TPoint &point);
	TPoint& operator = (TPoint &point);
};
