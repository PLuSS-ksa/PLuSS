#include "stdafx.h"
#include <gl/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>


float WinWid=2000.0;
float WinHei=1000.0;

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
         //Steklyashka
         glBegin(GL_QUADS);
              
                     glColor3f(0.0, 1.0, 0.0);
             glVertex2i(680, -500);
             glColor3f(0.0, 1.0, 0.0);
             glVertex2i(700, -500);
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
         //glEnable(GL_LINE_STIPPLE);
         //glLineStipple(1,0x00FF);
         glBegin(GL_LINE_LOOP);
                 
                     glColor3f(0.0, 0.0, 0.0);
             glVertex2i(680, -500);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(700, -500);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(700, 250);
             glColor3f(0.0, 0.0, 0.0);
             glVertex2i(680, 250);
                         
         glEnd();
         //kulka(troshki 'kriva' ale po inshmu ne vmiyu)
         glColor3f(1.0, 0.0, 0.0);
         drawCircle(689, 322, 50,60);
     glFlush();
        

}

void Initialize()
{
     glClearColor(1.0, 1.0, 1.0, 1.0);
         glMatrixMode(GL_PROJECTION);
         glLoadIdentity();
         glOrtho(-WinWid/2, WinWid/2, -WinHei/2, WinHei/2, -200.0, 200.0);
}


int main(int argc, char** argv)
{
        //initialization
        glutInit(&argc,        argv);         
        glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
        glutInitWindowSize(WinWid, WinHei);
        glutInitWindowPosition(0,0);
        glutCreateWindow("1ZAVDANNYA");
        //registration
        glutDisplayFunc(Draw);// painting
        Initialize();
        glutMainLoop();
        
        return 0;
}