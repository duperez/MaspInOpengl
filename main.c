//camera commands:
//use w/a/s/d to rotate camera
//use mouse scroll or q/e on keyboard to zoon in or zoon out
//by
//Eduardo Bianconi Perez: RA 196244 & Mateus Duarte castello: RA 203257

#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include "chao.h"
#include "masp.h"
#include "objetos.h"

static int ANGX = 0;
static int ANGY = 0;
static int ANGXY = 0;
static double zoom = 0.5;

static int posiX = 3;
void init(void){
  glEnable(GL_DEPTH_TEST);
  glClearColor (0.0, 0.0, 0.0, 0.0);
}


void display(void){
   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  glPushMatrix();
gluLookAt(0, 0.25, 1, 0, 0, 0, 0, 1, 0);

  glRotatef ((GLfloat) ANGX, 0, 1, 0);

  glRotatef ((GLfloat) ANGY, 1, 0, 0);

  glScalef(zoom, zoom, zoom);
  
  criaChao();

  criaMasp(); 
  
  criaRua();

  criaObjetos();


  glPopMatrix();
  glutSwapBuffers();
}


void reshape (int w, int h){
  glViewport (0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode (GL_PROJECTION);
  glLoadIdentity ();
  gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 200.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef (0.0, -5.0, -50.0);
}
void keyboard(unsigned char key, int x, int y){
  switch (key) {
 case 'a':
    ANGX = (ANGX + 5) % 360;
    glutPostRedisplay();
    break;
  case 'd':
    ANGX = (ANGX - 5) % 360;
    glutPostRedisplay();
    break;
  case 'w':
    ANGY = (ANGY + 5) % 360;
    glutPostRedisplay();
    break;
  case 's':
    ANGY = (ANGY - 5) % 360;
    glutPostRedisplay();
    break;
  case 'q':
    zoom += 0.1;
    glutPostRedisplay();
    break;
  case 'e':
    zoom -= 0.1;
    glutPostRedisplay();
    break;
   case 27:                                         // tecla Esc (encerra o programa)
	exit(0);
	break;
  }
}

void mouseClick(int btn, int state, int x, int y) {
  if (state == GLUT_DOWN) {
    switch(btn) {
    case 3:  //mouse wheel scrolls
      zoom += 0.1;
      break;
    case 4:
      zoom -= 0.1;
      break;
    default:
      break;
    }
  }
  glutPostRedisplay();
}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize (500, 500); 
  glutInitWindowPosition (100, 100);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display); 
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMouseFunc(mouseClick);
  glutMainLoop();
  return 0;
}
