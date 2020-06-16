#include <GL/glut.h>
#include <iostream>
using namespace std;
void init(void)
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
}
void display(void)
{
   glClear (GL_COLOR_BUFFER_BIT);
   glColor3f (0.4, 0.3, 1.0);
   glLoadIdentity ();                     /* clear the matrix */
                                              /* viewing transformation  */
  gluLookAt (0.0, -8.0, 3.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0);
   glScalef (4.0, 4.0, 1.5);              /* modeling transformation */
   glutWireCone(0.5, 3.0, 100,1);
   glFlush ();
}
void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
   glMatrixMode (GL_MODELVIEW);
}
int main(int argc, char** argv)
{
    cout<<"************************"<<endl;
    cout<<"* Nama : Aldhiya Rozak *"<<endl;
    cout<<"* Kelas : XII-RPL      *"<<endl;
    cout<<"* No Urut : 02         *"<<endl;
    cout<<"************************"<<endl;
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutMainLoop();
   return 0;
}
