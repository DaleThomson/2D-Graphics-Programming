#pragma once
#include "Shapes.h"
class Circle : public Shapes
{
public:
	Circle(float X, float Y, float Radius);
	void Show();
	void Move(float dx, float dy);
private:
	float x, y, radius;
};