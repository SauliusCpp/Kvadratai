#include "IO.h"

#include <fstream>

std::vector<Square> IO::GetSquares(const char* path)
{
	std::vector<Square> kvadratai;

	std::ifstream reader(path);

	int square_count;
	reader >> square_count;

	kvadratai.reserve(square_count);

	for (int i = 0; i < square_count; i++)
	{
		int square_size;
		int x, y;
		int r, g, b;
		reader >> x >> y;
		reader >> square_size;
		reader >> r >> g >> b;

		kvadratai.push_back(Square(Vector2(x, y), square_size, Color255_RGB(r, g, b)));
	}

	reader.close();

	return kvadratai;
}

void IO::WritePixels(const Raster& raster, const char* path)
{
	std::ofstream writer(path);

	Vector2 size = raster.returnSize;

	writer << size.GetX() << " " << size.GetY() << "\n";

	for (int y = 0; y < size.GetY(); y++)
	{
		for (int x = 0; x < size.GetX(); x++)
		{
			Color255_RGB pixel = raster.screen[y][x];

			writer << (int)pixel.r << " " << (int)pixel.g << " " << (int)pixel.b;

			if(y != size.GetY()) writer << "\n";
		}
	}

	writer.close();
}
