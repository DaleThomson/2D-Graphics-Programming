#include "Circle.h"
#include "Rect.h"

void display()
{
	Circle c1(0.5, 0.0, 0.4);
	Circle c2(0.0, 0.5, 0.4);
	Circle c3(-0.5, 0.0, 0.4);
	Circle c4(0.0, -0.5, 0.4);
	Rect r1(-0.5f, -0.25f, 0.75f, 0.5f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	c1.Move(0.1, 0.2);  c1.Show();
	glColor3f(1.0, 1.0, 0.0);
	c2.Move(-0.1, -0.2); c2.Show();
	glColor3f(1.0, 0.0, 1.0);
	c3.Move(0.4, 0.5); c3.Show();
	glColor3f(0.0, 1.0, 0.0);
	c4.Move(-0.4, -0.5); c4.Show();
	glColor3f(0.0, 0.0, 1.0);
	r1.Move(0.2, 0.6); r1.Show();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("Simple Shapes");
	glClearColor(1, 1, 1, 1);
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutMainLoop();
	return 0;
}