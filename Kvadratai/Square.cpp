#include "Square.h"

Square::Square(const Vector2& position, const int& square_size, const Color255_RGB& color)
{
	_size = square_size;
	_color = color;
	_pos = position;
}

int Square::GetSize() { return _size; }
Color255_RGB Square::GetColor() { return _color; }
Vector2 Square::GetPos() { return _pos; }

