#include <gl\glut.h>
#include <stdio.h>
#include "Lesson.h"

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Simple");

	glutDisplayFunc(Simple_2_5_2::renderScene); 

	Simple_2_5_2::setupRC();

	glutMainLoop();
	return 1;
}