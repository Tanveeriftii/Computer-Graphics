#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);




	glBegin(GL_LINES);

	glColor3ub(255,69,0);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);

	glColor3ub(255,69,0);
	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);

	//  Triangle

	 glColor3ub(128,0,0);
	glVertex2f(-0.4f, -0.4f);
	glVertex2f(-0.2f, -0.4f);

    glColor3ub(128,0,0);
	glVertex2f(-0.2f, -0.4f);
	glVertex2f(-0.3f, -0.2f);

	glColor3ub(128,0,0);
	glVertex2f(-0.3f, -0.2f);
	glVertex2f(-0.4f, -0.4f);



	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 0);
	glVertex2f(0.2f, 0.2f);
	glVertex2f(0.3f, 0.4f);
	glVertex2f(0.4f, 0.2f);

	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(34,139,34);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.2f, 0.4f);
	glVertex2f(-0.4f, 0.4f);
	glVertex2f(-0.4f, 0.2f);


	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,128);
	glVertex2f(0.6f, -0.4f);
	glVertex2f(0.4f, -0.6f);
	glVertex2f(0.6f, -0.8f);
	glVertex2f(0.8f, -0.8f);
	glVertex2f(1.0f, -0.6f);
	glVertex2f(0.8f, -0.4f);

	glEnd();



	glFlush();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(400, 600);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
