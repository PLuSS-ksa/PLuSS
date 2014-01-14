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
         //glEnable(GL_LINE_STIPPLE);
         //glLineStipple(1,0x00FF);
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
         //kulka
         glColor3f(1.0, 0.0, 0.0);
         drawCircle(689, 321, 50,60);
     
        glBegin(GL_LINE_LOOP); //Romb
               
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-100, -325);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-175, -250);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-100, -175);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-25, -250);
 
        glEnd();

                

        glBegin(GL_LINE_STRIP); //Garmata
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-770, -275);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-500, -275);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-500, -247);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-770, -247);
         glEnd();

          
                 glColor3f(0.0, 0.0, 0.0); //koleso vid pushki
         drawCircle(-700, -307, 30,60);
      
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
        glutInit(&argc, argv);
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