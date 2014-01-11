#include "glut.h"
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
 float dy = r * sinf(angle)*0.8;
 
   glVertex2f(x + dx, y + dy);
 }
 
  glEnd(); 
 }
 void Draw()
 {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 0.0);
          

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
glBegin(GL_LINE_LOOP);

glColor3f(0.0, 0.0, 0.0);
glVertex2i(500, 250);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(900, 250);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(900, 270);
glColor3f(0.0, 0.0, 0.0);
glVertex2i(500, 270);

glEnd();


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

	
	
	glBegin(GL_LINE_LOOP);
               
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-100, -325);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-175, -250);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-100, -175);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-25, -250);
 
          glEnd();

		 

			  glBegin(GL_LINE_STRIP);                     //гармата
               
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-770, -275);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-500, -275);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-500, -247);
              glColor3f(0.0, 0.0, 0.0);
              glVertex2i(-770, -247);
         glEnd();

          
		 glColor3f(0.0, 0.0, 0.0);                       //колесо до пушки 
          drawCircle(-700, -300, 30,60);
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
    