#pragma once
#include <iostream>
using namespace std;

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

void TPoint::SetX(double _x)
{
	x = _x;
}

void TPoint::SetY(double _y)
{
	y = _y;
}

double TPoint::GetX()
{
	return x;
}

double TPoint::GetY()
{
	return y;
}

TPoint::TPoint(double _x, double _y)
{
	x = _x;
	y = _y;
}

TPoint::TPoint(TPoint &point)
{
	x = point.x;
	y = point.y;
}

void TPoint::show()
{
	cout << "(" << x << "," << y << ")\n";
}

bool TPoint::operator == (TPoint &point)
{
	return ((x == point.GetX()) && (y == point.GetY()));
}

TPoint& TPoint::operator = (TPoint &point)
{
	x = point.x;
	y = point.y;
	return *this;
}
