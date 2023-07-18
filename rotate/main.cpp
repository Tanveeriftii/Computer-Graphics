#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
using namespace std;

float _angle1 = 0.0f;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(150,120,230);
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


    glColor3ub(255,300,0);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
 glPushMatrix();

 glBegin(GL_QUADS);
        glVertex2f(0.005f, 0.00f);
        glVertex2f(0.05f, -0.9f);
        glVertex2f(-0.05f, -0.9f);
        glVertex2f(-0.005f, 0.0);
	glEnd();


    glColor3ub(150,120,230);
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


    glColor3ub(150,120,230);
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

void update(int value) {

    _angle1+=.250f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);
	glutTimerFunc(20, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}
