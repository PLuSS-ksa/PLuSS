#include "gl/glut.h"
#include <cmath>
#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>
#include <math.h>


bool liana_hit = false;
float ly=0;
float dly=0;
bool ball_hit = false;
float drx2=0.5;
float drx=0.5;
float dry=0.5;
bool hit = false;
float rx1 = 0.0;
float ry1 = 0.0;
float rx2 = 0.0;
float WinWid=2000.0;
float WinHei=1000.0;
float Angle=0.0;
float Scale=1.0;
float i;
float gfPosY= 180;
float gfPosY2= 180;
float gfPosY3=-270;
float gfPosX3=-550;
float gfDeltaY=3;
float gfDeltaY2=3;
float gfDeltaX3=0.3;
float gfDeltaY3=0.2;
float gfPosX5= 480;// (kusok perekladiny)
float gfDeltaX5=1; // (kusok perekladiny)
float gfPosY5= -459;// (kusok perekladiny)
float gfDeltaY5=1.5; // (kusok perekladiny)
float gfRotZ= 0;
float gfDeltaZ=0.5;
float gfx=285;
float mrt=13; //kyt
float gfPyshkaX=185;
float gfPyshkaY=44;
float gfDeltaX1=cos(mrt*0.017)*5.2;
float gfDeltaY1=sin(mrt*0.017)*5.2;
float gfDeltaX4=-cos(mrt*0.017); //zmichenn9 v livo garmatu
float gfPyshkaX1;
float gfDeltaY4=sin(mrt*0.017); //zmichenn9 v livo garmatu
float gfPyshkaY1;
float gfrombX=0;
float gfkytpovoroty=0;
float gfdeltakytpovoroty=0.05;
float gfPosX= 0;
float gfDeltaX=0.0;
float angle1=80;
float deltaangle=0;
float gfrombPosX= 75;
float ZnachenX=0;


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
 
 //jadro
  if (!ball_hit && !liana_hit) {
 glColor3f(0.0, 0.0, 0.0);
 drawCircle( gfPyshkaX, gfPyshkaY, 14,60);
 glEnd();
  }
        
 //kinec garmatu
                 
 glColor3f(0.0, 0.0, 0.0);
 drawCircle( -70+gfPyshkaX1, 44+gfPyshkaY1, 14,60);
 glEnd();
                
 //Garmata zamalovka
                 
 glBegin(GL_QUADS);
 glColor3f(1.0, 1.0, 1.0);
 glVertex2i(-70+gfPyshkaX1, 30+gfPyshkaY1);
 glColor3f(1.0, 1.0, 1.0);
 glVertex2i(200+gfPyshkaX1, 30+gfPyshkaY1);
 glColor3f(1.0, 1.0, 1.0);
 glVertex2i(200+gfPyshkaX1, 58+gfPyshkaY1);
 glColor3f(1.0, 1.0, 1.0);
 glVertex2i(-70+gfPyshkaX1, 58+gfPyshkaY1);
 glEnd();
               
	//Garmata

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(-70+gfPyshkaX1, 30+gfPyshkaY1);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(200+gfPyshkaX1, 30+gfPyshkaY1);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(200+gfPyshkaX1, 58+gfPyshkaY1);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(-70+gfPyshkaX1, 58+gfPyshkaY1);
    glEnd();

    //koleso vid pushki

    glColor3f(0.0, 0.0, 0.0);
    drawCircle(0+gfPyshkaX1, 0+gfPyshkaY1, 30,60);
}

// dlya s4itivaniya s klavi void RotateFunk (int key, int x, int y)
// dlya s4itivaniya s klavi          {
// dlya s4itivaniya s klavi                         if (key == GLUT_KEY_RIGHT)
// dlya s4itivaniya s klavi                                 mrt=mrt+10;
// dlya s4itivaniya s klavi                         if (key == GLUT_KEY_UP)
// dlya s4itivaniya s klavi                                 mrt=mrt+10;
// dlya s4itivaniya s klavi                         if (key == GLUT_KEY_LEFT)
// dlya s4itivaniya s klavi                                 mrt=mrt-10;
// dlya s4itivaniya s klavi                         if (key == GLUT_KEY_DOWN)
// dlya s4itivaniya s klavi                                 mrt=mrt-10;
// dlya s4itivaniya s klavi          }


