#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
using namespace std;

float _angle1 = 0.0f;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
	glRotatef(_angle1, 0.0f, 0.0f,1.0f);
    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.0f, 0.01);
	glEnd();


    glColor3d(1,1,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
 glPushMatrix();

 glBegin(GL_QUADS);
        glVertex2f(0.05f, 0.00f);
        glVertex2f(0.05f, -0.9f);
        glVertex2f(-0.05f, -0.9f);
        glVertex2f(-0.05f, 0.0);
	glEnd();


    glColor3d(1,0,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
	glRotatef(_angle1, 0.0f, 0.0f,1.0f);

    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-0.5f, 0.2f);
        glVertex2f(0.0f, 0.01);
	glEnd();


    glColor3d(1,0,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
	glRotatef(_angle1, 0.0f, 0.0f,1.0f);

    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(-0.2f, -0.5f);
        glVertex2f(0.01f, 0.0);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);

	glutMainLoop();
	return 0;
}

