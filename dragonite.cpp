#include"glut.h"
#include"draw_rabo.h"
#include"draw_wing.h"
void Drawdragonite(){
	glTranslatef(0,20,0);
	glutSolidCube(15);
		
		//boca
		glPushMatrix();
			glTranslatef(9,-3.2,0);
			glScalef(0.2,0.36,1);
			glutSolidCube(15);
		glPopMatrix();
				//Corpo
				glPushMatrix();
				glTranslatef(0,-26.2,0);
				glScalef(1.5,2.5,1.5);
				glutSolidCube(15);

					//braço esquerdo
					glPushMatrix();
					glTranslatef(0,2,-10);
					glRotatef(45,1,0,0);
					glScalef(0.25,0.5,0.15);
					glutSolidCube(15);
					glPopMatrix();
					
					//garra 1
					glPushMatrix();
					glTranslatef(0,-0.6,-13);
					glRotatef(45,1,0,0);
					glScalef(0.15/2,0.1/2,0.1/2);
					glutSolidCube(15);
					glPopMatrix();
					
					//garra 2
					glPushMatrix();
					glTranslatef(1.5,-0.6,-13);
					glRotatef(45,1,0,0);
					glScalef(0.1/2,0.1/2,0.1/2);
					glutSolidCube(15);
					glPopMatrix();
					
					//garra 3
					glPushMatrix();
					glTranslatef(-1.5,-0.6,-13);
					glRotatef(45,1,0,0);
					glScalef(0.1/2,0.1/2,0.1/2);
					glutSolidCube(15);
					glPopMatrix();
					
					//garra 1
					glPushMatrix();
					glTranslatef(0,-0.6,13);
					glRotatef(-45,1,0,0);
					glScalef(0.15/2,0.1/2,0.1/2);
					glutSolidCube(15);
					glPopMatrix();
					
					//garra 2
					glPushMatrix();
					glTranslatef(1.5,-0.6,13);
					glRotatef(-45,1,0,0);
					glScalef(0.1/2,0.1/2,0.1/2);
					glutSolidCube(15);
					glPopMatrix();
					
					//garra 3
					glPushMatrix();
					glTranslatef(-1.5,-0.6,13);
					glRotatef(-45,1,0,0);
					glScalef(0.1/2,0.1/2,0.1/2);
					glutSolidCube(15);
					glPopMatrix();
					//braço 
					glPushMatrix();
					glTranslatef(0,2,10);
					glRotatef(-45,1,0,0);
					glScalef(0.25,0.5,0.15);
					glutSolidCube(15);
					glPopMatrix();
					
					//perna direita
					glPushMatrix();
					glTranslatef(0,-5,7);
					glScalef(0.5,0.5,0.5);
					glutSolidCube(15);
						//pata direita
						glPushMatrix();
							glTranslatef(4,-8.6,0);
							glScalef(1.25,0.15,1);
							glutSolidCube(15);
							
								//garra amarela
								glPushMatrix();
									color(1,1,0);
									glTranslatef(9,0,0);
									glScalef(0.2,1,0.3);
									glutSolidCube(15);	
								glPopMatrix();
								
								//garra vermelha
								glPushMatrix();
									color(1,0,0);
									glTranslatef(9,0,6);
									glScalef(0.2,1,0.2);
									glutSolidCube(15);	
								glPopMatrix();
								
								//garra rosa
								glPushMatrix();
									color(1,0,1);
									glTranslatef(9,0,-6);
									glScalef(0.2,1,0.2);
									glutSolidCube(15);	
								glPopMatrix();	
						glPopMatrix();
					glPopMatrix();
					
					//perna esquerda 
					glPushMatrix();
					glTranslatef(0,-5,-7);
					glScalef(0.5,0.5,0.5);
					glutSolidCube(15);
					
						//pata esquerda
						glPushMatrix();
							glTranslatef(4,-8.6,0);
							glScalef(1.25,0.15,1);
							glutSolidCube(15);
								//garra amarela
								glPushMatrix();
									color(1,1,0);
									glTranslatef(9,0,0);
									glScalef(0.2,1,0.3);
									glutSolidCube(15);	
								glPopMatrix();
								
								//garra vermelha
								glPushMatrix();
									color(1,0,0);
									glTranslatef(9,0,6);
									glScalef(0.2,1,0.2);
									glutSolidCube(15);	
								glPopMatrix();
								
								//garra rosa
								glPushMatrix();
									glColor3f(0.7,0.4,0);
									glTranslatef(9,0,-6);
									glScalef(0.2,1,0.2);
									glutSolidCube(15);	
								glPopMatrix();	
						glPopMatrix();						
					glPopMatrix();	
					
					//rabo 
					glPushMatrix();
					draw_rabo();
					glPopMatrix();
															
		glPopMatrix();	
		
		//asas
		glPushMatrix();
		draw_wing();
		glPopMatrix();
//	//falta o dragonite 	
    glPopMatrix();
glPopMatrix(); 
glPopMatrix();   
}


