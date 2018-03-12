#ifndef SQUARE_H
#define SQUARE_H

#include "Color255_RGB.h"
#include "Vector2.h"

struct Square
{
	Square(const Vector2& position, const int& square_size, const Color255_RGB& color);
	Square() : _pos(0,0), _size(0), _color(Color255_RGB::COLOR_WHITE, Color255_RGB::COLOR_WHITE, Color255_RGB::COLOR_WHITE){}

	int GetSize();
	Color255_RGB GetColor();
	Vector2 GetPos();

private:
	Vector2 _pos;
	int _size;
	Color255_RGB _color;
};

#endif // KVADRATAS_H
