#pragma once

#include <vector>

#include "Square.h"
#include "Color255_RGB.h"

class Raster
{
private:
	std::vector<Square> _objects; //objects to render

public:
	Raster(const std::vector<Square>& objects);
	Color255_RGB screen[100][100]; //pixel data
	Vector2 returnSize;

	void Render();
};

