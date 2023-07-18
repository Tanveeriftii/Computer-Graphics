#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display1() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glPopMatrix();
    j+=0.01;

   glBegin(GL_QUADS); //clock border
glColor3ub (255, 255, 255);
glVertex2f (0.13, 0.32);
glVertex2f (0.33, 0.32);
glVertex2f (0.33, 0.16);
glVertex2f (0.13, 0.16);
glEnd();


glBegin(GL_QUADS); //clock
glColor3ub (13, 13, 13);
glVertex2f (0.14, 0.31);
glVertex2f (0.32, 0.31);
glVertex2f (0.32, 0.17);
glVertex2f (0.14, 0.17);
glEnd();

    glBegin(GL_LINES);//12
    glColor3ub(255,0,0);
    glVertex2f(0.18, 0.298);
    glVertex2f(0.18, 0.28);
    glEnd();

     glBegin(GL_LINES);//1
    glColor3ub(255,0,0);
    glVertex2f(0.206, 0.295);
    glVertex2f(0.2, 0.28);
    glEnd();

    glBegin(GL_LINES);//2
    glColor3ub(255,0,0);
    glVertex2f(0.216, 0.275);
    glVertex2f(0.206, 0.265);
    glEnd();


  glBegin(GL_LINES);//3
    glColor3ub(255,0,0);
    glVertex2f(0.218, 0.25);
    glVertex2f(0.206, 0.25);
    glEnd();


  glBegin(GL_LINES);//4
    glColor3ub(255,0,0);
    glVertex2f(0.216, 0.215);
    glVertex2f(0.206, 0.23);
    glEnd();


  glBegin(GL_LINES);//5
    glColor3ub(255,0,0);
    glVertex2f(0.199, 0.202);
    glVertex2f(0.192, 0.225);
    glEnd();


  glBegin(GL_LINES);//6
    glColor3ub(255,0,0);
    glVertex2f(0.18, 0.225);
    glVertex2f(0.18, 0.202);
    glEnd();


  glBegin(GL_LINES);//7
    glColor3ub(255,0,0);
    glVertex2f(0.168, 0.225);
    glVertex2f(0.16, 0.202);
    glEnd();


  glBegin(GL_LINES);//8
    glColor3ub(255,0,0);
    glVertex2f(0.155, 0.23);
    glVertex2f(0.144, 0.208);
    glEnd();

  glBegin(GL_LINES);//9
    glColor3ub(255,0,0);
    glVertex2f(0.142, 0.25);
    glVertex2f(0.154, 0.25);
    glEnd();



  glBegin(GL_LINES);//10
    glColor3ub(255,0,0);
    glVertex2f(0.154, 0.27);
    glVertex2f(0.142, 0.28);
    glEnd();


  glBegin(GL_LINES);//11
    glColor3ub(255,0,0);
    glVertex2f(0.16, 0.295);
    glVertex2f(0.168, 0.27);
    glEnd();


  glBegin(GL_LINES);//hr
    glColor3ub(230, 230, 230);
    glVertex2f(0.18, 0.25);
    glVertex2f(0.18, 0.27);
    glEnd();


  glBegin(GL_LINES);//min
    glColor3ub(230, 230, 230);
    glVertex2f(0.18, 0.25);
    glVertex2f(0.186, 0.275);
    glEnd();



    glPushMatrix();
    glTranslated(0.18, 0.25,0.0);
    glRotatef(i,0.0,0.0,-0.1);



  glBegin(GL_LINES);//sec
    glColor3ub(230, 230, 230);
    glVertex2f(0.0,0.0);
    glVertex2f(0.036, 0.036);
    glEnd();

     glPopMatrix();
    j+=0.1;


glFlush();
}





int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display1);
	glutMainLoop();
	return 0;
}
