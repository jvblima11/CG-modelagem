#include"glut.h"
void Drawdragonair(){
	glutSolidCube(15);
		//Boca dragonair
		glPushMatrix();
			glTranslatef(0,-5.2,9);
			glScalef(1,0.31,0.19);
			glutSolidCube(15);
		glPopMatrix();
		//orelha dragonair esquerda
		glPushMatrix();
			glTranslatef(8,6,-10);
			glRotatef(30,1,0,0);
			glScalef(0.05,0.4,1);
			glutSolidCube(15);
		glPopMatrix();
		//orelha dragonair direita
		glPushMatrix();
			glTranslatef(-8,6,-10);
			glRotatef(30,1,0,0);
			glScalef(0.05,0.4,1);
			glutSolidCube(15);
		glPopMatrix();
		//pescoço dragonair
		glPushMatrix();
			glTranslatef(0,-19,0);
			glScalef(0.6,1.5,0.6);
			glutSolidCube(15);
			//Gema no pescoço dragonair
				glPushMatrix();
					glTranslatef(0,4.5,7.6);
					glScalef(0.4,0.14,0.4);
					glutWireSphere(15,30,30);
				glPopMatrix();
			glPushMatrix();
				glTranslatef(0,-3.75,-15);
				glScalef(1,0.5,3);
				glutSolidCube(15);
					//meio da calda
					glPushMatrix();
						glTranslatef(22.5,0,-4.5);
						glScalef(4,1,0.4);
						glutSolidCube(15);
							//ponta calda preta
							glPushMatrix();
								color(0,0,0);
								glTranslatef(5.6 ,18.9,0);
								glScalef(0.25,1.5,1);
								glutSolidCube(15);
								//ponta calda vermalha
								glPushMatrix();
									color(1,0,0);
									glTranslatef(0,13.2,0);
									glScalef(0.75,0.75,0.75);
									glutSolidCube(15);
										glPushMatrix();
											color(1,0,1);
											glScalef(1,0.5,1);
//											drawSphereSection();
//											glutSolidSphere(11, 16, 16);
											glutWireSphere(15,30,30);
										glPopMatrix();
									//ponta calda rosa
									glPushMatrix();
										color(1,0,1);
										glTranslatef(0,13.2,0);
										glScalef(0.75,0.75,0.75);
										glutSolidCube(15);
											glPushMatrix();
												color(0,1,1);
												glScalef(1,0.5,1);
//												drawSphereSection();
//												glutSolidSphere(11, 16, 16);
												glutWireSphere(15,30,30);
											glPopMatrix();
											glPushMatrix();
												color(1,0,0);
												glTranslatef(0,11.2,0);
												glScalef(0.5,0.5,0.5);
												glutSolidCube(15);
											glPopMatrix();	
									glPopMatrix();
								glPopMatrix();
							glPopMatrix();		
					glPopMatrix();
			glPopMatrix();
		glPopMatrix();
		glPopMatrix();
		glPopMatrix();	
}


