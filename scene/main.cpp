#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(.0f, 1.0f, 1.0f, .0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void road()
{
   glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(.215f, .2150f, .2150f);
    glShadeModel (GL_SMOOTH);

    glColor3f(0.1f,0.1f,0.1f);

    glBegin(GL_QUADS);
    glVertex2f(-5.0f, -.6f);    // x, y
	glVertex2f(5.0f, -.6f);
	glVertex2f(5.0f, -1.5f);    // x, y
	glVertex2f(-5.f, -01.5f);

    glPopMatrix();
    glEnd();

}




void tree()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-0.7f, 0.f, 0.0f);
    glScalef(.30f, .30f, .30f);
    glShadeModel (GL_SMOOTH);
glBegin(GL_POLYGON);
    glBegin(GL_POLYGON);
// Each set of 4 vertices form a quad
glColor3ub(160.0, 082.0, 045.0); //
glVertex2f(-0.1f, 0.0f);
glVertex2f(0.1f, 0.0f);
glVertex2f(0.1f, -0.5f);
glVertex2f(-0.1f, -0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(60.0, 179.0, 113.0); //
glVertex2f(0.5f, 0.0f);
glVertex2f(.4f, 0.1f);
glVertex2f(-.4f,0.1f);
glVertex2f(-.5f, 0.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(60.0, 179.0, 113.0); //0
glVertex2f(0.0f, 0.9f);
glVertex2f(-.5f, 0.1f);
glVertex2f(0.5f,0.1f);
//glVertex2f(-0.5f, 0.0f);
glEnd();

}


void building()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.f, -0.175f, 0.0f);
    glScalef(.50f, .50f, .50f);
    glShadeModel (GL_SMOOTH);

    glBegin(GL_POLYGON);
// Each set of 4 vertices form a quad
glColor3ub(154.0, 205.0, 50.0); //
glVertex2f(-0.8f, 0.9f);
glVertex2f(-0.2f, 0.9f);
glVertex2f(-0.2f, .1f);
glVertex2f(-0.8f, .1);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.7f, 0.8f);
glVertex2f(-.6f, 0.8f);
glVertex2f(-.6f,0.7f);
glVertex2f(-.7f, 0.7f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.7f, 0.6f);
glVertex2f(-.6f, 0.6f);
glVertex2f(-.6f,0.5f);
glVertex2f(-.7f, 0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.7f, 0.4f);
glVertex2f(-.6f, 0.4f);
glVertex2f(-.6f,0.3f);
glVertex2f(-.7f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.3f, 0.8f);
glVertex2f(-.4f, 0.8f);
glVertex2f(-.4f,0.7f);
glVertex2f(-.3f, 0.7f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.3f, 0.6f);
glVertex2f(-.4f, 0.6f);
glVertex2f(-.4f,0.5f);
glVertex2f(-.3f, 0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.3f, 0.4f);
glVertex2f(-.4f, 0.4f);
glVertex2f(-.4f,0.3f);
glVertex2f(-.3f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
// Each set of 4 vertices form a quad
glColor3ub(255.0, 215.0, 0.0);
glVertex2f(-0.45f, 0.3f);
glVertex2f(-0.55f, 0.3f);
glVertex2f(-0.55f, 0.1f);
glVertex2f(-0.45f, 0.1);
glEnd();

}
void building4()
{
     glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.f, -0.01f, 0.0f);
    glScalef(.20f, .20f, .10f);
    glShadeModel (GL_SMOOTH);
    glBegin(GL_POLYGON);
