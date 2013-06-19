#include "Simple_2_5_2.h"

Simple_2_5_2::Simple_2_5_2()
{
}
Simple_2_5_2::~Simple_2_5_2()
{
}

void Simple_2_5_2::renderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0f, 0.0f, 0.0f);
	glRectf(-25.0f, 25.0f, 25.0f, -25.0f);

	glFlush();
}
void Simple_2_5_2::setupRC(void)
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}

void Simple_2_5_2::changeSize(GLsizei w, GLsizei h)
{
	GLfloat aspectRatio;

	if (h == 0) h = 1;
	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	
	aspectRatio =  (GLfloat)w / (GLfloat)h;

	if(w <= h)
	{
		glOrtho(-100.0, 100.0, -100.0 / aspectRatio, 100.0 / aspectRatio, 1.0, -1.0);
	}
	else
	{
		glOrtho(-100.0 * aspectRatio, 100.0 * aspectRatio, -100.0, 100.0, 1.0, -1.0);
	}

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

}