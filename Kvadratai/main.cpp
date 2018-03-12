#include <iostream>
#include <vector>

#include "IO.h"

int main(void)
{
	Raster raster(IO::GetSquares("data/U2.txt"));
	raster.Render();

	IO::WritePixels(raster, "data/U2rez.txt");
}
