#include "pch.h"
#include <iostream>
#include "tplex.h"
#include <locale>
#include 
using namespace std;

int main()
{
	int _p1 = 0, _p2 = 0;
	TPoint Point1, Point2(2, 4), Point3(0, 5), Point4(4, 13), Point5;
	cin >> _p1 >> _p2;
	//cout<<":\n";
	Point1.SetX(_p1);
	Point1.SetY(_p2);
	Point1.show();
	Point2.show();
	Point3.show();
	TSection Po1Po2(Point1, Point2);
	Po1Po2.show();
	TPlex P, P1(&Point1, &Point2);
	TPlex P2(P1);
	P2.Add(&Point1, &Point3);
	P2.Add(&Point3, &Point4);
	cin >> _p1 >> _p2;
	Point5.SetX(_p1);
	Point5.SetY(_p2);
	P2.Add(&Point2, &Point5);
	P2.show();
	return 0;
}

