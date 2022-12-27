/* Template
* Projeto base para aplicacao do OpenGL ja configurado com GLUT_DOUBLE e glutSwapBuffers
* Exemplificando operacoes de transformation e controle do comportamento pelo teclado
* Referencia do Codigo: OpenGL Programming Guide - RedBook
*/
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "geometry.h"
#include "glut.h"
#include "magnemite.h"
#include "dratini.h"
#include "dragonair.h"
#include "draw_rabo.h"
#include "draw_wing.h"
#include "tgaload.h"
#include "dragonite.h"
#define MAX_NO_TEXTURES 6
#define CUBE_TEXTURE 0
#define ALLOW_AXES 1
#define WIDTH 1240
#define HEIGHT 680

/* Defini??es da c?mera */
#define y_min 60
#define ro_min 120

GLuint texture_id[MAX_NO_TEXTURES];
float eyex = 0, eyey = y_min, eyez = ro_min;
float angleMX= -400,angleMY=240,angleMZ, incX =5 , incY=5,angleMX1,angleMX2,angleMX3,angleMY1,angleMY2,angleMY3;
//float eyex = 0, eyey = 0, eyez = 120;

/* VARI?VEIS PARA TRANSFORMA??ES DOS OBJETOS */

// 0 - Translacao, 1 - Escala, 2 - Rotacao
int transformation = 2;
// 0 - x, 1 - y;
int coordinate = 0;
int stopAnimation = 0;
GLfloat increments = 1.0;
GLfloat moves[3][4] = {
	{0.5, 0.5, 0, 0},
	{1, 1, 0, 0},
	{20.0, 0, 1, 0}
};

/* VARI?VEIS PARA ANIMA??ES */

// Navy
float navyX = 0, navyY = 0, navyZ = 0;
float navyLimitRight = 66, navyLimitLeft = -103, navyLimitTop = 50, navyLimitBottom = -76.5;
float navyIncX = 1, navyIncY = 1, navyIncZ = 1, navyAngleInc = 5;
float navyAngle = 0;

//void initTexture (void)
//{
//    glBindTexture ( GL_TEXTURE_2D, texture_id[0] );
//    image_t temp_image0;
//    tgaLoad  ( "wing.tga", &temp_image0, TGA_FREE | TGA_LOW_QUALITY ); 
//
//}

/*** DISPLAY FUNCTION ***/

void display(void) {
	float navyScale = 80, pokeballScale = 150, mushroomScale = 150, pikachuScale = 300;
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  
  /* Limpa o Buffer de Pixels */
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  
  /* Define a posi??o do observador */
	gluLookAt(eyex, eyey, eyez, 0, 0, 0, 0, 1, 0);
	glPushMatrix();
  /* Efetua a operacao de translacao */
  glTranslatef(moves[0][0], moves[0][1], 0);
  
  /* Efetua a operacao de escala em Y */
  glScalef(moves[1][0], moves[1][1], 0);
  
  /* Efetua a operacao de rotacao em Z */
//  glRotatef(moves[2][0], moves[2][1], moves[2][2], moves[2][3]);

//	if(ALLOW_AXES){
		/* Desenhando eixos */
	
		// /Eixo X
//		glBegin(GL_LINES);
//			glColor3f(1, 0, 0);
//			glVertex3f(-100, 0, 0);
//			glVertex3f(100, 0, 0);
//		glEnd();
//		
//		// Eixo Y
//		glBegin(GL_LINES);
//			glColor3f(0, 1, 0);
//			glVertex3f(0, -100, 0);
//			glVertex3f(0, 100, 0);
//		glEnd();
		
		// /Eixo Z
//		glBegin(GL_LINES);
//			glColor3f(0, 0, 1);
//			glVertex3f(0, 0, -100);
//			glVertex3f(0, 0, 100);
//		glEnd();	
//	}
    
    /* desenhando objetos modelados */
	
	//usadas
	//	glRotatef();
	//	glTranslatef();
	//	glScalef();
	
	glPushMatrix();
	glScalef(0.2,0.2,0.2);
	glTranslatef(angleMX,angleMY,angleMZ);
//	draw_rabo();
//  draw_wing();
//  Drawdragonite();
	Drawmagnemite();
//	Drawdratini();
//	Drawdragonair();
    
    glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glScalef(0.2,0.2,0.2);
	glTranslatef(-angleMX,-angleMY,angleMZ);
	glRotatef(-110, 0, 1, 0);
	Drawdragonite();
 	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glScalef(0.2,0.2,0.2);
	glTranslatef(angleMX,-angleMY,angleMZ);
	Drawdratini();
 	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	
	glPushMatrix();
	glScalef(0.2,0.2,0.2);
	glTranslatef(-angleMX,angleMY,angleMZ);
	Drawdragonair();
 	glPopMatrix();
	glPopMatrix();
	glPopMatrix();
	
  // Escreve os eixos selecionados para rotação
  
//  if(transformation == 2) {
//  	// Eixo X
//	 	if(moves[2][1]) {
//	 		// Passando NULL pra fonte usa uma fonte padrão
//			writeText(30, 20, "* X", NULL);
//		}
//		
//		// Eixo Y
//		if(moves[2][2]) {
//			// Pode escolher a fonte, tem varias no glut.cpp
//	 		writeText(30.5, 15, "* Y", NULL);
//		}
//		
//		// Eixo Z
//		if(moves[2][3]) {
//	 		writeText(31, 10, "* Z", NULL);
//		}
//	}
//	else {
//		if(coordinate == 0) {
//			writeText(30, 20, "* X", NULL);
//		}
//		else if(coordinate == 1) {
//			writeText(30, 20, "* Y", NULL);
//		}
//		else {
//			writeText(30, 20, "* X & Y", NULL);
//		}
//	}
  /* Inicia o processo de desenho atraves dos
  dados bufferizados
  */
  glutSwapBuffers();
}

