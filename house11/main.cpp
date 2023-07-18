#include <GL/glut.h>
#include<math.h>>
#include <windows.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(1,0);
              glVertex2f(1,1);
              glVertex2f(-1,1);
              glVertex2f(-1,0);
    glEnd();


    glBegin(GL_QUADS);
              glColor3ub(153, 153, 102);
              glVertex2f(0.9,0);
              glVertex2f(0.9,0.2);
              glVertex2f(-0.9,0.2);
              glVertex2f(-0.9,0);
    glEnd();

    glBegin(GL_QUADS);
              glColor3ub(153, 102, 0);
              glVertex2f(0.9,0.2);
              glVertex2f(0.9, 0.6);
              glVertex2f(0,0.6);
              glVertex2f(0,0.2);
    glEnd();

    glBegin(GL_QUADS);
              glColor3ub(102, 51, 0);
              glVertex2f(0.9,0.6);
              glVertex2f(0.7,0.9);
              glVertex2f(-0.2,0.9);
              glVertex2f(0,0.6);
    glEnd();



     glBegin(GL_QUADS);
              glColor3ub(0,0,0);
              glVertex2f(0.7,0.3);
              glVertex2f(0.7, 0.5);
              glVertex2f(0.5,0.5);
              glVertex2f(0.5,0.3);
    glEnd();


     glBegin(GL_QUADS);
              glColor3ub(255, 255, 0);
              glVertex2f(0.7,0.4);
              glVertex2f(0.7, 0.5);
              glVertex2f(0.5,0.5);
              glVertex2f(0.5,0.4);
    glEnd();

	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(640, 640);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
