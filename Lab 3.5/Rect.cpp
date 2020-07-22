#include "Rect.h"

Rect::Rect(float Width, float Height, float X, float Y)
{
	width = Width, height = Height, x = X, y = Y;
}

void Rect::Show()
{
	glBegin(GL_LINE_LOOP);
	glVertex2f(x, y);
	glVertex2f(x + width, y);
	glVertex2f(x + width, y + height);
	glVertex2f(x, y + height);
	glEnd();
}

void Rect::Move(float dx, float dy)
{
	x += dx; y += dy;
}