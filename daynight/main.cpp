#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>

GLfloat	tx	=  0.0;
GLfloat	ty	=  0.0;

//static float	yx	=  0.0;
//static float	yy	= 0.0;


static float t=0;

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-50,50,-50,25,-25,5);
  //gluOrtho2D(0.0,300.0,0.0,300.0);
}

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}


//Car1


void sky(){
//sky
    glColor3f(0.4,0.7,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,35);
	glVertex2f(-50,35);
	glEnd();

}

void ground(){
//Ground

    glPushMatrix();
	glTranslatef(0.0f, 30.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	glColor3f(0.0,0.6,0.0);
    glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-40);
	glVertex2f(-50,-40);
	glEnd();

	glPopMatrix();

}

void river(){
//river
	glPushMatrix();
	glTranslatef(0.0f, 10.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.5,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 8.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.5,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 6.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.4,0.7);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 4.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.3,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.0f, 2.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

	 glColor3f(0.0,0.2,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,-30);
	glVertex2f(-50,-30);
	glEnd();

	glPopMatrix();

}


void Road1(){

//Road1

   glColor3ub(22, 21, 21);
   glBegin(GL_POLYGON);
   glVertex2f(-50 ,-20);
   glVertex2f(50 ,-20);
   glVertex2f(50 ,-15);
   glVertex2f(-50 ,-15);
   glEnd();

    glColor3ub(252, 249, 249);
    glBegin(GL_LINES);
    glVertex2d(-50.0,-17.5);
    glVertex2d(50.0,-17.5);
    glEnd();
}

void Road2(){

//Road2

   glColor3ub(22, 21, 21);
     glBegin(GL_QUADS);
      glVertex2d(-50,-50);
      glVertex2d(50,-50);
      glVertex2d(50,-35);
      glVertex2d(-50,-35);
    glEnd();

    glColor3ub(252, 249, 249);
    glBegin(GL_LINES);
    glVertex2d(-50.0,-42.5);
    glVertex2d(50.0,-42.5);
    glEnd();
}

void Sun(){
//Sun
    glPushMatrix();
	glTranslatef(35.0f, 5.0f, 0.0f);
	glRotatef(0, 0.0f, 0.0f, -1.0f);

   glColor3f(1.0f, 1.0f, 0.0f);
   circle(3,3,4.5,11.5);
glPopMatrix();

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

void Day()
{  glClear(GL_COLOR_BUFFER_BIT);
    //sky
	sky();

	//Ground
	ground();

	//river
    river();

	//Back Wall




    //Sun
    Sun();





    //Road2
    Road2();

    building4();
    building();



glutSwapBuffers();


}

void Night(){
glClear(GL_COLOR_BUFFER_BIT);
    //sky
    glColor3f(0.0,0.0,.0);
	glBegin(GL_POLYGON);
	glVertex2f(-50,-50);
	glVertex2f(50,-50);
	glVertex2f(50,35);
	glVertex2f(-50,35);
	glEnd();


	//Ground
	ground();

    //river
    river();

    Road1();

   //Moon

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(3,3,25.5,16.5);

   glColor3f(0.0f, 0.0f, 0.0f);
   circle(3,3,24.5,17.5);

   //Stars
   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,10.5,16.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-5.5,10.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-8.5,12.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-20,18.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-15,7.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-25,11.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-32,14.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-40,10.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-46,16.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,32,19.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,37,14.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,46,17.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,0,18);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,-8,20.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,8,13.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,15,11.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,19,18.5);

   glColor3f(1.0f, 1.0f, 1.0f);
   circle(0.2,0.3,14,20.5);



    //House4

glutSwapBuffers();


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




void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'd':
	        glutDisplayFunc(Day);
	        glutKeyboardFunc(handleKeypress);
	        PlaySound("morning_alarm.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
        case 'D':
            glutDisplayFunc(Day);
	        glutKeyboardFunc(handleKeypress);
	        PlaySound("morning_alarm.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
         case 'n':
            glutDisplayFunc(Night);
	        glutKeyboardFunc(handleKeypress);
	        PlaySound("night.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;
        case  'N':
	        glutDisplayFunc(Night);
	        glutKeyboardFunc(handleKeypress);
	        PlaySound("night.wav", NULL, SND_ASYNC|SND_FILENAME);
	        glutPostRedisplay();
            break;



    }
}





int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(30,0);
    glutInitWindowSize(1000,650);
    glutCreateWindow("Cool City");
    init();
    glutSpecialFunc(spe_key);
    glutDisplayFunc(Day);
    glutKeyboardFunc(handleKeypress);
    glutMainLoop();
    return 0;
}






