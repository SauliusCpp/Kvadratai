#ifndef COLOR255_RGB_H
#define COLOR255_RGB_H

typedef unsigned char BYTE;

struct Color255_RGB
{
	BYTE r, g, b;

	Color255_RGB(const BYTE& r, const BYTE& g, const BYTE& b);
	Color255_RGB() : r(255), g(255), b(255) {}

	const static BYTE COLOR_WHITE;
};

#endif // COLOR255_RGB_H
