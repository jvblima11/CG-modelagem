#include"glut.h"

draw_wing(){
	glRotatef(90, 0, 1, 0);
	glScalef(2.0, 2.0, 2.0);
	glTranslatef(0,-1,-4.2); 
	
    glPushMatrix();
	    glTranslatef(0, 1, 0);
		    glBegin(GL_LINE_LOOP);
		    point(3, 0, 0);
		    point(3, 0, 0.5);
		    point(3, 0, 0);
		    point(3, 0, 0.5);
		    point(3, 0, 0);
		    point(3, 4, 0);
		    point(3, 4, 0.5);
		    point(3, 4, 0);
			point(9, 4, 0);
		    point(9, 4, 0.5);
		    point(9, 4, 0);
			point(9, 0, 0);
		    point(9, 0, 0.5);
		    point(9, 0, 0);
			point(7, 0, 0);
		    point(7, 0, 0.5);
		    point(7, 0, 0);
			point(7, 2, 0);
		    point(7, 2, 0.5);
		    point(7, 2, 0);
			point(6, 2, 0);
		    point(6, 2, 0.5);
		    point(6, 2, 0);
			point(6, 0, 0);
		    point(6, 0, 0.5);
		    point(6, 0, 0);
			point(4.5, 0, 0);
		    point(4.5, 0, 0.5);
		    point(4.5, 0, 0);
			point(4.5, 3, 0);
		    point(4.5, 3, 0.5);
		    point(4.5, 3, 0);
			point(3.5, 3, 0);
		    point(3.5, 3, 0.5);
		    point(3.5, 3, 0);
			point(3.5, 0, 0);
			point(3.5, 0, 0.5);
		    point(3.5, 0, 0);
		glEnd();
    glPopMatrix();
    
    glPushMatrix();
	    glTranslatef(0, 1, 0);
	    glBegin(GL_LINE_LOOP);
		    point(3, 0, 0.5);
		    point(3, 4, 0.5);
		    point(9, 4, 0.5);
		    point(9, 0, 0.5);
		    point(7, 0, 0.5);
		    point(7, 2, 0.5);
		    point(6, 2, 0.5);
		    point(6, 0, 0.5);
		    point(4.5, 0, 0.5);
		    point(4.5, 3, 0.5);
		    point(3.5, 3, 0.5);
		    point(3.5, 0, 0.5);
   		glEnd();
    glPopMatrix();
    
    glPushMatrix();
	    glTranslatef(0, 1, 0);
		    glBegin(GL_LINE_LOOP);
		    point(-3, 0, 0);
		    point(-3, 0, 0.5);
		    point(-3, 0, 0);
		    point(-3, 0, 0.5);
		    point(-3, 0, 0);
		    point(-3, 4, 0);
		    point(-3, 4, 0.5);
		    point(-3, 4, 0);
			point(-9, 4, 0);
		    point(-9, 4, 0.5);
		    point(-9, 4, 0);
			point(-9, 0, 0);
		    point(-9, 0, 0.5);
		    point(-9, 0, 0);
			point(-7, 0, 0);
		    point(-7, 0, 0.5);
		    point(-7, 0, 0);
			point(-7, 2, 0);
		    point(-7, 2, 0.5);
		    point(-7, 2, 0);
			point(-6, 2, 0);
		    point(-6, 2, 0.5);
		    point(-6, 2, 0);
			point(-6, 0, 0);
		    point(-6, 0, 0.5);
		    point(-6, 0, 0);
			point(-4.5, 0, 0);
		    point(-4.5, 0, 0.5);
		    point(-4.5, 0, 0);
			point(-4.5, 3, 0);
		    point(-4.5, 3, 0.5);
		    point(-4.5, 3, 0);
			point(-3.5, 3, 0);
		    point(-3.5, 3, 0.5);
		    point(-3.5, 3, 0);
			point(-3.5, 0, 0);
			point(-3.5, 0, 0.5);
		    point(-3.5, 0, 0);
		glEnd();
    glPopMatrix();
    
    glPushMatrix();
	    glTranslatef(0, 1, 0);
	    glBegin(GL_LINE_LOOP);
		    point(-3, 0, 0.5);
		    point(-3, 4, 0.5);
		    point(-9, 4, 0.5);
		    point(-9, 0, 0.5);
		    point(-7, 0, 0.5);
		    point(-7, 2, 0.5);
		    point(-6, 2, 0.5);
		    point(-6, 0, 0.5);
		    point(-4.5, 0, 0.5);
		    point(-4.5, 3, 0.5);
		    point(-3.5, 3, 0.5);
		    point(-3.5, 0, 0.5);
   		glEnd();
    glPopMatrix();
    
//    glPushMatrix();
//	    glTranslatef(0, 1, 0);
	    
//	    	glEnable(GL_TEXTURE_2D);
//		    glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_MODULATE);
//		    glBindTexture ( GL_TEXTURE_2D, texture_id[0] );
		    
//		    glBegin(GL_LINE_LOOP);
//		    glTexCoord2f(1.0, 0.0);point(3, 0, 0);
//		    glTexCoord2f(1.0, 0.0);point(3, 0, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(3, 0, 0);
//		    glTexCoord2f(1.0, 0.0);point(3, 4, 0);
//		    glTexCoord2f(1.0, 0.0);point(3, 4, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(3, 4, 0);
//			glTexCoord2f(1.0, 0.0);point(9, 4, 0);
//		    glTexCoord2f(1.0, 0.0);point(9, 4, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(9, 4, 0);
//			glTexCoord2f(1.0, 0.0);point(9, 0, 0);
//		    glTexCoord2f(1.0, 0.0);point(9, 0, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(9, 0, 0);
//		    glEnd();
//		
//		
//    glPopMatrix();
//    
//    glPushMatrix();
//	    glTranslatef(0, 1, 0);
//		    glBegin(GL_POLYGON);
//		    glTexCoord2f(1.0, 0.0);point(3, 0, 0.5);
//		   glTexCoord2f(1.0, 0.0); point(3, 4, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(9, 4, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(9, 0, 0.5);
//		
//		glEnd();
//    glPopMatrix();
//    
//    glPushMatrix();
//	    glTranslatef(0, 1, 0);
//		    glBegin(GL_LINE_LOOP);
//		    glTexCoord2f(1.0, 0.0);point(-3, 0, 0);
//		   glTexCoord2f(1.0, 0.0); point(-3, 0, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(-3, 0, 0);
//		   glTexCoord2f(1.0, 0.0); point(-3, 4, 0);
//		    glEnd();
//		    
//		    glBegin(GL_POLYGON);
//		    glTexCoord2f(1.0, 0.0);point(-3, 4, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(-3, 4, 0);
//			glTexCoord2f(1.0, 0.0);point(-9, 4, 0);
//		    glTexCoord2f(1.0, 0.0);point(-9, 4, 0.5);
//		    glEnd();
//		    
//		    glBegin(GL_POLYGON);
//		    glTexCoord2f(1.0, 0.0);point(-9, 4, 0);
//			glTexCoord2f(1.0, 0.0);point(-9, 0, 0);
//		    glTexCoord2f(1.0, 0.0);point(-9, 0, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(-9, 0, 0);
//			glEnd();
//		glEnd();
//    glPopMatrix();
//    
//    glPushMatrix();
//	    glTranslatef(0, 1, 0);
//		    glBegin(GL_POLYGON);
//		    glTexCoord2f(1.0, 0.0);point(-3, 0, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(-3, 4, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(-9, 4, 0.5);
//		    glTexCoord2f(1.0, 0.0);point(-9, 0, 0.5);
//		
//		glEnd();
//    glPopMatrix();
    
    glPopMatrix();    
    glPopMatrix();
//	glDisable(GL_TEXTURE_2D); 
}
