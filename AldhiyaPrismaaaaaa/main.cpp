#include <GL/glut.h>
#include <iostream>
using namespace std;
GLfloat light_diffuse[] = {0.6f, 0.9f, 0.6f, 0.6f};
GLfloat light_position[] = {1.0, 1.0, 1.0, 0.0};
void gambar3D(void)
{
glBegin(GL_QUADS);
// muka depan
glNormal3f( 0.0f, 0.0f, 1.0f); //Normal menuju Kita
glVertex3f(-1.0f, -1.0f, 1.0f); //Titik 1 (depan)
glVertex3f( 1.0f, -1.0f, 1.0f); //Titik 2 (depan)
glVertex3f( 1.0f, 1.0f, 1.0f); //Titik 3 (depan)
glVertex3f(-1.0f, 1.0f, 1.0f); //Titik 4 (depan)
// muka belakang
glNormal3f( 0.0f, 0.0f,-1.0f); //Normal menjauh Kita
glVertex3f(0.0f, 1.0f,-1.0f); //Titik 1 (belakang)
glVertex3f(0.0f, -1.0f,-1.0f); //Titik 2 (belakang)
// muka atas
glNormal3f( 0.0f, 1.0f, 0.0f); //Normal berarah atas
glVertex3f(-1.0f, 1.0f,1.0f); //Titik 1 (atas)
glVertex3f( 1.0f, 1.0f, 1.0f); //Titik 2 (atas)
glVertex3f( 0.0f, 1.0f,-1.0f); //Titik 3 (atas)
//muka bawah
glNormal3f( 0.0f, -1.0f, 0.0f); //Normal berarah bawah
glVertex3f(-1.0f, -1.0f,1.0f); //Titik 1 (bawah)
glVertex3f( 1.0f, -1.0f, 1.0f); //Titik 2 (bawah)
glVertex3f( 0.0f, -1.0f, -1.0f); //Titik 3 (bawah)
//muka kanan
glNormal3f( 1.0f, 0.0f, 0.0f); //Normal berarah kekanan
glVertex3f( 1.0f, 1.0f,1.0f); //Titik 1 (kanan)
glVertex3f( 0.0f, 1.0f,-1.0f); //Titik 2 (kanan)
glVertex3f( 0.0f, -1.0f, -1.0f); //Titik 3 (kanan)
glVertex3f( 1.0f, -1.0f, 1.0f); //Titik 4 (kanan)
//muka kiri
glNormal3f(-1.0f, 0.0f, 0.0f); //Normal berarah ke kiri
glVertex3f(-1.0f, -1.0f,1.0f); //Titik 1 (kiri)
glVertex3f(-1.0f, 1.0f, 1.0f); //Titik 2 (kiri)
glVertex3f(0.0f, 1.0f, -1.0f); //Titik 3 (kiri)
glVertex3f(0.0f, -1.0f,-1.0f); //Titik 4 (kiri)
glEnd();
}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
gambar3D();
glutSwapBuffers();
}
void inisialisasi(void)
{

//pencahayaan
glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
glLightfv(GL_LIGHT0, GL_POSITION, light_position);
glEnable(GL_LIGHT0);
glEnable(GL_LIGHTING);

//Buffer
glEnable(GL_DEPTH_TEST);

//setup kubus
glMatrixMode(GL_PROJECTION);
gluPerspective(40.0,1.0,1.0,10.0);
glMatrixMode(GL_MODELVIEW);
gluLookAt(0.0, 0.0, 5.0, // melihat pada (0,0,5)
0.0, 0.0, 0.0, // center pada (0,0,0)
0.0, 1.0, 0.0); // arah Y

/* Mengatur posisi sudut */
//glTranslatef(0.0, 0.0, -1.0);
glRotatef(60, 0.0, 1.0, 1.0);
glRotatef(15, 1.0, 1.0, 0.0);
}
int main(int argc, char **argv)
{
    cout<<"************************"<<endl;
    cout<<"* Nama : Aldhiya Rozak *"<<endl;
    cout<<"* Kelas : XII-RPL      *"<<endl;
    cout<<"* No Urut : 02         *"<<endl;
    cout<<"************************"<<endl;
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutCreateWindow("Prisma 3 Dimensi");
glutDisplayFunc(display);
glClearColor(1.0,1.0,1.0,1.0);
inisialisasi();
glutMainLoop();
return 0;
}
