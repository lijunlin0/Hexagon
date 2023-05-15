#pragma once
#include <graphics.h>

class HexPoint
{
private:
	double X;
	double Y;
	double Z;
public:
	HexPoint(double X, double Y);
	double GetX();
	double GetY();
	double GetZ();
	POINT ToPixel();
	int distance(HexPoint p);
};
