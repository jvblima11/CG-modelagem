#ifndef GEOMETRY_CPP

#include "glut.h"
#include <math.h>

#define GEOMETRY_CPP

#define PI 3.1415926535897

GLUquadricObj *quadratic = gluNewQuadric();

float rad(float angle) {
	return (angle / 180) * PI;
}

void drawCylinder(float base, float top, float height) {
	gluCylinder(quadratic, base, top, height, 30, 30);	
}

void drawCircle(float radius, int solid) {
    float twoPI = 2 * PI;

		// GL_TRIANGLE_FAN | GL_POINTS
    glBegin(!solid ? GL_POINTS : GL_TRIANGLE_FAN);
	    for (float i = 0.0; i <= twoPI; i += 0.001){
	    	point((sin(i)*radius), (cos(i)*radius), 0);
	    	point((sin(i)*radius), (cos(i)*radius), -0.003);
			}
    glEnd();
}

void drawCustomCircle(float startingAngle, float endingAngle, float radius, float spacing, int x, int y, int z, int solid) {
	// Must be in pairs of axes
	if(!(x & y) && !(x & z) && !(y & z)) return;

	// Must be in pairs of axes
	if(x & y & z) return;
	
	if(startingAngle > endingAngle) {
		float temp = startingAngle;
		startingAngle = endingAngle;
		endingAngle = temp;
		spacing *= -1;
	}

	// GL_TRIANGLE_FAN | GL_POINTS
  glBegin(!solid ? GL_POINTS : GL_TRIANGLE_FAN);
    for (float i = startingAngle; i <= endingAngle; i += spacing){
    	if(x & y) point(sin(rad(i)) * radius, cos(rad(i)) * radius, 0);
    	if(x & z) point(sin(rad(i)) * radius, 0, cos(rad(i)) * radius);
    	if(y & z) point(0, sin(rad(i)) * radius, cos(rad(i)) * radius);
		}
  glEnd();
}

void drawHalfSphere(float radius) {
	float twoPI = 2 * PI;
	float space = 1;
	float x, y, z;
	
	//GL_POINTS | GL_TRIANGLE_FAN
	glBegin(GL_POINTS);
		for (float theta = 0; theta <= 90 - space; theta += space) {
			for (float phi = 0; phi <= 360 - space; phi += space) {
				x = radius * sin(rad(phi)) * sin(rad(theta));
				y = radius * cos(rad(phi)) * sin(rad(theta));
				z = radius * cos(rad(theta));
				point(x, y, z);
			}
		}
	glEnd();
}

void drawSphereSection(float startingTheta, float startingPhi, float endingTheta, float endingPhi, float radius, float space, int solid) {
	float x, y, z;
	
	//GL_POINTS | GL_TRIANGLE_FAN
	glBegin(!solid ? GL_POINTS : GL_TRIANGLE_FAN);
		for (float theta = startingTheta; theta <= endingTheta; theta += space) {
			for (float phi = startingPhi; phi <= endingPhi; phi += space) {
				x = radius * sin(rad(phi)) * sin(rad(theta));
				y = radius * cos(rad(phi)) * sin(rad(theta));
				z = radius * cos(rad(theta));
				point(x, y, z);
			}
		}
	glEnd();
}

void drawRings(float radius, float gap) {
	float twoPI = 2 * PI;
	float space = 1;
	float x, y, z;
	
	//GL_POINTS | GL_TRIANGLE_FAN
	glBegin(GL_POINTS);
		for (float i = 0.0; i <= twoPI; i += 0.001){
    	point((sin(i)*radius), gap/2, (cos(i)*radius));
    	point((sin(i)*radius), -gap/2, (cos(i)*radius));
		}
	glEnd();
}

void drawTrapezoid3(float base, float top, float height, float depth, int withTop, int withBottom, int solid) {
	int solidMode = GL_QUADS;
	int wireMode = GL_LINE_LOOP;
	
	// Direita
	glBegin(solid ? solidMode : wireMode);
		glVertex3f(-base/2, -height/2, depth/2);
		glVertex3f(base/2, -height/2, depth/2);
		glVertex3f(top/2, height/2, depth/2);
		glVertex3f(-top/2, height/2, depth/2);
	glEnd();
	
	// Esquerda
	glBegin(solid ? solidMode : wireMode);
		glVertex3f(-base/2, -height/2, -depth/2);
		glVertex3f(base/2, -height/2, -depth/2);
		glVertex3f(top/2, height/2, -depth/2);
		glVertex3f(-top/2, height/2, -depth/2);
	glEnd();
	
	// Frente
	glBegin(solid ? solidMode : wireMode);
		glVertex3f(base/2, -height/2, -depth/2);
		glVertex3f(base/2, -height/2, depth/2);
		glVertex3f(top/2, height/2, depth/2);
		glVertex3f(top/2, height/2, -depth/2);
	glEnd();
	
	// Costa
	glBegin(solid ? solidMode : wireMode);
		glVertex3f(-base/2, -height/2, -depth/2);
		glVertex3f(-base/2, -height/2, depth/2);
		glVertex3f(-top/2, height/2, depth/2);
		glVertex3f(-top/2, height/2, -depth/2);
	glEnd();
	
	// Cima
	if(withTop) {
		glBegin(solid ? solidMode : wireMode);
			glVertex3f(-top/2, height/2, -depth/2);
			glVertex3f(-top/2, height/2, depth/2);
			glVertex3f(top/2 , height/2, depth/2);
			glVertex3f(top/2 , height/2, -depth/2);
		glEnd();
	}
	
	if(withBottom) {
		glBegin(solid ? solidMode : wireMode);
			glVertex3f(-base/2, -height/2, -depth/2);
			glVertex3f(-base/2, -height/2, depth/2);
			glVertex3f(base/2,  -height/2, depth/2);
			glVertex3f(base/2,  -height/2, -depth/2);
		glEnd();
	}
}

void drawTrapezoid2(float base, float top, float height) {
	glBegin(GL_QUADS);
		glVertex3f(-base/2, -height/2, 0);
		glVertex3f(base/2, -height/2, 0);
		glVertex3f(top/2, height/2, 0);
		glVertex3f(-top/2, height/2, 0);
	glEnd();
}

void drawPyramid()
{
glBegin( GL_TRIANGLES );
glVertex3f( 0.0f, 1.f, 0.0f );
glVertex3f( -1.0f, -1.0f, 1.0f );
glVertex3f( 1.0f, -1.0f, 1.0f);

glVertex3f( 0.0f, 1.0f, 0.0f);
glVertex3f( -1.0f, -1.0f, 1.0f);
glVertex3f( 0.0f, -1.0f, -1.0f);

glVertex3f( 0.0f, 1.0f, 0.0f);
glVertex3f( 0.0f, -1.0f, -1.0f);
glVertex3f( 1.0f, -1.0f, 1.0f);

glVertex3f( -1.0f, -1.0f, 1.0f);
glVertex3f( 0.0f, -1.0f, -1.0f);
glVertex3f( 1.0f, -1.0f, 1.0f);

glEnd();

}
#endif