// Each set of 4 vertices form a quad
glColor3ub(154.0, 205.0, 50.0); //
glVertex2f(-0.3f, 0.5f);
glVertex2f(0.3f, 0.5f);
glVertex2f(0.3f, -0.5f);
glVertex2f(-0.3f, -0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, 0.4f);
glVertex2f(-.1f, 0.4f);
glVertex2f(-.1f,0.3f);
glVertex2f(-.2f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, 0.1f);
glVertex2f(-.1f, 0.1f);
glVertex2f(-.1f,0.0f);
glVertex2f(-.2f, 0.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, -0.2f);
glVertex2f(-.1f, -0.2f);
glVertex2f(-.1f,-0.3f);
glVertex2f(-.2f, -0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(0.1f, 0.4f);
glVertex2f(.2f, 0.4f);
glVertex2f(.2f,0.3f);
glVertex2f(.1f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0);//
glVertex2f(0.1f, 0.1f);
glVertex2f(.2f, 0.1f);
glVertex2f(.2f,0.0f);
glVertex2f(.1f, 0.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(0.1f, -0.2f);
glVertex2f(.2f, -0.2f);
glVertex2f(.2f,-0.3f);
glVertex2f(.1f, -0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //0
glVertex2f(-0.05f, -0.3f);
glVertex2f(.05f, -0.3f);
glVertex2f(0.05f,-0.5f);
glVertex2f(-0.05f, -0.5f);
//glVertex2f(-0.5f, 0.0f);
glEnd();

}
void building3()
{
     glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.25f, -0.02f, 0.0f);
    glScalef(.210f, .210f, .210f);
    glShadeModel (GL_SMOOTH);
    glBegin(GL_POLYGON);
// Each set of 4 vertices form a quad
glColor3ub(154.0, 205.0, 50.0); //
glVertex2f(-0.3f, 0.5f);
glVertex2f(0.3f, 0.5f);
glVertex2f(0.3f, -0.5f);
glVertex2f(-0.3f, -0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, 0.4f);
glVertex2f(-.1f, 0.4f);
glVertex2f(-.1f,0.3f);
glVertex2f(-.2f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, 0.1f);
glVertex2f(-.1f, 0.1f);
glVertex2f(-.1f,0.0f);
glVertex2f(-.2f, 0.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, -0.2f);
glVertex2f(-.1f, -0.2f);
glVertex2f(-.1f,-0.3f);
glVertex2f(-.2f, -0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(0.1f, 0.4f);
glVertex2f(.2f, 0.4f);
glVertex2f(.2f,0.3f);
glVertex2f(.1f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0);//
glVertex2f(0.1f, 0.1f);
glVertex2f(.2f, 0.1f);
glVertex2f(.2f,0.0f);
glVertex2f(.1f, 0.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(0.1f, -0.2f);
glVertex2f(.2f, -0.2f);
glVertex2f(.2f,-0.3f);
glVertex2f(.1f, -0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //0
glVertex2f(-0.05f, -0.3f);
glVertex2f(.05f, -0.3f);
glVertex2f(0.05f,-0.5f);
glVertex2f(-0.05f, -0.5f);
//glVertex2f(-0.5f, 0.0f);
glEnd();

}

void building2()
{
     glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.f, -0.01f, 0.0f);
    glScalef(.20f, .20f, .10f);
    glShadeModel (GL_SMOOTH);
    glBegin(GL_POLYGON);
// Each set of 4 vertices form a quad
glColor3ub(154.0, 205.0, 50.0); //
glVertex2f(-0.3f, 0.5f);
glVertex2f(0.3f, 0.5f);
glVertex2f(0.3f, -0.5f);
glVertex2f(-0.3f, -0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, 0.4f);
glVertex2f(-.1f, 0.4f);
glVertex2f(-.1f,0.3f);
glVertex2f(-.2f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, 0.1f);
glVertex2f(-.1f, 0.1f);
glVertex2f(-.1f,0.0f);
glVertex2f(-.2f, 0.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(-0.2f, -0.2f);
glVertex2f(-.1f, -0.2f);
glVertex2f(-.1f,-0.3f);
glVertex2f(-.2f, -0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(0.1f, 0.4f);
glVertex2f(.2f, 0.4f);
glVertex2f(.2f,0.3f);
glVertex2f(.1f, 0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0);//
glVertex2f(0.1f, 0.1f);
glVertex2f(.2f, 0.1f);
glVertex2f(.2f,0.0f);
glVertex2f(.1f, 0.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //
glVertex2f(0.1f, -0.2f);
glVertex2f(.2f, -0.2f);
glVertex2f(.2f,-0.3f);
glVertex2f(.1f, -0.3f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255.0, 215.0, 0.0); //0
glVertex2f(-0.05f, -0.3f);
glVertex2f(.05f, -0.3f);
glVertex2f(0.05f,-0.5f);
glVertex2f(-0.05f, -0.5f);
//glVertex2f(-0.5f, 0.0f);
glEnd();

}


void road2ndlane()
{
   glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(.215f, .2150f, .2150f);
    glShadeModel (GL_SMOOTH);

    glColor3ub(0.255f,0.255f,0.0f);

    glBegin(GL_QUADS);
    glVertex2f(-5.0f, -2.6f);    // x, y
	glVertex2f(5.0f, -2.6f);
	glVertex2f(5.0f, -1.5f);    // x, y
	glVertex2f(-5.f, -01.5f);

    glPopMatrix();
    glEnd();

}
void river()
{
   glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(.215f, .2150f, .2150f);
    glShadeModel (GL_SMOOTH);

    glColor3f(0.,0.f,01.f);

    glBegin(GL_QUADS);
    glVertex2f(-5.0f, -1.6f);    // x, y
	glVertex2f(5.0f, -1.6f);
	glVertex2f(5.0f, -10.5f);    // x, y
	glVertex2f(-5.f, -10.5f);

    glPopMatrix();
    glEnd();
}
void sun()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.6f,0.8f,0.0f);
    glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor4f(1.0f, 1.0f, 0.0f, 0.0f);
        float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.1;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}


void lamp()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.7f, 0.22f, 0.0f);
    glScalef(0.4f, 0.4f, 0.0f);
    //glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_QUADS);              // base
	glColor3f(.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.3f, -0.9f);    // x, y
	glVertex2f(0.3f, -0.9f);
	glVertex2f(0.3f, -0.8f);    // x, y
	glVertex2f(-0.3f, -0.8f);

	glEnd();

    //Scalef(0.6f, 1.5f, 0.0f);
    glBegin(GL_QUADS);              // stand
	glColor3f(.0f, 0.0f, 0.0f); // Red

	glVertex2f(-0.1f, -0.8f);    // x, y
	glVertex2f(0.1f, -0.8f);
	glVertex2f(0.1f, -0.2f);    // x, y
	glVertex2f(-0.1f, -0.2f);

	glEnd();

    glScalef(0.5f, 2.0f, 0.0f);
    glBegin(GL_QUADS);              //light
	glColor3ub(0.f, 0.f, .0f); // Red

	glVertex2f(-0.20f,-0.2f);  // x, y
	glVertex2f(0.20, -0.2f);
	glVertex2f(0.20, 0.1f);    // x, y
	glVertex2f(-0.20, 0.1f);

	glEnd();

}

void lampLightYellow()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.7f,0.15f,0.0f);
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor3f(1.0f, 1.0f, 0.0f);
        float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.04;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}

void lampLightRed()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.7f,0.05f,0.0f);
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor3f(1.0f, 0.0f, 0.0f);
        float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.04;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}

void lampLightGreen()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.7f,0.25f,0.0f);
    glColor3f(0.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor3f(0.0f, 0.5f, 0.0f);
        float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.04;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
    }
    glEnd();
    glPopMatrix();
}


void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    sun();
    building();
    building2();
    building3();
    building4();
    tree();
    road();
    lamp();
    lampLightRed();
    lampLightYellow();
    lampLightGreen();
    river();
    road2ndlane();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1320, 1320);         // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title

	gluOrtho2D(-1.5,1.5,-1.5,1.5);    // Set the window's initial width & height
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();
	                // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
