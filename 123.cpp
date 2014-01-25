#include "glut.h"
#include <cmath>
#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>
#include <math.h>

float WinWid=2000.0;
float WinHei=1000.0;
float Angle=0.0;
float Scale=1.0;
float i;
float gfPosY= 180;
float gfPosY2= 200;
float gfDeltaY=0.1;
float n=-200;
float gfx=-561;
float gfPyshkaX=-514;
float grad=15;     //kyt
float gfPyshkaY=-386;
float gfDeltaX1=cos(grad*0.017)/10;
float gfDeltaY1=sin(grad*0.017)/10;

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

void Draw()
{
         glClear(GL_COLOR_BUFFER_BIT);
         glColor3f(0.0, 0.0, 0.0);
   //jadro
   
    glColor3f(0.0, 0.0, 0.0);                     
    drawCircle( gfPyshkaX, gfPyshkaY, 14,60);

    glEnd();
   
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
		
		 //kinec garmatu
		    glColor3f(0.0, 0.0, 0.0);                     
			drawCircle( -770, -386, 14,60);
			glEnd();
		 
        //Garmata zamalovka
		  glBegin(GL_QUADS);                     
              glColor3f(1.0, 1.0, 1.0);
              glVertex2i(-770, -400);
              glColor3f(1.0, 1.0, 1.0);
              glVertex2i(-500, -400);
              glColor3f(1.0, 1.0, 1.0);
              glVertex2i(-500, -372);
              glColor3f(1.0, 1.0, 1.0);
              glVertex2i(-770, -372);
         glEnd();
		//Garmata
        glBegin(GL_LINE_LOOP);                     
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-770, -400);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-500, -400);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-500, -372);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-770, -372);
         glEnd();

    
         //koleso vid pushki 
                 glColor3f(0.0, 0.0, 0.0);                     
         drawCircle(-700, -430, 30,60);

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
     //animaci9 jadra  
   glFlush();
    gfPyshkaX += gfDeltaX1;
	gfPyshkaY += gfDeltaY1;
	glutPostRedisplay();
    glPopMatrix(); 
    glEnd();
 

glFlush();                     
}

void Timer(int)
{    
 i--;


 glutPostRedisplay();
 glutTimerFunc(50, Timer, 0);
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
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(WinWid, WinHei);
        glutInitWindowPosition(0,0);
        glutCreateWindow("1ZAVDANNYA");
  glutTimerFunc(2000, Timer, 1000);
        //registration
        glutDisplayFunc(Draw);// painting
        Initialize();
        glutMainLoop();
        
        return 0;
}