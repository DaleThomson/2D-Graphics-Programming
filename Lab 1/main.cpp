#include <GL/freeglut.h>

void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	// Filled Rectangle
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.5, 0.75);
	glVertex2f(0.5, 0.75);
	glVertex2f(0.5, 0.25);
	glVertex2f(-0.5, 0.25);
	glEnd();
	// Outline Rectangle
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(-0.5, -0.75);
	glVertex2f(0.5, -0.75);
	glVertex2f(0.5, -0.25);
	glVertex2f(-0.5, -0.25);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(320, 320);
	glutCreateWindow("Hello World");
	glClearColor(0.0, 1.0, 1.0, 1.0);
	glutDisplayFunc(renderScene);
	glutMainLoop();
}