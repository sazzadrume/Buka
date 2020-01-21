#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f (1.0, 1.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d (150, 150);
glVertex2d (450, 150);
glVertex2d (450, 450);
glVertex2d (150, 450);
glEnd();

glColor3f (1.0, 0.25, 0.0);
glBegin(GL_TRIANGLES);
glVertex2d (150, 450);
glVertex2d (450, 450);
glVertex2d (300, 570);
glEnd();

glColor3f (1.0, 0.25, 0.25);
glBegin(GL_POLYGON);
glVertex2d (250, 150);
glVertex2d (250, 350);
glVertex2d (350, 350);
glVertex2d (350, 150);
glEnd();

glColor3f (0.0, 0.25, 1.0);
glBegin(GL_POLYGON);
glVertex2d (170, 280);
glVertex2d (230, 280);
glVertex2d (230, 320);
glVertex2d (170, 320);
glEnd();

glColor3f (0.0, 0.25, 1.0);
glBegin(GL_POLYGON);
glVertex2d (370, 280);
glVertex2d (430, 280);
glVertex2d (430, 320);
glVertex2d (370, 320);
glEnd();

glColor3f (0.50, 1.0, 0.50);
glBegin(GL_POLYGON);
glVertex2d (515, 150);
glVertex2d (535, 150);
glVertex2d (535, 300);
glVertex2d (515, 300);
glEnd();

glColor3f (1.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex2d (535, 300);
glVertex2d (600, 300);
glEnd();

glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (535, 300);
glVertex2d (555, 300);
glVertex2d (555, 315);
glVertex2d (535, 320);
glEnd();

glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (555, 300);
glVertex2d (575, 300);
glVertex2d (575, 310);
glVertex2d (555, 315);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (575, 300);
glVertex2d (600, 300);
glVertex2d (600, 300);
glVertex2d (575, 310);
glEnd();


glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (535, 280);
glVertex2d (555, 285);
glVertex2d (555, 300);
glVertex2d (535, 300);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (555, 285);
glVertex2d (575, 290);
glVertex2d (575, 300);
glVertex2d (555, 300);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (575, 290);
glVertex2d (600, 300);
glVertex2d (600, 300);
glVertex2d (575, 300);
glEnd();

//2nd
glColor3f (1.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex2d (515, 300);
glVertex2d (450, 300);
glEnd();

glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (515, 300);
glVertex2d (495, 300);
glVertex2d (495, 315);
glVertex2d (515, 320);
glEnd();

glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (495, 300);
glVertex2d (475, 300);
glVertex2d (475, 310);
glVertex2d (495, 315);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (475, 300);
glVertex2d (450, 300);
glVertex2d (450, 300);
glVertex2d (475, 310);
glEnd();


glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (515, 280);
glVertex2d (495, 285);
glVertex2d (495, 300);
glVertex2d (515, 300);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (495, 285);
glVertex2d (475, 290);
glVertex2d (475, 300);
glVertex2d (495, 300);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (475, 290);
glVertex2d (450, 300);
glVertex2d (450, 300);
glVertex2d (475, 300);
glEnd();


Crismas:
glColor3f (1.0, 0.0, 1.0);
glBegin(GL_POLYGON);
glVertex2d (70, 150);
glVertex2d (80, 150);
glVertex2d (80, 180);
glVertex2d (70, 180);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_TRIANGLES);
glVertex2d (30, 180);
glVertex2d (120, 180);
glVertex2d (75, 300);
glEnd();

glColor3f (1.0, 0.50, 0.50);
glBegin(GL_POLYGON);
glVertex2d (0, 30);
glVertex2d (600, 30);
glVertex2d (600, 130);
glVertex2d (0, 130);
glEnd();

glColor3f (1.0, 0.50, 0.50);
glBegin(GL_POLYGON);
glVertex2d (275, 130);
glVertex2d (325, 130);
glVertex2d (325, 150);
glVertex2d (275, 150);
glEnd();

glColor3f (1.0, 0.50, 0.50);
glBegin(GL_POLYGON);
glVertex2d (60, 130);
glVertex2d (90, 130);
glVertex2d (90, 150);
glVertex2d (60, 150);
glEnd();

glColor3f (1.0, 0.50, 0.50);
glBegin(GL_POLYGON);
glVertex2d (505, 130);
glVertex2d (545, 130);
glVertex2d (545, 150);
glVertex2d (505, 150);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (515, 300);
glVertex2d (535, 300);
glVertex2d (535, 320);
glVertex2d (515, 320);
glEnd();

//3rd
glColor3f (1.0, 0.25, 1.0);
glBegin(GL_LINES);
glVertex2d (525, 300);
glVertex2d (525, 390);
glEnd();

glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (525, 300);
glVertex2d (555, 300);
glVertex2d (555, 315);
glVertex2d (535, 320);
glEnd();

glColor3f (0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2d (555, 300);
glVertex2d (575, 300);
glVertex2d (575, 310);
glVertex2d (555, 315);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (575, 300);
glVertex2d (600, 300);
glVertex2d (600, 300);
glVertex2d (575, 310);
glEnd();


glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (535, 280);
glVertex2d (555, 285);
glVertex2d (555, 300);
glVertex2d (535, 300);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (555, 285);
glVertex2d (575, 290);
glVertex2d (575, 300);
glVertex2d (555, 300);
glEnd();

glColor3f (0.0, 1.00, 0.0);
glBegin(GL_POLYGON);
glVertex2d (575, 290);
glVertex2d (600, 300);
glVertex2d (600, 300);
glVertex2d (575, 300);
glEnd();



/* don't wait!
* start processing buffered OpenGL routines
*/
glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
gluOrtho2D(0, 600, 0, 600);
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
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

