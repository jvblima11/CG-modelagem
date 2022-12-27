#include"glut.h"
void Drawdratini(){
	//cabeça dratini
	glutSolidCube(15);
		//Boca dratini
		glPushMatrix();
			glTranslatef(0,-4.1,9);
			glScalef(0.6,0.3,0.2);
			glutSolidCube(15);
		glPopMatrix();
		//orelha dratini esquerda
		glPushMatrix();
			glRotatef(30,1,0,0);
			glTranslatef(8,0,-4);
			glScalef(0.05,0.8,1);
			glutSolidCube(15);
		glPopMatrix();
		//orelha dratini direita
		glPushMatrix();
			glRotatef(30,1,0,0);
			glTranslatef(-8,0,-4);
			glScalef(0.05,0.8,1);
			glutSolidCube(15);
		glPopMatrix();
		//pescoço dratini
		glPushMatrix();
			glTranslatef(0,-19,0);
			glScalef(0.6,1.5,0.6);
			glutSolidCube(15);
			glPushMatrix();
				glTranslatef(0,-3.75,-15);
				glScalef(1,0.5,3);
				glutSolidCube(15);
					//meio da calda
					glPushMatrix();
						glTranslatef(15,0,-4.5);
						glScalef(3,1,0.4);
						glutSolidCube(15);
						//ponta calda grande 
							glPushMatrix();
								color(0,0,0);
								glTranslatef(10.1,0,0);
								glScalef(0.35,0.8,0.8);
								glutSolidCube(15);
								//ponta calda media  
									glPushMatrix();
										color(0,0,0);
										glTranslatef(13,0,0);
										glScalef(0.75,0.8,0.8);
										glutSolidCube(15);
										//ponta calda pequena
											glPushMatrix();
												color(0,0,0);
												glTranslatef(13,0,0);
												glScalef(0.75,0.8,0.8);
												glutSolidCube(15);
											glPopMatrix();
									glPopMatrix();
							glPopMatrix();
					glPopMatrix();
			glPopMatrix();
		glPopMatrix();
		glPopMatrix();
}
