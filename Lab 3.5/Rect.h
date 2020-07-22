#pragma once
#include "Shapes.h"
class Rect : public Shapes
{
public:
	Rect(float Width, float Height, float X, float Y);
	void Show();
	void Move(float dx, float dy);
private:
	float width, height, x, y;
};
