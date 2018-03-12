#include "Raster.h"

Raster::Raster(const std::vector<Square>& objects)
{
	_objects = objects;
}

void Raster::Render()
{
	int max_x = 0, max_y = 0;

	for (int i = 0; i < _objects.size(); i++)
	{
		Vector2 pos = _objects[i].GetPos();

		if (pos.GetX() + _objects[i].GetSize() > max_x) max_x = pos.GetX() + _objects[i].GetSize();
		if (pos.GetY() + _objects[i].GetSize() > max_y) max_y = pos.GetY() + _objects[i].GetSize();

		for (int pixelY = pos.GetY(); pixelY < pos.GetY() + _objects[i].GetSize(); pixelY++)
		{
			for (int pixelX = pos.GetX(); pixelX < pos.GetX() + _objects[i].GetSize(); pixelX++)
			{
				//If pixel is white, proceed to apply color
				if (screen[pixelY][pixelX].r == Color255_RGB::COLOR_WHITE && screen[pixelY][pixelX].g == Color255_RGB::COLOR_WHITE && screen[pixelY][pixelX].b == Color255_RGB::COLOR_WHITE)
				{
					screen[pixelY][pixelX] = _objects[i].GetColor();
				}
			}
		}
	}

	returnSize = Vector2(max_x, max_y);
}

