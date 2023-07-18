#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glBegin(GL_QUADS); //main structure
glColor3ub(198, 193, 173);
glVertex2f(-4.0f, -2.0f);
glVertex2f(-4.0f, -1.0f);
glVertex2f(-2.0f, -1.0f);
glVertex2f(-2.0f, -2.0f);
glEnd();




glBegin(GL_QUADS); //top
glColor3ub(109, 98, 79);
glVertex2f(-3.0f, -1.0f);
glVertex2f(-3.0f, -1.0f);
glVertex2f(-2.0f, -1.0f);
glVertex2f(-2.0f, -1.0f);
glEnd();

glBegin(GL_QUADS); //top sides 2
glColor3ub(198, 193, 173);
glVertex2f(-5.0f, -2.8f);
glVertex2f(-0.7f, -2.8f);
glVertex2f(-5.4f, -3.1f);
glVertex2f(-0.7f, -3.1f);
glEnd();





glFlush();
}





int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
