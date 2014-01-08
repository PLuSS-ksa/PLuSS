#include "stdafx.h"
#include <gl/glut.h>
#include <GL/gl.h>
#include <GL/glu.h>


float WinWid=2000.0;
float WinHei=1000.0;


void Draw()
{
     glClear(GL_COLOR_BUFFER_BIT);
	 glColor3f(0.0, 0.0, 0.0);
	 //стікляшка
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
	 //перекладина
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
	 //пунктир
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
	 //кулька (трохи "крива", незнаю як поіншому зробити)
	 glBegin(GL_LINE_LOOP);
	      
             glColor3f(1.0, 0.0, 0.0);//К
             glVertex2i(651, 370);
             glColor3f(1.0, 0.0, 0.0);//M
             glVertex2i(636, 347);
             glColor3f(1.0, 0.0, 0.0);//А
             glVertex2i(630, 325);
             glColor3f(1.0, 0.0, 0.0);
             glVertex2i(637, 302);
             glColor3f(1.0, 0.0, 0.0);//В
             glVertex2i(650, 287);
             glColor3f(1.0, 0.0, 0.0);
             glVertex2i(670, 275);
             glColor3f(1.0, 0.0, 0.0);//С
             glVertex2i(687, 271);
             glColor3f(1.0, 0.0, 0.0);
             glVertex2i(715, 279);
             glColor3f(1.0, 0.0, 0.0);//D
             glVertex2i(726, 288);
             glColor3f(1.0, 0.0, 0.0);
             glVertex2i(737, 302);
             glColor3f(1.0, 0.0, 0.0);//E
             glVertex2i(745, 325);
             glColor3f(1.0, 0.0, 0.0);
             glVertex2i(739, 345);
             glColor3f(1.0, 0.0, 0.0);//F
             glVertex2i(725, 367);
             glColor3f(1.0, 0.0, 0.0);
             glVertex2i(715, 373);
             glColor3f(1.0, 0.0, 0.0);//J
             glVertex2i(687, 380);
             glColor3f(1.0, 0.0, 0.0);
             glVertex2i(669, 376);


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
	//ініціалізація
	glutInit(&argc,	argv);	 
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(WinWid, WinHei);
	glutInitWindowPosition(0,0);
	glutCreateWindow("1 завдання");
	//реєстрація
	glutDisplayFunc(Draw);// Малювання
	Initialize();
	glutMainLoop();
	
	return 0;
}

