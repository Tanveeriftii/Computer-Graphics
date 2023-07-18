#include <windows.h>
#include <math.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <iostream>

using namespace std;
float _angle1=0.0f;
float move1=0.5f;
float move2=0.1f;
float move3=0.0f;
void car()
{

//car---2------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move3, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(0, 255, 255);

glVertex2f(0.0f,-0.17f);
glVertex2f(-0.07f,-0.19f);
glVertex2f(-0.07f,-0.3f);
glVertex2f(0.68f,-0.3f);
glVertex2f(0.68f,-0.23f);
glVertex2f(0.65f,-0.2f);
glVertex2f(0.55f,-0.17f);
glVertex2f(0.4f,-0.05f);
glVertex2f(0.08f,-0.05f);

glPopMatrix();
glEnd();

//car---2-light-----------


//glass---1------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move3, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 255);
glVertex2f(0.03f,-0.17f);
glVertex2f(0.23f,-0.17f);
glVertex2f(0.23f,-0.08f);
glVertex2f(0.09f,-0.08f);
glPopMatrix();
glEnd();

//glass---2------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move3, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 255);
glVertex2f(0.25f,-0.17f);
glVertex2f(0.47f,-0.17f);
glVertex2f(0.4f,-0.08f);
glVertex2f(0.25f,-0.08f);
glPopMatrix();
glEnd();


//tire-1-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move1,-0.3f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.08;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//tire-2-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move2,-0.3f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.08;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//tire-1-ring----------
glLineWidth(5.0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move1,-0.3f, 0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(235, 235, 224);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//tire-2-ring----------
glLineWidth(5.0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move2,-0.3f, 0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(235, 235, 224);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=.07;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();
}

void drawScene() {
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
car();
glutSwapBuffers();
glFlush();

}


void update(int value) {


_angle1+=1.50f;
if(_angle1 > 360.0)
{
_angle1-=360;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(90, update, 0); //Notify GLUT to call update again in 25 milliseconds
}



int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Transformation");
glutDisplayFunc(drawScene);
glutTimerFunc(90, update, 0);

glutMainLoop();
return 0;
}
