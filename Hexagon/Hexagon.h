#pragma once
#include <graphics.h>
#include <conio.h>
#include"HexPoint.h"

using namespace std;

class Hexagon
{
public:
	static const int SIZE = 20;
	HexPoint HP;
	//顶点
	POINT points[6];
	Hexagon(HexPoint hp);
	//获取顶点
	POINT get_point(POINT center,int i);
	void draw();
};
