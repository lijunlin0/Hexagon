#include"HexPoint.h"
#include"math.h"
#include<iostream>
#include"Hexagon.h"

HexPoint::HexPoint(double X, double Y)
{
	this->X = X;
	this->Y = Y;
	Z = -X - Y;
}
double HexPoint::GetX() { return X; }
double HexPoint::GetY() { return Y; }
double HexPoint::GetZ() { return Z; }
POINT HexPoint::ToPixel()
{
	POINT p;
	p.x = (X* sqrt(3) + Z * sqrt(3) / 2)* Hexagon::SIZE;
	p.y = 1.5 * Z*Hexagon::SIZE;
	return p;
}

int HexPoint::distance(HexPoint p)
{
	return (abs(p.GetX() - X) + abs(p.GetY() - Y) + abs(p.GetZ() - Z)) / 2;
}