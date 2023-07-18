#include <windows.h>
#include <GL/glut.h>
#include<cstdio>
#include<math.h>>
# define PI    3.14159265358979323846

void init()
{
glClearColor(1,1,1,0);

}

void day()
{

	glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS); //Ground
glColor3ub(153, 255, 102);
glVertex2f(-1.0f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.5f);
glVertex2f(-1.0f,-0.5f);
glEnd();

  glBegin(GL_QUADS); //sky
glColor3ub(100,100,200);
glVertex2f(-1.0f,-0.5f);
glVertex2f(1.0f,-0.5f);
glVertex2f(1.0f,1.0f);
glVertex2f(-1.0f,1.0f);
glEnd();


glColor3ub(255, 51, 0);
	int i;

	GLfloat x=.7f; GLfloat y=.8f; GLfloat radius =-.4f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


glBegin(GL_QUADS); //building
glColor3ub(102, 153, 153);
glVertex2f(-0.5f,-0.7f);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,0.7f);
glVertex2f(-0.5f,0.7f);
glEnd();




glBegin(GL_QUADS); //building
glColor3ub(102, 153, 153);
glVertex2f(-0.8f,-0.63f);
glVertex2f(-0.5f,-0.7f);
glVertex2f(-0.5f,0.7f);
glVertex2f(-0.8f,0.65f);
glEnd();

glBegin(GL_QUADS); //building
glColor3ub(102, 153, 153);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.97f,-0.7f);
glVertex2f(0.97f,0.9f);
glVertex2f(0.9f,0.9f);
glEnd();

glBegin(GL_QUADS); //door
glColor3ub(255, 255, 102);
glVertex2f(0.2f,-0.7f);
glVertex2f(0.5f,-0.7f);
glVertex2f(0.5f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_QUADS); //door
glColor3ub(255, 255, 102);
glVertex2f(0.2f,-0.7f);
glVertex2f(0.5f,-0.7f);
glVertex2f(0.5f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();


glBegin(GL_LINES); //building
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,0.7f);
glEnd();

glBegin(GL_LINES); //building
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.5f,-0.7f);
glVertex2f(-0.5f,0.7f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.85f);
glVertex2f(0.97f,0.85f);
glVertex2f(0.97f,0.8f);
glVertex2f(0.9f,0.8f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.75f);
glVertex2f(0.97f,0.75f);
glVertex2f(0.97f,0.7f);
glVertex2f(0.9f,0.7f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.65f);
glVertex2f(0.97f,0.65f);
glVertex2f(0.97f,0.6f);
glVertex2f(0.9f,0.6f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.55f);
glVertex2f(0.97f,0.55f);
glVertex2f(0.97f,0.5f);
glVertex2f(0.9f,0.5f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.45f);
glVertex2f(0.97f,0.45f);
glVertex2f(0.97f,0.4f);
glVertex2f(0.9f,0.4f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.35f);
glVertex2f(0.97f,0.35f);
glVertex2f(0.97f,0.3f);
glVertex2f(0.9f,0.3f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.25f);
glVertex2f(0.97f,0.25f);
glVertex2f(0.97f,0.2f);
glVertex2f(0.9f,0.2f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.15f);
glVertex2f(0.97f,0.15f);
glVertex2f(0.97f,0.1f);
glVertex2f(0.9f,0.1f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.05f);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glVertex2f(0.9f,0.0f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.1f);
glVertex2f(0.97f,-0.1f);
glVertex2f(0.97f,-0.1f);
glVertex2f(0.9f,-0.1f);
glEnd();


glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.05f);
glVertex2f(0.97f,-0.05f);
glVertex2f(0.97f,-0.1f);
glVertex2f(0.9f,-0.1f);
glEnd();


glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.15f);
glVertex2f(0.97f,-0.15f);
glVertex2f(0.97f,-0.2f);
glVertex2f(0.9f,-0.2f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.25f);
glVertex2f(0.97f,-0.25f);
glVertex2f(0.97f,-0.3f);
glVertex2f(0.9f,-0.3f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.35f);
glVertex2f(0.97f,-0.35f);
glVertex2f(0.97f,-0.4f);
glVertex2f(0.9f,-0.4f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.45f);
glVertex2f(0.97f,-0.45f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.55f);
glVertex2f(0.97f,-0.55f);
glVertex2f(0.97f,-0.6f);
glVertex2f(0.9f,-0.6f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,-0.6f);
glVertex2f(0.8f,-0.6f);
glVertex2f(0.8f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,-0.4f);
glVertex2f(0.8f,-0.4f);
glVertex2f(0.8f,-0.3f);
glVertex2f(-0.4f,-0.3f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,-0.2f);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,-0.1f);
glVertex2f(-0.4f,-0.1f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,0.0f);
glVertex2f(0.8f,0.0f);
glVertex2f(0.8f,0.1f);
glVertex2f(-0.4f,0.1f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,0.0f);
glVertex2f(0.8f,0.0f);
glVertex2f(0.8f,0.1f);
glVertex2f(-0.4f,0.1f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,0.2f);
glVertex2f(0.8f,0.2f);
glVertex2f(0.8f,0.3f);
glVertex2f(-0.4f,0.3f);
glEnd();


glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,0.4f);
glVertex2f(0.8f,0.4f);
glVertex2f(0.8f,0.5f);
glVertex2f(-0.4f,0.5f);
glEnd();


glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.4f,0.59f);
glVertex2f(0.8f,0.59f);
glVertex2f(0.8f,0.68f);
glVertex2f(-0.4f,0.68f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 102, 153);
glVertex2f(-0.78f,-0.59f);
glVertex2f(-0.55f,-0.64f);
glVertex2f(-0.55f,0.67f);
glVertex2f(-0.78f,0.63f);
glEnd();

glBegin(GL_QUADS); //stand
glColor3ub(255, 0, 0);
glVertex2f(0.0f,-0.8f);
glVertex2f(-0.05f,-0.8f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(0.0f,-0.5f);

glEnd();

glBegin(GL_QUADS); //stand
glColor3ub(50, 0, 0);
glVertex2f(0.6f,-0.8f);
glVertex2f(0.65f,-0.8f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.6f,-0.5f);

glEnd();

glBegin(GL_QUADS); //stand
glColor3ub(50, 0, 0);
glVertex2f(0.1f,-0.6f);
glVertex2f(0.8f,-0.6f);
glVertex2f(0.65f,-0.5f);
glVertex2f(-0.05f,-0.5f);

glEnd();


glBegin(GL_QUADS); //stand
glColor3ub(50, 0, 0);
glVertex2f(0.1f,-0.6f);
glVertex2f(0.8f,-0.6f);
glVertex2f(0.65f,-0.5f);
glVertex2f(-0.05f,-0.5f);

glEnd();

glBegin(GL_QUADS); //building
glColor3ub(153, 153, 102);
glVertex2f(-0.5f,-0.7f);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,0.7f);
glVertex2f(-0.5f,0.7f);
glEnd();



glBegin(GL_QUADS); //building
glColor3ub(153, 153, 102);
glVertex2f(-0.8f,-0.63f);
glVertex2f(-0.5f,-0.7f);
glVertex2f(-0.5f,0.7f);
glVertex2f(-0.8f,0.65f);
glEnd();

glBegin(GL_QUADS); //building
glColor3ub(153, 153, 102);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.97f,-0.7f);
glVertex2f(0.97f,0.9f);
glVertex2f(0.9f,0.9f);
glEnd();

glBegin(GL_QUADS); //door
glColor3ub(255, 255, 0);
glVertex2f(0.2f,-0.7f);
glVertex2f(0.5f,-0.7f);
glVertex2f(0.5f,-0.5f);
glVertex2f(0.2f,-0.5f);
glEnd();

glBegin(GL_LINES); //building
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,0.7f);
glEnd();

glBegin(GL_LINES); //building
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.7f);
glVertex2f(0.9f,0.7f);
glEnd();


glBegin(GL_LINES); //building
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.5f,-0.7f);
glVertex2f(-0.5f,0.7f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.85f);
glVertex2f(0.97f,0.85f);
glVertex2f(0.97f,0.8f);
glVertex2f(0.9f,0.8f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.75f);
glVertex2f(0.97f,0.75f);
glVertex2f(0.97f,0.7f);
glVertex2f(0.9f,0.7f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.75f);
glVertex2f(0.97f,0.75f);
glVertex2f(0.97f,0.7f);
glVertex2f(0.9f,0.7f);
glEnd();


glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.65f);
glVertex2f(0.97f,0.65f);
glVertex2f(0.97f,0.6f);
glVertex2f(0.9f,0.6f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.55f);
glVertex2f(0.97f,0.55f);
glVertex2f(0.97f,0.5f);
glVertex2f(0.9f,0.5f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.45f);
glVertex2f(0.97f,0.45f);
glVertex2f(0.97f,0.4f);
glVertex2f(0.9f,0.4f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.35f);
glVertex2f(0.97f,0.35f);
glVertex2f(0.97f,0.3f);
glVertex2f(0.9f,0.3f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.25f);
glVertex2f(0.97f,0.25f);
glVertex2f(0.97f,0.2f);
glVertex2f(0.9f,0.2f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.15f);
glVertex2f(0.97f,0.15f);
glVertex2f(0.97f,0.1f);
glVertex2f(0.9f,0.1f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,0.05f);
glVertex2f(0.97f,0.05f);
glVertex2f(0.97f,0.0f);
glVertex2f(0.9f,0.0f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.1f);
glVertex2f(0.97f,-0.1f);
glVertex2f(0.97f,-0.1f);
glVertex2f(0.9f,-0.1f);
glEnd();


glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.05f);
glVertex2f(0.97f,-0.05f);
glVertex2f(0.97f,-0.1f);
glVertex2f(0.9f,-0.1f);
glEnd();


glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.15f);
glVertex2f(0.97f,-0.15f);
glVertex2f(0.97f,-0.2f);
glVertex2f(0.9f,-0.2f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.25f);
glVertex2f(0.97f,-0.25f);
glVertex2f(0.97f,-0.3f);
glVertex2f(0.9f,-0.3f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.35f);
glVertex2f(0.97f,-0.35f);
glVertex2f(0.97f,-0.4f);
glVertex2f(0.9f,-0.4f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.45f);
glVertex2f(0.97f,-0.45f);
glVertex2f(0.97f,-0.5f);
glVertex2f(0.9f,-0.5f);
glEnd();

glBegin(GL_QUADS); //mini glass
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(0.9f,-0.55f);
glVertex2f(0.97f,-0.55f);
glVertex2f(0.97f,-0.6f);
glVertex2f(0.9f,-0.6f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.4f,-0.6f);
glVertex2f(0.8f,-0.6f);
glVertex2f(0.8f,-0.5f);
glVertex2f(-0.4f,-0.5f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.4f,-0.4f);
glVertex2f(0.8f,-0.4f);
glVertex2f(0.8f,-0.3f);
glVertex2f(-0.4f,-0.3f);
glEnd();


glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.4f,-0.2f);
glVertex2f(0.8f,-0.2f);
glVertex2f(0.8f,-0.1f);
glVertex2f(-0.4f,-0.1f);
glEnd();


glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.4f,0.0f);
glVertex2f(0.8f,0.0f);
glVertex2f(0.8f,0.1f);
glVertex2f(-0.4f,0.1f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.4f,0.2f);
glVertex2f(0.8f,0.2f);
glVertex2f(0.8f,0.3f);
glVertex2f(-0.4f,0.3f);
glEnd();


glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.4f,0.4f);
glVertex2f(0.8f,0.4f);
glVertex2f(0.8f,0.5f);
glVertex2f(-0.4f,0.5f);
glEnd();


glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.4f,0.59f);
glVertex2f(0.8f,0.59f);
glVertex2f(0.8f,0.68f);
glVertex2f(-0.4f,0.68f);
glEnd();

glBegin(GL_QUADS); //glass
glColor3ub(0, 0, 153);
glVertex2f(-0.78f,-0.59f);
glVertex2f(-0.55f,-0.64f);
glVertex2f(-0.55f,0.67f);
glVertex2f(-0.78f,0.63f);
glEnd();


glBegin(GL_QUADS); //stand
glColor3ub(204, 0, 0);
glVertex2f(0.0f,-0.8f);
glVertex2f(-0.05f,-0.8f);
glVertex2f(-0.05f,-0.5f);
glVertex2f(0.0f,-0.5f);

glEnd();

glBegin(GL_QUADS); //stand
glColor3ub(204, 0, 0);
glVertex2f(0.6f,-0.8f);
glVertex2f(0.65f,-0.8f);
glVertex2f(0.65f,-0.5f);
glVertex2f(0.6f,-0.5f);

glEnd();

glBegin(GL_QUADS); //stand
glColor3ub(204, 0, 0);
glVertex2f(0.1f,-0.6f);
glVertex2f(0.8f,-0.6f);
glVertex2f(0.65f,-0.5f);
glVertex2f(-0.05f,-0.5f);

glEnd();

float _angle1 = 0.0f;


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
	glutDisplayFunc(day);

	glutMainLoop();
	glFlush();
	return 0;
}



int main(int argc, char** argv);
{
	glutInit(&argc, argv);
	glutCreateWindow("scenario");
	glutInitWindowSize(420, 420);
	glutInitWindowPosition(50, 50);
    glutDisplayFunc(day);

    init();

	glutMainLoop();
	return 0;
}