void Draw()
 {
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0.0, 0.0, 0.0);

 //Opora
   if (!liana_hit) {
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
   }
 
 //perekladina

 glBegin(GL_LINE_LOOP);
 glColor3f(0.0, 0.0, 0.0);
 glVertex2i(500, 250-ly);
 glColor3f(0.0, 0.0, 0.0);
 glVertex2i(880, 250-ly);
 glColor3f(0.0, 0.0, 0.0);
 glVertex2i(880, 270-ly);
 glColor3f(0.0, 0.0, 0.0);
 glVertex2i(500, 270-ly);
 glEnd();
      
 //punktir
 if (!liana_hit) {
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
 }
 //kulka
 
 glColor3f(1.0, 0.0, 0.0);
 drawCircle(689, 321-ly, 50,60);

 if(gfPyshkaX>1450 && gfPyshkaX<1500 && gfPyshkaY>0 && gfPyshkaY<500 && mrt > 5 && mrt < 15 && !liana_hit)
 {
	 gfDeltaX1=0;
	 gfDeltaY1=0;
	 dly=10;
	 liana_hit = true;
 }

 ly+=dly;

 if(!liana_hit) {
	 dly=0;
 }

 //Romb
 if (mrt>5) { gfDeltaX = 0;
			deltaangle = 0;
			}

 if(gfPyshkaX>570 && !ball_hit && mrt<5) {gfDeltaX = 0.5;
 deltaangle = 0.2;
 ball_hit = true;
 gfDeltaX1=0;

 }
		
			  glPushMatrix();
			  glTranslatef(-gfPosX-80,-382,0);
				glRotatef(angle1,0,0,1);
            
		angle1 -= deltaangle;
        gfPosX -= gfDeltaX;
		if(gfPosX >= 75 || gfPosX <= -200)
	   {
		   angle1=0;
			gfDeltaX=0;
			if (mrt<5) {
			hit = true;
			}
			



	   }
	if(ly>700) {
		dly=0;
	}
	if (hit) {
		rx1-=drx;
		ry1+=dry;
		rx2-=drx2;
	}

	if (rx2 < -750)
	{
		drx2=0;
	}
	if (ry1 > 900)
	{
		drx = dry = 0;
	}

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2i(0, 75);
    glVertex2i(75, 0);
    glVertex2i(0, 0);
    glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2i(0, -75);
    glVertex2i(75, 0);
    glVertex2i(0, 0);
    glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2i(0+rx1, 75+ry1);
    glVertex2i(-75+rx1, 0+ry1);
    glVertex2i(0+rx1, 0+ry1);
    glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2i(0+rx2, -75);
    glVertex2i(-75+rx2, 0);
    glVertex2i(0+rx2, 0);
    glEnd();
	if (!hit) {
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
              
              glVertex2i(0, 75);
              
              glVertex2i(75, 0);
              
              glVertex2i(0, -75);
             
              glVertex2i(-75,0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
              
              glVertex2i(0, 75);
              
              glVertex2i(75, 0);
              
              glVertex2i(0, -75);
             
              glVertex2i(-75,0);
	glEnd();
	}
		
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
	   
	   //1 kusok
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

		 //2kusok
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
         if(gfRotZ >= 90 || gfRotZ <= -mrt) //s klavi -45 pomenyat na -mrt (-45 - randomnii ugol povorota)
         {
                        gfDeltaZ=0;
         }
        
         glPopMatrix();
         //animaci9 9dra
         if( gfRotZ >= 90 || gfRotZ <= -mrt )
         {
         gfPyshkaX += gfDeltaX1;
         gfPyshkaY += gfDeltaY1;
         }
         //animatsiya perekladiny 
         if(gfPosY >= 200 || gfPosY <= -200)
         {
                        gfDeltaY=0;
         }
         //animatsiya kusochkiv=)
		 if(gfPosY2 >= 200 || gfPosY2 <= -459)
         {
                        gfDeltaY2=0;
						glBegin(GL_QUADS);
		                     glColor3f(1.0, 1.0, 1.0);
							 glVertex2i(480, -439);
							 glColor3f(1.0, 1.0, 1.0);
						     glVertex2i(480, -459);
							 glColor3f(1.0, 1.0, 1.0);
							 glVertex2i(520, -459);
							 glColor3f(1.0, 1.0, 1.0);
						     glVertex2i(520, -439);
						glEnd();	
						glBegin(GL_QUADS);
							 glColor3f(0.0, 0.0, 0.0);
							 glVertex2i(gfPosX5, gfPosY5+20);
						     glColor3f(0.0, 0.0, 0.0);
						     glVertex2i(gfPosX5, gfPosY5);
						     glColor3f(0.0, 0.0, 0.0);
							 glVertex2i(gfPosX5+40, gfPosY5);
						     glColor3f(0.0, 0.0, 0.0);
							 glVertex2i(gfPosX5+40, gfPosY5+20);
						glEnd();
						gfPosX5+=gfDeltaX5;
				        gfPosY5+=gfDeltaY5;
						if(gfPosY5 <= -459 || gfPosY5 >= -400)
				            {
					            gfDeltaY5=-gfDeltaY5;
				            }
						if(gfPosX5 <= 450 || gfPosX5 >= 639)
				            {
					            gfDeltaY5=0;
					            gfDeltaX5=0;
					            glBegin(GL_QUADS);
		                             glColor3f(1.0, 1.0, 1.0);
                                     glVertex2i(639, -459);
                                     glColor3f(1.0, 1.0, 1.0);
                                     glVertex2i(679, -459);
                                     glColor3f(1.0, 1.0, 1.0);
                                     glVertex2i(679, -459+21);
                                     glColor3f(1.0, 1.0, 1.0);
                                     glVertex2i(639, -459+21);
	                            glEnd();
				
				            }
         }
         glutPostRedisplay();
         glPopMatrix();
         //garmata pisla postrily ryxaetsa v livo
         if( gfRotZ >= 90 || gfRotZ <= -mrt )
         {
                 gfPyshkaX1+=gfDeltaX4;
                 gfPyshkaY1+=gfDeltaY4;
         }
         if( gfPyshkaX1 <= -200 )
                 {
                         gfDeltaX4=0;
                         gfDeltaY4=0;
                 }
         glutPostRedisplay();
         glPopMatrix();

         glPushMatrix();
         if(gfPyshkaX >= 1275 && gfPyshkaX <= 1285 && mrt>=17 )
         {
                       
                 
                         gfDeltaX1=0;
                         gfDeltaY1=0;

         glBegin(GL_QUADS);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(300, 500);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(371, 500);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(371, 199);
               glColor3f(1.0, 1.0, 1.0);
               glVertex2i(300, 199);
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
// dlya s4itivaniya s klavi                 glutSpecialFunc(RotateFunk);
                glutTimerFunc(2000, Timer, 1000);
        //registration
        glutDisplayFunc(Draw);// painting
        Initialize();
        glutMainLoop();
        
        return 0;
}

