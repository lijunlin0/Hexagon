#include<iostream>
#include <graphics.h>
#include <conio.h>
#include"Hexagon.h"

using namespace std;

static const int WIDTH = 800;
static const int HEIGHT = 800;
int main()
{
	initgraph(WIDTH, HEIGHT);
	setbkcolor(WHITE);
	cleardevice();
	setorigin(WIDTH / 2, HEIGHT / 2);
	setaspectratio(1, -1);
	HexPoint center(0, 0);
	for (int i = -20; i < 20; i++)
	{
		for (int j = -20; j < 20; j++)
		{
			HexPoint p(i, j);
			if (p.distance(center) <= 10)
			{
				Hexagon h(p);
				h.draw();
			}
		}
	}
	system("pause");
	return 0;
}