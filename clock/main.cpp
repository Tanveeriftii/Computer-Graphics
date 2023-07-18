#include <windows.h>
#include <GL/glut.h>
#include<cstdio>
#include<math.h>>

GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
GLfloat m = 0.0f;
void init()
{
glClearColor(1,1,1,0);


}
void day()
{

glPushMatrix();

glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(k,0.0,0.0,-0.1);

glBegin(GL_LINES); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.0f, 0.03f );
glEnd();


glPopMatrix();
k+=0.010f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);
glRotatef(l,0.0,0.0,-0.1);

glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.001f, 0.0015f );
glVertex2f( 0.014f, 0.0015f );
glVertex2f( 0.0175f, 0.0f );
glVertex2f( 0.014f, -0.0015f );
glVertex2f( 0.001f, -0.0015f );
glEnd();


glPopMatrix();
l+=0.0030f;
glLoadIdentity();


glPushMatrix();
glTranslatef( 0.8f, 0.62f, 0.0f);

glRotatef(m,0.0,0.0,-0.1);
glBegin(GL_POLYGON); // clock ticks
glColor3ub(115, 115, 115);
glVertex2f( 0.0f, 0.0f );
glVertex2f( -0.001f, 0.0015f );
glVertex2f( -0.001f, -0.0015f );
glVertex2f( -0.0165f, -0.0015f );
glVertex2f( -0.0223f, 0.0f );
glVertex2f( -0.0165f, 0.0015f );
glVertex2f( -0.001f, 0.0015f );
glEnd();


glPopMatrix();
m+=0.0050f;
glLoadIdentity();


glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("scenario");
	glutInitWindowSize(620, 620);
	glutInitWindowPosition(10, 10);
    glutDisplayFunc(day);

    init();

	glutMainLoop();
	return 0;
}
