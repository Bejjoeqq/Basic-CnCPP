#include <iostream>
#include <GL/glut.h>
using namespace std;

void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_LINES);
    glVertex3f(0.2,0.2,0.0);
    glVertex3f(0.8,0.2,0.0);
    glVertex3f(0.2,0.5,0.0);
    glVertex3f(0.8,0.5,0.0);
    glVertex3f(0.2,0.8,0.0);
    glVertex3f(0.8,0.8,0.0);
    glEnd();
    glFlush();
}
void initialize()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}
int main(int iArgc,char** cppArgv)
{
    glutInit(&iArgc,cppArgv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(250,250);
    glutInitWindowPosition(200,200);
    glutCreateWindow("Belajar Gelut");
    initialize();
    glutDisplayFunc(draw);
    glutMainLoop();
    cout<<"Hello"<<endl;
    return 0;
}
