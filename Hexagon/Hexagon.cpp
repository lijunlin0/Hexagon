#include<iostream>
#include"Hexagon.h"
#include<math.h>
const double PI = 3.14159265358979323846;

Hexagon::Hexagon(HexPoint hp) :HP(hp) {};

POINT Hexagon::get_point(POINT center, int i)
{
	double angle = 60 * i + 30;
	double radian = PI / 180 * angle;
	POINT P;
	P.x = center.x+ SIZE * cos(radian);
	P.y = center.y + SIZE* sin(radian);
	//std::cout << P.x << " " << P.y << endl;
	return P;
}

void Hexagon::draw()
{
	POINT p=HP.ToPixel();
	for (int i = 0; i < 6; i++)
	{
		points[i] = get_point(p,i);
	}
	setlinecolor(BLACK);
	setfillcolor(LIGHTCYAN);
	fillpolygon(points,6);
}
