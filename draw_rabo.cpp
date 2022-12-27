#include"glut.h"

void draw_rabo(){
	glRotatef(220, 0, 0, 1);
	glRotatef(180, 1, 0, 0);
    glScalef(2.0, 4.0, 5.0);
    glTranslatef(-2, -0.5, 4.875);
    
    glPushMatrix();
    
    // parte de baixo
    glPushMatrix();
    glTranslatef(0, 0, -4.9);
    glBegin(GL_LINE_LOOP);
    point(9, 3.3, -0.3);
    point(8.5, 2.3, -0.5);
    point(7, 1, -0.5);
    point(5, 0, -0.6);
    point(5, 0, 0.6);
    point(7, 1, 0.5);
    point(8.5, 2.3, 0.5);
    point(9, 3.3, 0.3);
    
    glEnd();
    glPopMatrix();
    
    point(8.5, 4.2, 0.3);
    point(8.5, 4.2, -0.3);
  	point(8, 2.8, -0.5);
  	point(6.5, 1.5, -0.5);
  	point(4.5, 0.5, -0.6);
    
    //parte de cima
    glPushMatrix();
    glTranslatef(0, 0, -4.9);
    glBegin(GL_LINE_LOOP);
    point(8.5, 4.2, 0.3);
    point(8.5, 4.2, -0.3);
  	point(8, 2.8, -0.5);
  	point(6.5, 1.5, -0.5);
  	point(4.5, 0.5, -0.6);
    point(4.5, 0.5, 0.6);
    point(6.5, 1.5, 0.5);
    point(8, 2.8, 0.5);
    point(8.5, 4.2, 0.3);
	point(8.5, 4.2, -0.3);
	point(9, 3.3, -0.3);
	point(8.5, 4.2, -0.3);
	point(8.5, 4.2, 0.3);
	point(9, 3.3, 0.3);
	point(8.5, 4.2, 0.3);
    glEnd();
    glPopMatrix();
    
    //parte esquerda
    
    
    // parte direita do rabo
    glPushMatrix();
    glTranslatef(0, 0, -4.9);
    glBegin(GL_LINE_LOOP);
    point(8.5, 4.2, 0.3);
  	point(8, 2.8, 0.5);
  	point(6.5, 1.5, 0.5);
  	point(4.5, 0.5, 0.6);
  	point(5, 0, 0.6);
	point(7, 1, 0.5);
	point(8.5, 2.3, 0.5);
    point(9, 3.3, 0.3);
    glEnd();
    glPopMatrix();
    
    // parte esquerda do rabo
    glPushMatrix();
    glTranslatef(0, 0, -4.9);
    glBegin(GL_LINE_LOOP);
    point(8.5, 4.2, -0.3);
  	point(8, 2.8, -0.5);
  	point(6.5, 1.5, -0.5);
  	point(4.5, 0.5, -0.6);
  	point(5, 0, -0.6);
	point(7, 1, -0.5);
	point(8.5, 2.3, -0.5);
    point(9, 3.3, -0.3);
    glEnd();
    glPopMatrix();
}
