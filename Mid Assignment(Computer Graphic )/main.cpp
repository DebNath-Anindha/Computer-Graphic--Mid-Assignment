#include <windows.h>
#include <GL/glut.h>
#include<math.h>
#include<iostream>
#include<stdlib.h>
#define PI                3.1416
using namespace std;

void display() {

	glClearColor(0.5f,1.0f,0.5f,0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(3.0);
    glPushMatrix();
    glScalef(2.0,2.0,0.0);
    glTranslatef(-60.0f,-20.0f,1.0f);
	glBegin(GL_POLYGON);

	glColor3f(0.196f, 0.804f, 0.196f);
	glVertex2f(25.0f,30.0f);
	glVertex2f(40.0f,20.0f);
	glVertex2f(70.0f,40.0f);
	glVertex2f(55.0f, 50.0f);
	glEnd();

    glPopMatrix();


glPushMatrix();


    glScalef(1.8,1.8,0.0);
    glTranslatef(-61.5f,-18.5f,1.0f);
    glBegin(GL_LINES);
    glColor3f(1.0,1.0,1.0);
    //lower side
    glVertex2f(25.0f,30.0f);
	glVertex2f(40.0f,20.0f);
	//upper side
	glVertex2f(70.0f,40.0f);
	glVertex2f(55.0f, 50.0f);
        //right side long
	glVertex2f(40.0f,20.0f);
	glVertex2f(70.0f,40.0f);
	//left side long
	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();

        glPushMatrix();
        glScalef(40.0,60.0,0.0);
        glTranslatef(0.0f,-0.5f,1.0f);
        glBegin(GL_POLYGON);
        glColor3f(0.827,0.827,0.827);
		for(int i = 0; i <= 100;i++) {
                float x=.35f;
              float y=.70f;
              GLfloat radius =.45f;
              GLfloat twicePi = 2.0f * PI;
			glVertex2f(

			     y + (radius * cos(i *  twicePi / 100)),
			     x + (radius* sin(i * twicePi / 100))
			);
		}
	glEnd();
    glPopMatrix();
    glPushMatrix();
        glScalef(15.0,10.0,0.0);
        glTranslatef(1.15f,0.9f,1.0f);
        glBegin(GL_POLYGON);
        glColor3f(0.663,0.663,0.663);
		for(int i = 0; i <= 100;i++) {
                float x=.35f;
              float y=.70f;
              GLfloat radius =.45f;
              GLfloat twicePi = 2.0f * PI;
			glVertex2f(

			     y + (radius * cos(i *  twicePi / 100)),
			     x + (radius* sin(i * twicePi / 100))
			);
		}
	glEnd();
    glPopMatrix();
    glPushMatrix();
        glScalef(39.0,-20.0,0.0);
        glTranslatef(0.72f,0.8f,1.0f);
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(0.0f,0.0f);
		for(int i = 0; i <= 21;i++) {
                float x=.35f;
              float y=-.70f;
              GLfloat radius =.45f;
              GLfloat twicePi = PI;
			glVertex2f(radius* cosf(i * twicePi / 20),
              radius* sinf(i * twicePi / 20));


		}
	glEnd();
    glPopMatrix();
 glPushMatrix();
        glScalef(39.0,-20.0,0.0);
        glTranslatef(0.72f,0.6f,1.0f);
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.827,0.827,0.827);
        glVertex2f(0.0f,0.0f);
		for(int i = 0; i <= 21;i++) {
                float x=.35f;
              float y=-.70f;
              GLfloat radius =.45f;
              GLfloat twicePi = PI;
			glVertex2f(radius* cosf(i * twicePi / 20),
              radius* sinf(i * twicePi / 20));


		}
	glEnd();
    glPopMatrix();

glPushMatrix();
glLineWidth(7.5);
    glScalef(1.9,1.9,0.0);
    glTranslatef(-61.5f,-18.5f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,1.0);

	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();
glPushMatrix();
glLineWidth(7.5);
    glScalef(1.9,1.9,0.0);
    glTranslatef(-62.0f,-17.5f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0,0.749,1.0);

	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
glLineWidth(7.5);
    glScalef(1.9,1.9,0.0);
    glTranslatef(-62.5f,-16.5f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,1.0);

	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();
glPushMatrix();
glLineWidth(7.5);
    glScalef(1.9,1.9,0.0);
    glTranslatef(-63.0f,-15.5f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0,0.749,1.0);

	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();
     glPushMatrix();
glLineWidth(7.5);
    glScalef(1.9,1.9,0.0);
    glTranslatef(-63.5f,-14.5f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,1.0);

	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();
glPushMatrix();
glLineWidth(7.5);
    glScalef(1.9,1.9,0.0);
    glTranslatef(-64.0f,-13.5f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.0,0.749,1.0);

	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();
    glPushMatrix();
glLineWidth(9.5);
    glScalef(1.9,1.9,0.0);
    glTranslatef(-64.0f,-13.5f,1.0f);
    glBegin(GL_LINES);


	glVertex2f(25.0f,30.0f);
	glVertex2f(55.0f, 50.0f);

    glEnd();
    glPopMatrix();
     glPushMatrix();
        glScalef(15.0,15.0,0.0);
        glTranslatef(1.2f,-3.5f,1.0f);
        glBegin(GL_POLYGON);


        glColor3f(0.196f, 0.804f, 0.196f);
		for(int i = 0; i <= 100;i++) {
                float x=.35f;
              float y=.70f;
              GLfloat radius =.45f;
              GLfloat twicePi = 2.0f * PI;
			glVertex2f(

			     y + (radius * cos(i *  twicePi / 100)),
			     x + (radius* sin(i * twicePi / 100))
			);
		}
	glEnd();
    glPopMatrix();
    glPushMatrix();
glLineWidth(200.0);
    glScalef(.5,.5,0.0);
    glTranslatef(52.0f,-100.0f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.827,0.827,0.827);

	glVertex2f(0.0f,0.0f);
	glVertex2f(0.0f, 50.0f);

    glEnd();
    glPopMatrix();
 glPushMatrix();
glLineWidth(200.0);
    glScalef(.5,.5,0.0);
    glTranslatef(62.0f,-100.0f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.827,0.827,0.827);

	glVertex2f(0.0f,0.0f);
	glVertex2f(0.0f, 50.0f);

    glEnd();
    glPopMatrix();
glPushMatrix();
glLineWidth(200.0);
    glScalef(.5,.5,0.0);
    glTranslatef(60.0f,-100.0f,1.0f);
    glBegin(GL_LINES);
    glColor3f(0.827,0.827,0.827);

	glVertex2f(0.0f,0.0f);
	glVertex2f(0.0f, 50.0f);

    glEnd();
    glPopMatrix();


    glPushMatrix();
        glScalef(10.0,10.0,0.0);
        glTranslatef(-3.0f,3.0f,1.0f);
        glLineWidth(2);
        glBegin(GL_LINE_LOOP);
        glColor3f(1.0,1.0,1.0);
		for(int i = 0; i <= 100;i++) {
                float x=.35f;
              float y=.70f;
              GLfloat radius =.45f;
              GLfloat twicePi = 2.0f * PI;
			glVertex2f(

			     y + (radius * cos(i *  twicePi / 100)),
			     x + (radius* sin(i * twicePi / 100))
			);
		}
	glEnd();
    glPopMatrix();



glPushMatrix();
glLineWidth(2);

   glScalef(2.0,2.0,0.0);
    glTranslatef(-60.0f,-20.0f,1.0f);
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.1f, 0.1f, 0.1f);

   glVertex2f(25.0f,30.0f);
	glVertex2f(40.0f,20.0f);
	glVertex2f(22.0f,27.0f);
	glVertex2f(37.0f,17.0f);


;

glEnd();

    glPopMatrix();

    glPushMatrix();

   glScalef(1.9,1.9,0.0);
    glTranslatef(-48.0f,-26.5f,1.0f);
    glBegin(GL_QUAD_STRIP);
    glColor3f(0.1f, 0.1f, 0.1f);

    glVertex2f(70.0f,40.0f);
	glVertex2f(55.0f, 50.0f);
    glVertex2f(73.0f,43.0f);
	glVertex2f(58.0f, 53.0f);


	glEnd();

    glPopMatrix();




	glEnd();

    glPopMatrix();





 glFlush();

}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Assignment");
	glutInitWindowSize(620,620);
	glMatrixMode('Assignment');
	glOrtho(-100.0,100.0,-100.0,100.0,-1.0,1.0);
	glutInitWindowPosition (100, 100);
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
