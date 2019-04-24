#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include "chao.c"
#include "masp.c"

static int ANG = 0;
static int rotaX = 0;
static int rotaY = 1;
static int rotaZ = 0;
void init(void){
  glClearColor (0.0, 0.0, 0.0, 0.0);
}


void display(void){
  glClear (GL_COLOR_BUFFER_BIT);
  glPushMatrix();
gluLookAt(20, 4, 3, 0, 0, 0, 0, 1, 0);

  glRotatef ((GLfloat) ANG, rotaX, rotaY, rotaZ);
  
  criaChao();

  criaRua();

  criaMasp();
  

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
    ANG = (ANG + 5) % 360;
    glutPostRedisplay();
    break;
  case 'd':
    ANG = (ANG - 5) % 360;
    glutPostRedisplay();
    break;
   case 27:                                         // tecla Esc (encerra o programa)
	exit(0);
	break;
  }
}

int main(int argc, char** argv){
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize (500, 500); 
  glutInitWindowPosition (100, 100);
  glutCreateWindow (argv[0]);
  init ();
  glutDisplayFunc(display); 
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;
}