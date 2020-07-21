#include <GL/freeglut.h>
#include <cmath>

void drawCircle(float x, float y, float radius)
{
	const int NPOINTS = 24;
	const float TWOPI = 2 * 3.14159268;
	const float STEP = TWOPI / NPOINTS;

	glBegin(GL_LINE_LOOP);
	for (float angle = 0; angle < TWOPI; angle += STEP)
		glVertex2f(x + radius * cos(angle), y + radius * sin(angle));
	glEnd();
}

void drawRectangle(float width, float height, float x, float y)
{
	glBegin(GL_LINE_LOOP);
	glVertex2f(x, y);
	glVertex2f(x + width, y);
	glVertex2f(x + width, y + height);
	glVertex2f(x, y + height);
	glEnd();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 0);
	glPointSize(5.0f);
	drawCircle(0.2, 0.25, 0.5f);
	drawCircle(-0.2, -0.25, 0.5f);
	drawRectangle(0.25f, 0.45f, 0.20f, 0.05f);
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
