#include "Circle.h"

Circle::Circle(float X, float Y, float Radius)
{
	x = X; y = Y; radius = Radius;
}
void Circle::Show()
{
	glBegin(GL_LINE_LOOP);
	const int NPOINTS = 25;
	const float TWOPI = 2 * 3.1415927;
	const float STEP = TWOPI / NPOINTS;
	for (float angle = 0; angle < TWOPI; angle += STEP)
		glVertex2f(x + radius * cos(angle), y + radius * sin(angle));
	glEnd();
}

void Circle::Move(float dx, float dy)
{
	x += dx, y += dy;
}