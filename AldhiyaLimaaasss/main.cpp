#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

void initRendering() {
      glEnable(GL_DEPTH_TEST);
      glEnable(GL_COLOR_MATERIAL);
      glEnable(GL_LIGHTING);
      glEnable(GL_LIGHT0);
      glEnable(GL_LIGHT1);
      glEnable(GL_NORMALIZE);
      glShadeModel(GL_SMOOTH);
}

void handleResize(int w, int h) {
      glViewport(0, 0, w, h);
      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
      gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 60.0f;
void drawScene() {
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
      glMatrixMode(GL_MODELVIEW);
      glLoadIdentity();
      glTranslatef(0.0f, 0.0f, -8.0f);

      GLfloat ambientColor[] = {0.2f, 0.2f, 0.2f, 1.0f};
      glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);

      GLfloat lightColor0[] = {0.5f, 0.5f, 0.5f, 1.0f};
      GLfloat lightPos0[] = {4.0f, 0.0f, 8.0f, 1.0f};
      glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
      glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);
//radius
      GLfloat lightColor1[] = {0.5f, 0.2f, 0.2f, 1.0f};

      GLfloat lightPos1[] = {-1.0f, 0.5f, 0.5f, 0.0f};
      glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
      glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);

      glRotatef(_angle, 1.0f, 0.0f, 0.0f);

      glBegin(GL_QUADS);

      //Bangun 1
      //glNormal3f(0.0f, 0.0f, 1.0f);
      glColor3f(1.0f, 0.0f, 0.0f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, -1.0f, 1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, -1.0f, 1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.0f, 1.0f, 1.5f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, -1.0f, 1.5f);

      //Bangun 2
      //glNormal3f(0.0f, 0.0f, 1.0f);
      glColor3f(1.0f, 1.0f, 0.0f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, -1.0f, 1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.0f, 1.0f, 1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, 1.0f, -1.5f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, -1.0f, 1.5f);

      //Bangun 3
      //glNormal3f(0.0f, 0.0f, 1.0f);
      glColor3f(0.0f, 0.0f, 1.0f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, 1.0f, -1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, 1.0f, -1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.0f, 1.0f, 1.5f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, 1.0f, -1.5f);

      //Bangun 4
      //glNormal3f(0.0f, 0.0f, 1.0f);
      glColor3f(1.0f, 1.0f, 1.0f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, 1.0f, -1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, -1.0f, 1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(0.0f, 1.0f, 1.5f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, 1.0f, -1.5f);

      //Bangun 5
      //glNormal3f(0.0f, 0.0f, 1.0f);
      glColor3f(1.0f, 0.0f, 1.0f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, -1.0f, 1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, -1.0f, 1.5f);
      //glNormal3f(1.0f, 0.0f, 1.0f);
      glVertex3f(1.5f, 1.0f, -1.5f);
      //glNormal3f(-1.0f, 0.0f, 1.0f);
      glVertex3f(-1.5f, 1.0f, -1.5f);
      glEnd();

      glutSwapBuffers();
}

void update(int value) {
      _angle += 1.5f;
      if (_angle > 360) {
            _angle -= 360;
      }

      glutPostRedisplay();
      glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv) {
    cout<<"************************"<<endl;
    cout<<"* Nama : Aldhiya Rozak *"<<endl;
    cout<<"* Kelas : XII-RPL      *"<<endl;
    cout<<"* No Urut : 02         *"<<endl;
    cout<<"************************"<<endl;
      glutInit(&argc, argv);
      glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
      glutInitWindowSize(400, 400);
      glutCreateWindow("Lighting - videotutorialsrock.com");
      initRendering();
      glutDisplayFunc(drawScene);
      glutReshapeFunc(handleResize);
      glutTimerFunc(25, update, 0);

      glutMainLoop();
      return 0;
}
