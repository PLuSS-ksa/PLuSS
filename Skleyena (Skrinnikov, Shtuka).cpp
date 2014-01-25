#include "stdafx.h"
#include <gl/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>



float WinWid=2000.0;
float WinHei=1000.0;
float Angle=0.0;
float Scale=1.0;
float i;
float gfPosY= 180;
float gfPosY2= 180;
float gfPosY3=-270;
float gfPosX3=-550;
float gfDeltaY=0.5;
float gfDeltaY2=0.5;
float gfDeltaX3=0.3;
float gfDeltaY3=0.2;
float gfRotZ= 0;
float gfDeltaZ=0.05;


// dlya s4itivaniya s klavi float mrt;


void drawCircle(float x, float y, float r, int amountSegments) 
{ 
 glBegin(GL_LINE_LOOP); 

 for(int i = 0; i < amountSegments; i++) 
 { 
  float angle = 2.0 * 3.1415926 * float(i) / float(amountSegments); 

  float dx = r * cosf(angle);
  float dy = r * sinf(angle);

  glVertex2f(x + dx, y + dy);
}

 glEnd(); 
}
void Garmata()
{
	 glBegin(GL_LINE_STRIP); //"kariave" pivkolo
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-70, 30);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-75, 32);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-79, 35);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-82, 39);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-84, 44);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-82, 49);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-79, 53);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-75, 56);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(-70, 58);
        glEnd(); 
	//Garmata
        glBegin(GL_LINE_STRIP);                     
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-70, 30);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(200, 30);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(200, 58);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-70, 58);
         glEnd();

         //koleso vid pushki 
                 glColor3f(0.0, 0.0, 0.0);                     
         drawCircle(0, 0, 30,60);
}

// dlya s4itivaniya s klavi void RotateFunk (int key, int x, int y)
// dlya s4itivaniya s klavi 	   {
// dlya s4itivaniya s klavi 		    if (key == GLUT_KEY_RIGHT)
// dlya s4itivaniya s klavi 				mrt=mrt+10;
// dlya s4itivaniya s klavi 			if (key == GLUT_KEY_UP)
// dlya s4itivaniya s klavi 				mrt=mrt+10;
// dlya s4itivaniya s klavi 			if (key == GLUT_KEY_LEFT)
// dlya s4itivaniya s klavi 				mrt=mrt-10;
// dlya s4itivaniya s klavi 			if (key == GLUT_KEY_DOWN)
// dlya s4itivaniya s klavi 				mrt=mrt-10;
// dlya s4itivaniya s klavi 	   }


