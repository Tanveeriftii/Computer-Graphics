#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(.0f, 1.0f, 1.0f, .0f); // Black and opaque
}




{


GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;
GLfloat m = 0.0f;

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
glLoadIdentity()
}
