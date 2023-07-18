#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(.1f, 1.0f, 1.0f, .0f); // Black and opaque
}
float _angle1 = 0.0f;
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
    glTranslatef(-.10f, -0.18f, 0.0f);
    glScalef(.40f, .50f, 1.0f);
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
    glTranslatef(0.f, -0.03f, 0.0f);
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
      //GLfloat i = 0.0f;
GLfloat l = 0.0f;
GLfloat m = 0.0f;
GLfloat n = 0.0f;


void clock()
{




 glBegin(GL_QUADS);
	glColor3ub(0,23,30);
	glVertex2f(-0.1f,1.0f); //sky2
	glVertex2f(0.3f,1.0f);
	glVertex2f(0.3f,0.6f);
	glVertex2f(-0.1f,0.6f);
	glEnd();

//////////////////////////////////////////////////////////////////////////////////////
	     glPushMatrix();
         glTranslated(0.1,0.8,0);
         glRotatef(n,0.0,0.0,-0.1);

         glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.18f, 0.1f);
	glEnd();

	glPopMatrix();//glPopMatrix pops the top matrix off the stack
    n+=.1f;//n=n+.1=.2



    glPushMatrix();
         glTranslated(0.1,0.8,0);
         glRotatef(m,0.0,0.0,-0.1);

         glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.12f, 0.1f);
	glEnd();

	glPopMatrix();//glPopMatrix pops the top matrix off the stack
    m+=0.03f;


    glPushMatrix();
         glTranslated(0.1,0.8,0);
         glRotatef(l,0.0,0.0,-0.1);

         glBegin(GL_LINES);
	glColor3ub(230,230,230);

	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.02f, 0.1f);
	glEnd();

	glPopMatrix();
    l+=0.01f;




	glFlush();

	glutSwapBuffers();

}


void windmill()
{
   glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(150,120,230);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.30f, 0.320f, 0.0f);
    glScalef(.555f, .5550f, .2150f);

    glPushMatrix();
    glRotatef(_angle1, 0.0f, 0.0f,1.0f);

    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.0f, 0.01);
	glEnd();


    glColor3ub(189,231,90);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
 glPushMatrix();

    glTranslatef(0.30f, 0.320f, 0.0f);
    glScalef(.5815f, .58150f, .2150f);

 glBegin(GL_QUADS);
        glVertex2f(0.01f, 0.00f);
        glVertex2f(0.06f, -0.9f);
        glVertex2f(-0.06f, -0.9f);
        glVertex2f(-0.01f, 0.0);
	glEnd();


    glColor3ub(150,120,230);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.30f, 0.320f, 0.0f);
    glScalef(.5515f, .55150f, .2150f);

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
    glTranslatef(0.30f, 0.320f, 0.0f);
    glScalef(.5515f, .55150f, .2150f);

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

void update(int value) {

    _angle1+=.250f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(10, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
     clock();
     windmill();
     building4();
    tree();
    road();
    lamp();
    lampLightRed();
    lampLightYellow();
    lampLightGreen();
    river();
    building();

    sun();
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
glutTimerFunc(20, update, 0); //Add a timer
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
