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
	glFlush();
}
void Simple_2_5_2::setupRC(void)
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}