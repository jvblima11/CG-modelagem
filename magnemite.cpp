#include"glut.h"
void Drawmagnemite(){
	glutWireCube(15);
		//quadrado da direita
		glPushMatrix();
			glTranslatef(9,0,0);
			glScalef(0.2,0.8,0.8);
			glutWireCube(15);
				glPushMatrix();
					glTranslatef(11,0,0);
					glScalef(0.5,0.4,0.2);
					glutWireCube(15);
				glPopMatrix();
				glPushMatrix();
					glTranslatef(33,4.5,0);
					glScalef(2.5,0.2,0.2);
					glutWireCube(15);
				glPopMatrix();
				glPushMatrix();
					glTranslatef(33,-4.5,0);
					glScalef(2.5,0.2,0.2);
					glutWireCube(15);
				glPopMatrix();
		glPopMatrix();
		//quadrado da esquerda
		glPushMatrix();
			glTranslatef(-9,0,0);
			glScalef(0.2,0.8,0.8);
			glutWireCube(15);
				glPushMatrix();
					glTranslatef(-11,0,0);
					glScalef(0.5,0.4,0.2);
					glutWireCube(15);
				glPopMatrix();
				glPushMatrix();
					glTranslatef(-33,4.5,0);
					glScalef(2.5,0.2,0.2);
					glutWireCube(15);
				glPopMatrix();
				glPushMatrix();
					glTranslatef(-33,-4.5,0);
					glScalef(2.5,0.2,0.2);
					glutWireCube(15);
				glPopMatrix();
		glPopMatrix();
		//quadrado de cima
		glPushMatrix();
			glTranslatef(0,9,0);
			glScalef(0.8,0.2,0.8);
			glutWireCube(15);
			//Pino do parafuso de cima
				glPushMatrix();
					glTranslatef(0,17,0);
					glScalef(0.2,1.2,0.2);
					glutWireCube(15);
					//Cruz de X
						glPushMatrix();
							glTranslatef(0,11,0);
							glScalef(2.2,0.4,1);
							glutWireCube(15);
						glPopMatrix();
					//Cruz de Z
						glPushMatrix();
							glTranslatef(0,11,0);
							glScalef(1,0.4,2.2);
							glutWireCube(15);
						glPopMatrix();
				glPopMatrix();
		glPopMatrix();
		//quadrado de baixo
		glPushMatrix();
			glTranslatef(0,-9,0);
			glScalef(0.8,0.2,0.8);
			glutWireCube(15);
		glPopMatrix();
		//quadrado da frente
		glPushMatrix();
			glTranslatef(0,0,9);
			glScalef(0.8,0.8,0.2);
			glutWireCube(15);
		glPopMatrix();
		//pino da frente esquerdo
		glPushMatrix();
			glTranslatef(6,-6,10);
			glRotatef(40,0,1,0);
			glRotatef(30,1,0,0);
			glScalef(0.14,0.14,0.32);
			glutWireCube(15);
				glPushMatrix();
					glTranslatef(0,0,11.2);
					glScalef(2,2,0.5);
					glutWireCube(15);
				glPopMatrix();
		glPopMatrix();
		//pino da frente direito
		glPushMatrix();
			glTranslatef(-6,-6,10);
			glRotatef(-40,0,1,0);
			glRotatef(30,1,0,0);
			glScalef(0.14,0.14,0.32);
			glutWireCube(15);
				glPushMatrix();
					glTranslatef(0,0,11.2);
					glScalef(2,2,0.5);
					glutWireCube(15);
				glPopMatrix();
		glPopMatrix();
		//quadrado de trás
		glPushMatrix();
			glTranslatef(0,0,-9);
			glScalef(0.8,0.8,0.2);
			glutWireCube(15);
		glPopMatrix();
}
