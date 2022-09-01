#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/




// Hexagon
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3f(-0.8,-0.4,0.0);
glVertex3f(-0.7,-0.6,0.0);
glVertex3f(-0.4,-0.6,0.0);
glVertex3f(-0.3,-0.4,0.0);
glVertex3f(-0.4,-0.2,0.0);
glVertex3f(-0.7,-0.2,0.0);


glEnd();


// Star
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3f(0.3,-0.6,0.0);
glVertex3f(0.1,-0.9,0.0);
glVertex3f(0.5,-0.8,0.0);
glVertex3f(0.9,-0.9,0.0);
glVertex3f(0.7,-0.6,0.0);
glVertex3f(0.9,-0.4,0.0);
glVertex3f(0.6,-0.4,0.0);
glVertex3f(0.5,-0.1,0.0);
glVertex3f(0.4,-0.4,0.0);
glVertex3f(0.1,-0.4,0.0);
glEnd();

// Pentagon
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3f(-0.9,0.6,0.0);
glVertex3f(-0.8,0.3,0.0);
glVertex3f(-0.4,0.3,0.0);
glVertex3f(-0.3,0.6,0.0);
glVertex3f(-0.6,0.8,0.0);
glEnd();


//Octagon
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
glVertex3f(0.1,0.5,0.0);
glVertex3f(0.1,0.3,0.0);
glVertex3f(0.3,0.1,0.0);
glVertex3f(0.5,0.1,0.0);
glVertex3f(0.7,0.3,0.0);
glVertex3f(0.7,0.5,0.0);
glVertex3f(0.5,0.7,0.0);
glVertex3f(0.3,0.7,0.0);
glEnd();



/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}

/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutCreateWindow ("Test");
glutInitWindowSize(640,500);
glutDisplayFunc(display);



glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
