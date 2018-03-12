#include "Color255_RGB.h"

Color255_RGB::Color255_RGB(const BYTE& r, const BYTE& g, const BYTE& b)
{
	this->r = r;
	this->g = g;
	this->b = b;
};

const BYTE Color255_RGB::COLOR_WHITE(255);