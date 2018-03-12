#ifndef VECTOR2_H
#define VECTOR2_H

struct Vector2
{
	Vector2(int x, int y);
	Vector2() : x(0), y(0) {}

	int GetX();
	int GetY();

private:
	int x, y;
};

#endif // VECTOR2_H
