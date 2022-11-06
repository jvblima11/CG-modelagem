#ifndef GLUT_HPP
#include <string>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/freeglut.h>

#define GLUT_HPP

void point(GLfloat x, GLfloat y, GLfloat z);

void color(GLfloat r, GLfloat g, GLfloat b);

void writeText(float x, float y, std::string text, void *font);

#endif