/*** ANIMATION FUNCTIONS ***/

/* NAVY ANIMATION */
void moveNavy() {
	if(navyX > navyLimitRight || navyX < navyLimitLeft)  navyIncX = -navyIncX;
	if(navyY > navyLimitTop || navyY < navyLimitBottom)  navyIncY = -navyIncY;
	if(navyZ > WIDTH || navyZ < 0)  navyIncZ = -navyIncZ;
	if(navyAngle > 360) navyAngle = 0;
	navyX += navyIncX;
	navyY += navyIncY;
	navyAngle += navyAngleInc;
	//navyZ += navyIncZ;
}
	
/* GLOBAL ANIMATION */
void TimerFunc(int value) {
	//moveNavy();
////	if(!stopAnimation){
////		moves[2][0] += increments;
////		glutPostRedisplay();
////	}
	
	if(angleMX <= -400){
		incX = 0;
		incX +=incX +1;
	}
	
	if(angleMX >= 400){
		incX = -incX;
	}
	
	if(angleMY <= -240 ){
		incY = -incY;
	}
	
	if(angleMY >= 240){
		incY = -incY;
	}
	angleMX += incX;
	angleMY += incY;
	
	glutPostRedisplay();
	
	glutTimerFunc(33, TimerFunc, 1);
}



/*
Funcao responsavel pelo controle do teclado. Dependendo da tecla pressionada :
R,S,T, controlam qual a transformation sera aplicada (Rotacao, Escala e Translacao)
x, y, controlam qual coordinate sofrera a transformation

*** No caso da rotacao eh possivel selecionar os eixos de rotacao clicando x, y e z, 
*** combinacoes tambem funcionam
*/
//void teclado(unsigned char tecla, int x, int y) {
//  switch (tecla) {
//		case 27:
//				exit(0);
//				break;
//    case 'S':
//    case 's':// Incrementa o valor do parametro de escala
//        transformation = 1;
//        increments = 0.1;
//    		break;
//    case 'T':
//    case 't':// Incrementa o valor do parametro de translacao
//        transformation = 0;
//        increments = 0.1;
//    		break;
//    case 'R':
//    case 'r':// Incrementa o valor do angulo de rotacao
//        transformation = 2;
//        increments = 1.0;
//    		break;
//    case 'X':
//    case 'x':
//      	coordinate = 0;
//      	if (transformation == 2) {
//      		moves[2][1] = !moves[2][1];
//				}
//      	break;
//    case 'Y':
//    case 'y':
//      	coordinate = transformation == 2 ? 0 : 1;
//      	if (transformation == 2) {
//      		moves[2][2] = !moves[2][2];
//				}
//      	break;
//    case 'Z':
//    case 'z':
//      	if (transformation == 2) {
//      		moves[2][3] = !moves[2][3];
//				}
//      	break;
//    case 'A':
//    case 'a':
//      	coordinate = 2;
//      	break;
//    case '-':
//      	if(coordinate != 2)
//      		moves[transformation][coordinate] += increments;
//      	else {
//      		moves[transformation][0] += increments;
//      		moves[transformation][1] += increments;
//				}
//      	break;
//    case '+':
//      	if(coordinate != 2)
//      		moves[transformation][coordinate] -= increments;
//      	else {
//      		moves[transformation][0] -= increments;
//      		moves[transformation][1] -= increments;
//				}
//      	break;
//    case 'O':
//    case 'o': // Volta na imagem inicial
//        moves[0][0] = 0.5;
//        moves[0][1] = 0.5;
//        moves[1][0] = 1;
//        moves[1][1] = 1;
//        moves[2][0] = 20.0;
//        moves[2][2] = 1;
//      	break;
//    case ' ':
//    		stopAnimation = !stopAnimation;
//    		break;
//  }
//  glutPostRedisplay();
//}

