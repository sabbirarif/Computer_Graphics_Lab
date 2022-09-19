#ifdef APPLE
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT); /*Bitwise OR of masks that indicate the buffers to be cleared.*/

    glColor3f (0.80, 0.30, 0.0);
    glScaled(1,2,0);
    glutSolidSphere(15,40,10); /*draws a sphere of the given radius centered around the origin*/


    glBegin(GL_POLYGON);
    glColor3f (0.0, 0.0, 0.9);
    glVertex2i(-6,-3);
    glVertex2i(6,-3);
    glVertex2i(6,3);
    glVertex2i(-6,3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f (0.0, 1.0, 0.0);
    glVertex2i(0,0);
    glVertex2i(6,3);
    glVertex2i(-6,3);
    glEnd();
    glFlush(); /*The glFlush function empties all these buffers, causing all issued commands to be executed as quickly as they are accepted by the actual rendering engine. */
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv); /*  glutInit is used to initialize the GLUT library*/
    glutInitWindowSize(1000,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Gmail_Logo");

    glClearColor(1,1,1,0);
    glOrtho(-40.0,40.0,-40.0,40.0,-1.0,1.0);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
