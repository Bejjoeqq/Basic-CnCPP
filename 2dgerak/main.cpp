#include <stdlib.h>
#include <iostream>>
#include <GL/glut.h>
using namespace std;
int x=0;
int z=0;

void Bintang(){
       glBegin(GL_POLYGON);
       glVertex2f(-10.,-13.);
       glVertex2f(0.,80.);
       glVertex2f(30.,30.);
       glVertex2f(90.,40.);
       glVertex2f(50.,0.);
       glVertex2f(80.,-50.);
       glVertex2f(25.,-25.);
       glVertex2f(-15.,-75.);
       glVertex2f(0.,25.);
       glVertex2f(-70.,0.);
       glEnd();
}

void renderScene(void){

 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1,1,1);
 glRotatef(x,0,0,1);
 Bintang();
 glFlush();
}

void timer (int value){
if (z <= 360){
x = 1;
z +=1;
}

glutPostRedisplay();
glutTimerFunc(5,timer,0);
}

int main(int argc,char **argv){
    cout<<"************************"<<endl;
    cout<<"* Nama : Aldhiya Rozak *"<<endl;
    cout<<"* Kelas : XII-RPL      *"<<endl;
    cout<<"* No Urut : 02         *"<<endl;
    cout<<"************************"<<endl;
 glutInit(&argc,argv);
 glutInitWindowPosition(100,100);
 glutInitWindowSize(480,480);
 glutCreateWindow("Stars");
 gluOrtho2D(-320.,320.,-320.,320.);
 glutDisplayFunc(renderScene);
 glutTimerFunc(1,timer,0);
 glutMainLoop();
}
