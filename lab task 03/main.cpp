#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;
void dis();
void display();

void update(int value) {

if(position <-1.5)
position = 1.0f;

position -= speed;

glutPostRedisplay();

glutTimerFunc(100,update,0);
}

void update1(int value) {

if(position1 >1.0)
position1 = -1.0f;

position1 += speed;

glutPostRedisplay();

glutTimerFunc(100,update1,0);
}

/*void init() {
glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}
*/

void disback(int val)
{
glutDisplayFunc(display);
}

void display3()
{
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glTranslatef(0,0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(89, 89, 89);
glVertex2f(-1.0f, 1.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f, 1.0f);
glEnd();
glPopMatrix();


glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(0.65f,0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(255, 255, 255);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.13;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}

glEnd();
glPopMatrix();

glutTimerFunc(2000,disback,0);
glFlush();
}

void display2(int val) {

glutDisplayFunc(display3);

}
void display() {
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glLoadIdentity();

glPushMatrix();
glTranslatef(0,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(153, 255, 255);
glVertex2f(-1.0f, 1.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(1.0f, 0.0f);
glVertex2f(1.0f, 1.0f);
glEnd();
glPopMatrix();

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-0.65f,0.75f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(230, 57, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.13;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();



glutTimerFunc(2000,display2,0);
glFlush();

}

void dis()
{
glutDisplayFunc(display);
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(320, 320);
glutInitWindowPosition(50, 50);
glutCreateWindow("Translation Animation");
glutDisplayFunc(dis);
//init();

glutTimerFunc(20, update, 0);
glutTimerFunc(20, update1, 0);
glutMainLoop();
return 0;
}
