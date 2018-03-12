#ifndef IO_H
#define IO_H

#include <vector>
#include "Color255_RGB.h"
#include "Square.h"
#include "Raster.h"

class IO
{
public:
	static std::vector<Square> GetSquares(const char* path);
	static void WritePixels(const Raster& raster, const char* path);

};

#endif // IO_H
