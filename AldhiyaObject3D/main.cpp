#include <GL/glut.h>
#include <windows.h>
#include <iostream>

using namespace std;

int w=800, h=600, z=0;
int x1=0, y1=0, z1=0, sudut=0;

void renderScene (void) {
static float alpha =0;
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glClearColor (0, 0, 0, 0);
glLoadIdentity ();
glTranslatef (0, 0, z);
glRotatef (sudut, x1, y1, z1);
glRotatef (alpha,1,1,1);
glColor3f(1, 1, 0);
alpha = alpha +0.5;
//glutWireCube (15);//fungsi kubus
glutSolidCube(3);//kubus penuh warna
//glutWireSphere(2,90,90);//fungsi bola
//glutWireCone(2, 4, 25, 25);//fungsi kerucut
glColor3f(1,0,0);
//glutWireTorus (4, 2, 90, 30);//fungsi donat
//glutWireTeapot (4);//fungsi ceret
//glutSolidIcosahedron ();//fungsi delima
//glutWireDodecahedron ();//fungsi bola
//glutWireTetrahedron();//fungsi piramida
glutSwapBuffers ();
}
void resize (int w1, int h1) {
glViewport (0, 0, w1, h1);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective (45.0,(float) w1/(float) h1,1.0, 100.0);
glMatrixMode (GL_MODELVIEW);
glLoadIdentity ();
}
void Keyboard (GLubyte key, GLint x, GLint y) {
if (key == 'a' || key == 'A') z+=2;
if (key == 'd' || key == 'D') z-=2;
if (key == 'x' || key == 'X') {
x1=1;
y1=0;
z1=0;
sudut +=10;
}
if (key == 'y' || key == 'Y') {
x1=0;
y1=1;
z1=0;
sudut +=-10;
}
if (key == 'z'|| key == 'Z') {
x1=0;
y1=0;
z1=1;
sudut +=-10;
}
if ( key == 'f'|| key == 'F') {
glutFullScreen ();

}
{
int foo;
foo = x + y;
if ('q' == key || 'Q' == key || 27 == key)
exit (0);
}
}
void timer (int value) {
glutPostRedisplay ();
glutTimerFunc (1,timer,0);
}
int main (int argc, char **argv) {

    cout << "*       SMK TELKOM MEDAN        *" << endl;
    cout << "*-------------------------------*" << endl;
    cout << "* Nama         : Aldhiya Rozak  *" << endl;
    cout << "* Kelas        : XI-RPL         *" << endl;
    cout << "* No.Urut      : 02             *" << endl;
    cout << "*********************************" << endl;
glutInit (&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH | GLUT_RGBA);
glutInitWindowPosition (100,100);
glutInitWindowSize (w,h);
glutCreateWindow ("3D");
gluOrtho2D (-w/2,w/2,-h/2,h/2);
glutDisplayFunc (renderScene);
glutReshapeFunc (resize);
glutKeyboardFunc (Keyboard);
glutTimerFunc (1,timer,0);
glutMainLoop ();


}

