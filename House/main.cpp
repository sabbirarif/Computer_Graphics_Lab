#include <GL/gl.h>
#include <GL/glut.h>

void display(void);

void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    ///Need these Library Functions for OpenGL
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Hello Rectangle");

    init ();


    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}


void display(void)
{
    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);

    glColor3f (0.50, 0.0, 0.0);

    glVertex3f (0.20, 0.40, 0.0);
    glVertex3f (0.20, 0.10, 0.0);
    glVertex3f (0.50, 0.10, 0.0);
    glVertex3f (0.50, 0.40, 0.0);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f (01.0, 01.0, 01.0);

    glVertex3f (0.20, 0.40, 0.0);
    glVertex3f (0.50, 0.40, 0.0);
    glVertex3f (0.35, 0.70, 0.0);

    glEnd();

     glBegin(GL_POLYGON);

    glColor3f (0.0, 01.0, 0.0);

    glVertex3f (0.30, 0.10, 0.0);
    glVertex3f (0.40, 0.10, 0.0);
    glVertex3f (0.40, 0.25, 0.0);
    glVertex3f (0.30, 0.25, 0.0);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f (0.0, 0.0, 01.0);

    glVertex3f (0.23, 0.37, 0.0);
    glVertex3f (0.23, 0.32, 0.0);
    glVertex3f (0.30, 0.32, 0.0);
    glVertex3f (0.30, 0.37, 0.0);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f (0.0, 0.0, 01.0);

    glVertex3f (0.40, 0.37, 0.0);
    glVertex3f (0.40, 0.32, 0.0);
    glVertex3f (0.47, 0.32, 0.0);
    glVertex3f (0.47, 0.37, 0.0);

    glEnd();

    glBegin(GL_POLYGON);

    glColor3f (01.0, 01.0, 01.0);

    glVertex3f (0.15, 0.10, 0.0);
    glVertex3f (0.15, 0.0, 0.0);
    glVertex3f (0.55, 0.0, 0.0);
    glVertex3f (0.55, 0.10, 0.0);

    glEnd();

  ///start processing buffered OpenGL routines
    glutSwapBuffers ();

}
