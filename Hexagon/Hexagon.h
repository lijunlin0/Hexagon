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
	//����
	POINT points[6];
	Hexagon(HexPoint hp);
	//��ȡ����
	POINT get_point(POINT center,int i);
	void draw();
};