void Draw()
{
         glClear(GL_COLOR_BUFFER_BIT);
         glColor3f(0.0, 0.0, 0.0);

         //Opora
		 
         glBegin(GL_QUADS);
             glColor3f(0.0, 1.0, 0.0);
             glVertex2i(680, -460);
             glColor3f(0.0, 1.0, 0.0);
             glVertex2i(700, -460);
             glColor3f(0.0, 1.0, 0.0);
             glVertex2i(700, 250);
             glColor3f(0.0, 1.0, 0.0);
             glVertex2i(680, 250);

         glEnd();
 
         //perekladina
         glBegin(GL_LINE_LOOP);
              
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(500, 250);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(880, 250);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(880, 270);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(500, 270);

         glEnd();
         //punktir
         glEnable(GL_LINE_STIPPLE);
         glLineStipple(1,0x00FF);
         glBegin(GL_LINE_LOOP);
                 
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(680, -460);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(700, -460);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(700, 250);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(680, 250);
                         
         glEnd();
		 glDisable(GL_LINE_STIPPLE);
        //kulka
             glColor3f(1.0, 0.0, 0.0);
             drawCircle(689, 321, 50,60);

        //Romb 
            glPushMatrix();   
            glBegin(GL_LINE_LOOP);  
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-100, -460);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-175, -385);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-100, -310);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-25, -385);
        glEnd();
		glPopMatrix();

       

                 //Pidloga
                 glBegin(GL_LINE_LOOP);
                      glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-999, -460);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-999, -499);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(999, -499);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(999,-460 );
         glEnd();
                 //lovyshka 1
                 glBegin(GL_QUADS);
                      glColor3f(1.0, 0.0, 0.0);
              glVertex2i(445, -200);
              glColor3f(1.0, 0.0, 0.0);
              glVertex2i(445, -460);
              glColor3f(1.0, 0.0, 0.0);
              glVertex2i(480, -460);
              glColor3f(1.0, 0.0, 0.0);
              glVertex2i(480,-200 );
         glEnd();
                 //lovyshka 2
                 glBegin(GL_QUADS);
                      glColor3f(1.0, 0.0, 0.0);
              glVertex2i(195, -200);
              glColor3f(1.0, 0.0, 0.0);
              glVertex2i(195, -460);
              glColor3f(1.0, 0.0, 0.0);
              glVertex2i(230, -460);
              glColor3f(1.0, 0.0, 0.0);
              glVertex2i(230,-200 );
         glEnd();
         glBegin(GL_LINE_LOOP);
                glVertex2i(335, -400);  
                glVertex2i(295,-460);  
                glVertex2i(375,-460);  
        
        glEnd();		
		//steklyannaya plastina
       glBegin(GL_QUADS);
               glColor3f(0.0, 1.0, 0.0);
               glVertex2i(350, 500);
               glColor3f(0.0, 1.0, 0.0);
               glVertex2i(370, 500);
               glColor3f(0.0, 1.0, 0.0);
               glVertex2i(370, 200);
               glColor3f(0.0, 1.0, 0.0);
               glVertex2i(350, 200);
       glEnd();

       glEnable(GL_LINE_STIPPLE);
               glLineStipple(1,0x00FF);
               glBegin(GL_LINE_LOOP);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(350, 500);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(370, 500);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(370, 200);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(350, 200);
       glEnd();
       glDisable(GL_LINE_STIPPLE);

	   void Pidvis1();
	   {
	   glBegin(GL_QUADS);
	   		   glColor3f(0.0, 0.0, 0.0);
               glVertex2i(155, gfPosY2);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(155, gfPosY2+20);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(195, gfPosY2+20);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(195, gfPosY2);


       glEnd();
	   }

	   void Pidvis2();
	   {
	   glBegin(GL_QUADS);

			   glColor3f(0.0, 0.0, 0.0);
               glVertex2i(480, gfPosY2);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(480, gfPosY2+20);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(520, gfPosY2+20);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(520, gfPosY2);

       glEnd();
	   }
       
	   		 //jadro
   
    glColor3f(0.0, 0.0, 0.0);                     
    drawCircle(gfPosX3, gfPosY3, 14,60);

	   //pidvis
	   glPushMatrix();
       glBegin(GL_QUADS);
               
	           glColor3f(0.0, 0.0, 0.0);
               glVertex2i(195, gfPosY);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(195, gfPosY+20);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(480, gfPosY+20);
               glColor3f(0.0, 0.0, 0.0);
               glVertex2i(480, gfPosY);
        glEnd();

	   
	   	   glPushMatrix();
		   glTranslatef(-700,-430,0);
		   glRotatef(gfRotZ,0,0,-1);
	   	   Garmata();
		   glPopMatrix();
		   gfRotZ -= gfDeltaZ;
	   if(gfRotZ >= 90 || gfRotZ <= -35) //s klavi -45 pomenyat na -mrt (-45 - randomnii ugol povorota)
	   {
			gfDeltaZ=0;
	   }
	  
	  glPopMatrix(); 

	   gfPosX3 += gfDeltaX3;
	   gfPosY3 += gfDeltaY3;
	  
	   
	   if(gfPosY >= 200 || gfPosY <= -200)
	   {
			gfDeltaY=0;
	   }
	   if(gfPosY2 >= 200 || gfPosY2 <= -460)
	   {
			gfDeltaY2=0;
	   }
	  glutPostRedisplay();
	  glPopMatrix(); 
	  
	  glPushMatrix();
	  if(gfPosX3 >= 350 || gfPosX3 >= 335)
	  {
			gfDeltaY3=0;
			gfDeltaX3=0;

	   glBegin(GL_QUADS);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(300, 500);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(370, 500);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(370, 200);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(300, 200);
       glEnd();
	   gfPosY -= gfDeltaY;
	   gfPosY2 -= gfDeltaY2;
	  }
	  glPopMatrix();
	  glutPostRedisplay();
	
glutSwapBuffers(); 

}

void Timer(int)
{    
	i--;


	glutPostRedisplay();
	glutTimerFunc(5, Timer, 0);
}

void Initialize()
{
     glClearColor(1.0, 1.0, 1.0, 1.0);
         glMatrixMode(GL_PROJECTION);
         glLoadIdentity();
         glOrtho(-WinWid/2, WinWid/2, -WinHei/2, WinHei/2, -200.0, 200.0);
		 glMatrixMode(GL_MODELVIEW);
		 
}


int main(int argc, char** argv)
{
        //initialization
	    
        glutInit(&argc, argv);         
        glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
        glutInitWindowSize(WinWid, WinHei);
        glutInitWindowPosition(0,0);
        glutCreateWindow("1ZAVDANNYA");
// dlya s4itivaniya s klavi 		glutSpecialFunc(RotateFunk);
		glutTimerFunc(2000, Timer, 1000);
        //registration
        glutDisplayFunc(Draw);// painting
        Initialize();
        glutMainLoop();
        
        return 0;
}