//void specialKey(int key, int x, int y) {
//	
//	switch(key) {
//		case GLUT_KEY_LEFT:
//			if(coordinate != 2){
//				moves[transformation][coordinate] += increments;	
//			}
//    	else {
//				moves[transformation][0] += increments;
//    		moves[transformation][1] += increments;
//			}
//			glutPostRedisplay();
//    	break;
//    case GLUT_KEY_RIGHT:
//    	if(coordinate != 2)
//    		moves[transformation][coordinate] -= increments;
//    	else {
//    		moves[transformation][0] -= increments;
//    		moves[transformation][1] -= increments;
//			}
//			glutPostRedisplay();
//    	break;
//	}
//}

void reshape(int width, int height) {
	if(height < 0) height = 1;
	
	glViewport(0,0,width,height); // Reset The Current Viewport
	
	glMatrixMode(GL_PROJECTION); // Select The Projection Matrix
	glLoadIdentity(); // Reset The Projection Matrix
	
	// Calculate The Aspect Ratio Of The Window
	gluPerspective(45.0f,(float)WIDTH/(float)HEIGHT,0.1f,1000.0f);
	// Always keeps the same aspect as a WIDTH wide and HEIGHT high window
	
	glMatrixMode(GL_MODELVIEW); // Select The Modelview Matrix
	glLoadIdentity(); // Reset The Modelview Matrix
}

void init() {
	glClearColor(1.0, 1.0, 1.0, 1.0);// branco
//	glClearColor(0,0,0,0);//preto 
	glClearDepth(1.0); // Enables Clearing Of The Depth Buffer
	glDepthFunc(GL_LESS); // The Type Of Depth Test To Do
	glEnable(GL_DEPTH_TEST); // Enables Depth Testing
	glShadeModel(GL_SMOOTH); // Enables Smooth Color Shading
//	make_tex();
//	initTexture();
	
}

/*
Funcao principal do programa.
*/
int main(int argc, char** argv)
{
	//Inicia a Telinha
	glutInit(&argc,argv);
	
    /*
    Estabelece o modo de exibicao a ser utilizado pela janela a ser
    neste caso utiliza-se de um buffer duplo, ou seja, a apresentacao
    execucao
    Define o modo de cores como RGBA
    */
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    
    /*
    Determina o tamanho em pixels da
    janela a ser criada
    */
    glutInitWindowSize (WIDTH, HEIGHT);
    
    /*
    Estabelece a posicao inicial para criacao da
    janela
    */
    glutInitWindowPosition (0, 0);
    
    /*
    Cria uma janela com base nos parametros especificados
    nas funcoes glutInitWindowSize e glutInitWindowPosition
    com o nome de titulo especificado em seu argumento
    */
    glutCreateWindow ("Modelagem");
    
    /*
    Especifica os parametros inicias para as variaveis
    de estado do OpenGL
    */
    init ();
    
    /*
    Habilita a captura dos eventos de teclado com o comportamento
	definido pela funcao void teclado(unsigned char tecla, int x, int y)
    */
//    glutKeyboardFunc(teclado);
//    glutSpecialFunc(specialKey);
    
    
    // Associa a funcao display como uma funcao de callback
    glutDisplayFunc(display);
    
    glutReshapeFunc(reshape);
    
    glutTimerFunc(33, TimerFunc, 1);
//    TimerFunc(1);
    /*
    Inicia a execucao do programa OpenGL.
    O programa ira executar num loop infinito devendo
    o desenvolvedor especificar as condicoes de saida do mesmo
    atraves de interrupcoes no proprio programa ou atraves
    de comandos de mouse ou teclado como funcoes de callback
    */
    glutMainLoop();
    return 0;
}
