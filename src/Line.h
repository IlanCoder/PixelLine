#pragma once
#include "Pixel.h"

class Line {
private:
	Pixel pixel;
	bool filter;
	int val, dX, dY, a, b, d, changeLine;
public:
	void init();
	void draw();
	void update();
	void createLine(int x1, int y1, int x2, int y2, int red, int green, int blue);
};