#include <windows.h>  // for MS Windows
#include<cstdio>
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Initialize OpenGL Graphics */

GLfloat	tx	=  0.0;
GLfloat	ty	=  0.0;
GLfloat position = 0.0f;
GLfloat speed = 0.1f;
float t=0;

void initGL() {
	// Set "clearing" or background color
	glClearColor(.0f, 1.0f, 1.0f, .0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */


void sky2(){
//sky
    glColor3ub(77, 184, 255);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,35);
	glVertex2f(-50,35);
	glEnd();

}

void sky1(){
glColor3ub(0, 51, 102);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,35);
	glVertex2f(-50,35);
	glEnd();
}
float _angle1 = 0.0f;
void windmill()
{

    glColor3ub(191, 191, 191);
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


    glColor3ub(255, 153, 0);
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


    glColor3ub(191, 191, 191);
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


    glColor3ub(191, 191, 191);
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

float _angle11 = 0.0f;
void windmill2()
{

    glColor3ub(191, 191, 191);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.30f, 0.320f, 0.0f);
    glScalef(.555f, .5550f, .2150f);

    glPushMatrix();


    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.0f, 0.01);
	glEnd();


    glColor3ub(255, 153, 0);
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


    glColor3ub(191, 191, 191);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.30f, 0.320f, 0.0f);
    glScalef(.5515f, .55150f, .2150f);

    glPushMatrix();



    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-0.5f, 0.2f);
        glVertex2f(0.0f, 0.01);
	glEnd();


    glColor3ub(191, 191, 191);
	glLoadIdentity(); //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);
    glTranslatef(0.30f, 0.320f, 0.0f);
    glScalef(.5515f, .55150f, .2150f);

    glPushMatrix();

    glBegin(GL_QUADS);
        glVertex2f(0.0f, 0.0f);
        glVertex2f(0.0f, -0.5f);
        glVertex2f(-0.2f, -0.5f);
        glVertex2f(0.01f, 0.0);
	glEnd();
    glPopMatrix();


	glutSwapBuffers();
}

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
GLfloat l = 0.0f;
GLfloat m = 0.0f;
GLfloat n = 0.0f;
void clock()
{


glBegin(GL_QUADS);
	glColor3ub(77, 0, 0);
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



float _angle2=0.0f;
float move1=0.5f;
float move2=0.1f;
float move3=0.0f;
void car()
{

//car---2------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move3, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(255, 0, 102);

glVertex2f(0.0f,-0.17f);
glVertex2f(-0.07f,-0.19f);
glVertex2f(-0.07f,-0.3f);
glVertex2f(0.68f,-0.3f);
glVertex2f(0.68f,-0.23f);
glVertex2f(0.65f,-0.2f);
glVertex2f(0.55f,-0.17f);
glVertex2f(0.4f,-0.05f);
glVertex2f(0.08f,-0.05f);


glPopMatrix();
glEnd();


//glass---1------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move3, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 255);
glVertex2f(0.03f,-0.17f);
glVertex2f(0.23f,-0.17f);
glVertex2f(0.23f,-0.08f);
glVertex2f(0.09f,-0.08f);
glPopMatrix();
glEnd();

//glass---2------------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move3, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 230, 255);
glVertex2f(0.25f,-0.17f);
glVertex2f(0.47f,-0.17f);
glVertex2f(0.4f,-0.08f);
glVertex2f(0.25f,-0.08f);
glPopMatrix();
glEnd();

//tire-1-----------

glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move1,-0.3f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.08;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//tire-2-----------
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move2,-0.3f, 0.0f);
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(0, 0, 0);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.08;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//tire-1-ring----------
glLineWidth(5.0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move1,-0.3f, 0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(235, 235, 224);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
glEnd();

//tire-2-ring----------
glLineWidth(5.0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(move2,-0.3f, 0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
for(int i=0;i<200;i++)
{
glColor3ub(235, 235, 224);
float pi=3.1416;
float A=(i*2*pi)/200;
float r=0.07;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
glPopMatrix();
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

    glColor3ub(153, 204, 255);

    glBegin(GL_QUADS);
    glVertex2f(-5.0f, -1.6f);    // x, y
	glVertex2f(5.0f, -1.6f);
	glVertex2f(5.0f, -10.5f);    // x, y
	glVertex2f(-5.f, -10.5f);

    glPopMatrix();
    glEnd();
}
void river2()
{

   glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(0.0f, 0.0f, 0.0f);
    glScalef(.215f, .2150f, .2150f);
    glShadeModel (GL_SMOOTH);

    glColor3ub(93, 107, 135);

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

void moon()
{
    glLoadIdentity(); //Reset the drawing perspective
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.6f,0.8f,0.0f);
    glColor3ub(255,255,255);
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
         glColor3ub(255,255,255);
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


_angle1+=1.0f;
if(_angle1 > 360.0)
{
_angle1-=360;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(90, update, 0); //Notify GLUT to call update again in 25 milliseconds
}


void update1(int value) {


move1+=0.02f;
if(move1 > 1.3)
{
move1 = -1.7f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(30, update1, 0); //Notify GLUT to call update again in 25 milliseconds
}


void update2(int value) {


move2+=0.02f;
if(move2 > 1.3)
{
move2 = -1.7f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(30, update2, 0); //Notify GLUT to call update again in 25 milliseconds
}


void update3(int value) {


move3+=0.02f;
if(move3 > 1.3)
{
move3 = -1.7f;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(30, update3, 0); //Notify GLUT to call update again in 25 milliseconds
}
void day() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
sky2();

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

     car();
    sun();
    road2ndlane();

	glFlush();  // Render now
}

void night()
{



sky1();
windmill2();
 building4();


    tree();

    road();
    lamp();
    lampLightRed();
    lampLightYellow();
    lampLightGreen();
    river2();

    building();


     car();
    moon();
    road2ndlane();


    glFlush();  // Render now
}


void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_UP:
				//ty +=5;
				PlaySound("sweet_tone.wav", NULL, SND_ASYNC|SND_FILENAME);
				t=1;

glutPostRedisplay();
				break;




        case GLUT_KEY_DOWN:
				//ty +=5;
				PlaySound(NULL, NULL, 0);
				t=0;
                glutPostRedisplay();
				break;


        default:
			break;
	}
}

void sound()
{
    PlaySound("one.wav",NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void sound2()
{
    PlaySound("two.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
}

void night(int val)
{


            glLoadIdentity();
         glutDisplayFunc(night);

         sound2();
         glutPostRedisplay();
}



void day(int val)
{


            glutDisplayFunc(day);

sound();
         glutPostRedisplay();


}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'n':
	        glutDisplayFunc(night);
	        glutKeyboardFunc(handleKeypress);
	       sound2();
	       	 glutPostRedisplay();
            break;
        case 'd':
            glutDisplayFunc(day);
	        glutKeyboardFunc(handleKeypress);
	        sound();
	        glutPostRedisplay();
            break;



    }
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(1320, 1320);         // Initialize GLUT
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
	gluOrtho2D(-1.5,1.5,-1.5,1.5);    // Set the window's initial width & height
	glutDisplayFunc(day);// Register callback handler for window re-paint event
    glutDisplayFunc(night);
    initGL();
   glutKeyboardFunc(handleKeypress);
    glutTimerFunc(20, update, 0); //Add a timer
    glutTimerFunc(20, update1, 0); //Add a timer
    glutTimerFunc(20, update2, 0); //Add a timer
    glutTimerFunc(20, update3, 0); //Add a timer
    glutTimerFunc(5000,day,0); //Add a timer
    glutTimerFunc(100,night,0); //Add a timer

    	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

