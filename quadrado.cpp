#ifndef QUADRADO_CPP

#include "glut.h"
#include <math.h>

#define QUADRADO_CPP


void Frente(){
	glBegin(GL_POLYGON);//FRENTE
		glTexCoord2f(0.0, 0.0);glVertex3f(0,1,0);//A
		glTexCoord2f(1.0, 0.0);glVertex3f(1,1,0);//B
		glTexCoord2f(1.0, 1.0);glVertex3f(1,0,0);//C
		glTexCoord2f(0.0, 1.0);glVertex3f(0,0,0);//D
	glEnd();
}
void LadoDir(){
	glBegin(GL_POLYGON);//LADO DIR
	glTexCoord2f(0.0, 0.0);glVertex3f(1,1,0);//B
	glTexCoord2f(1.0, 0.0);glVertex3f(1,1,1);//B
	glTexCoord2f(1.0, 1.0);glVertex3f(1,0,1);//C
	glTexCoord2f(0.0, 1.0);glVertex3f(1,0,0);//C
	glEnd();
}
void LadoEsq(){
	glBegin(GL_POLYGON);//LADO ESQ
	glTexCoord2f(0.0, 0.0);glVertex3f(0,1,0);//A
	glTexCoord2f(1.0, 0.0);glVertex3f(0,1,1);//A
	glTexCoord2f(1.0, 1.0);glVertex3f(0,0,1);//D
	glTexCoord2f(0.0, 1.0);glVertex3f(0,0,0);//D
	glEnd();
}
void Tras(){
	glBegin(GL_POLYGON);//tras
		glTexCoord2f(0.0, 0.0);glVertex3f(0,1,1);//A
		glTexCoord2f(1.0, 0.0);glVertex3f(1,1,1);//B
		glTexCoord2f(1.0, 1.0);glVertex3f(1,0,1);//C
		glTexCoord2f(0.0, 1.0);glVertex3f(0,0,1);//D
	glEnd();
}
void Cima(){
	glBegin(GL_POLYGON);//CIMA
		glTexCoord2f(0.0, 0.0);glVertex3f(0,1,0);//A
		glTexCoord2f(1.0, 0.0);glVertex3f(0,1,1);//A
		glTexCoord2f(1.0, 1.0);glVertex3f(1,1,1);//B
		glTexCoord2f(0.0, 1.0);glVertex3f(1,1,0);//B
	glEnd();
}
void Baixo(){
	glBegin(GL_POLYGON);//Baixo
	glTexCoord2f(0.0, 0.0);glVertex3f(1,0,0);//C
	glTexCoord2f(1.0, 0.0);glVertex3f(1,0,1);//C
	glTexCoord2f(1.0, 1.0);glVertex3f(0,0,1);//D
	glTexCoord2f(0.0, 1.0);glVertex3f(0,0,0);//D
	glEnd();
}
void drawQuadTex(){
	Frente();
	LadoDir();
	LadoEsq();
	Tras();
	Cima();
	Baixo();
}

#endif
