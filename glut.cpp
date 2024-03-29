#ifndef GLUT_CPP

#include <string>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/freeglut.h>

#define GLUT_CPP

void point(GLfloat x, GLfloat y, GLfloat z) {
	glVertex3f(x, y, z);
}

void color(GLfloat r, GLfloat g, GLfloat b) {
	glColor3f(r, g, b);
}


/************************
*				FONTS LIST			*
*************************

* GLUT_BITMAP_8_BY_13 - A variable-width font with every character fitting in a rectangle of 13 pixels high by at most 8 pixels wide.
* GLUT_BITMAP_9_BY_15 - A variable-width font with every character fitting in a rectangle of 15 pixels high by at most 9 pixels wide.
* GLUT_BITMAP_TIMES_ROMAN_10 - A 10-point variable-width Times Roman font.
* GLUT_BITMAP_TIMES_ROMAN_24 - A 24-point variable-width Times Roman font.
* GLUT_BITMAP_HELVETICA_10 - A 10-point variable-width Helvetica font.
* GLUT_BITMAP_HELVETICA_12 - A 12-point variable-width Helvetica font.
* GLUT_BITMAP_HELVETICA_18 - A 18-point variable-width Helvetica font.
* GLUT_STROKE_ROMAN - A proportionally-spaced Roman Simplex font
* GLUT_STROKE_MONO_ROMAN - A fixed-width Roman Simplex font

*************************/



void writeText(float x, float y, std::string text, void *font) {
	glRasterPos2f(x, y);
	//glColor4f(r, g, b, 1.0f);
	const unsigned char* t = reinterpret_cast<const unsigned char *>( text.c_str());
	glutBitmapString(font ? font : GLUT_BITMAP_TIMES_ROMAN_24, t);
}

#endif
