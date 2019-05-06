//camera commands:
//use w/a/s/d to rotate camera
//use mouse scroll or q/e on keyboard to zoon in or zoon out
//by
//Eduardo Bianconi Perez: RA 196244 & Mateus Duarte castello: RA 203257

#include <stdlib.h>
#include <GL/glut.h>
#include <stdio.h>
#include "chao.h"
#include "masp.h"
#include "objetos.h"
#include "image.c"
#include "texturas.h"

#define IMAGIC      0x01da
#define IMAGIC_SWAP 0xda01


static int ANGX = 0;
static int ANGY = 0;
static int ANGXY = 0;
static double zoom = 0.5;

#define COORD_textura_rua 1
#define COR_DO_PLANO 0.52,0.52,0.78,1.0
#define rua "texturas/rua.rgb"
#define chaoMasp "texturas/chaoMasp.rgb"
#define faixaPedestre "texturas/faixa.rgb"
#define corpo "texturas/corpo.rgb"
#define teto "texturas/Teto.rgb"

GLuint  textura_rua;
GLuint  textura_chao;
GLuint  textura_faixa;
GLuint  textura_corpo;
GLuint  textura_teto;

static int posiX = 3;

void carregar_chaoMasp(void){
  IMAGE *chaoM;
  GLenum gluerrM;

  /* textura do plano */
  glGenTextures(1, &textura_chao);
  glBindTexture(GL_TEXTURE_2D, textura_chao);

    if(!(chaoM=ImageLoad(chaoMasp))) {
    fprintf(stderr,"Error reading a texture.\n");
    exit(-1);
  }

    gluerrM=gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 
			   chaoM->sizeX, chaoM->sizeY, 
			   GL_RGB, GL_UNSIGNED_BYTE, 
			   (GLvoid *)(chaoM->data));

  if(gluerrM){
    fprintf(stderr,"GLULib%s\n",gluErrorString(gluerrM));
    exit(-1);
  }
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);

}

void carregar_rua(void){
  IMAGE *ruaR;
  GLenum gluerrR;

  /* textura do plano */
  glGenTextures(1, &textura_rua);
  glBindTexture(GL_TEXTURE_2D, textura_rua);

    if(!(ruaR=ImageLoad(rua))) {
    fprintf(stderr,"Error reading a texture.\n");
    exit(-1);
  }

    gluerrR=gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 
			   ruaR->sizeX, ruaR->sizeY, 
			   GL_RGB, GL_UNSIGNED_BYTE, 
			   (GLvoid *)(ruaR->data));

  if(gluerrR){
    fprintf(stderr,"GLULib%s\n",gluErrorString(gluerrR));
    exit(-1);
  }

  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_MIRRORED_REPEAT);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR);
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);

}

void carregar_faixa(void){
  IMAGE *faixa;
  GLenum gluerrF;
  /* textura do plano */
  glGenTextures(1, &textura_faixa);
  glBindTexture(GL_TEXTURE_2D, textura_faixa);

    if(!(faixa=ImageLoad(faixaPedestre))) {
    fprintf(stderr,"Error reading a texture.\n");
    exit(-1);
  }

    gluerrF=gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 
			   faixa->sizeX, faixa->sizeY, 
			   GL_RGB, GL_UNSIGNED_BYTE, 
			   (GLvoid *)(faixa->data));

  if(gluerrF){
    fprintf(stderr,"GLULib%s\n",gluErrorString(gluerrF));
    exit(-1);
  }

  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_MIRRORED_REPEAT);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR);
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);

}

void carregar_corpoMasp(void){
  IMAGE *imgCorpo;
  GLenum gluerrC;

  /* textura do plano */
  glGenTextures(1, &textura_corpo);
  glBindTexture(GL_TEXTURE_2D, textura_corpo);

    if(!(imgCorpo=ImageLoad(corpo))) {
    fprintf(stderr,"Error reading a texture.\n");
    exit(-1);
  }

    gluerrC=gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 
			   imgCorpo->sizeX, imgCorpo->sizeY, 
			   GL_RGB, GL_UNSIGNED_BYTE, 
			   (GLvoid *)(imgCorpo->data));

  if(gluerrC){
    fprintf(stderr,"GLULib%s\n",gluErrorString(gluerrC));
    exit(-1);
  }

  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_REPEAT);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR);
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);
}

void carregar_teto(void){
  IMAGE *imgTeto;
  GLenum gluerrT;

  /* textura do plano */
  glGenTextures(1, &textura_teto);
  glBindTexture(GL_TEXTURE_2D, textura_teto);

    if(!(imgTeto=ImageLoad(teto))) {
    fprintf(stderr,"Error reading a texture.\n");
    exit(-1);
  }

    gluerrT=gluBuild2DMipmaps(GL_TEXTURE_2D, 3, 
			   imgTeto->sizeX, imgTeto->sizeY, 
			   GL_RGB, GL_UNSIGNED_BYTE, 
			   (GLvoid *)(imgTeto->data));

  if(gluerrT){
    fprintf(stderr,"GLULib%s\n",gluErrorString(gluerrT));
    exit(-1);
  }

  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_WRAP_T,GL_MIRRORED_REPEAT);
  glTexParameterf(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_LINEAR);
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);

}

void init(void){
  glEnable(GL_DEPTH_TEST);
}

void display(void){
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  glClearColor (0.0, 0.0, 0.0, 0.0);
  glColor4f(COR_DO_PLANO);
  glTexEnvf(GL_TEXTURE_ENV,GL_TEXTURE_ENV_MODE,GL_DECAL);
  glPushMatrix();
  gluLookAt(0, 0.25, 1, 0, 0, 0, 0, 1, 0);

  glRotatef ((GLfloat) ANGX, 0, 1, 0);

  glRotatef ((GLfloat) ANGY, 1, 0, 0);

  glScalef(zoom, zoom, zoom);

  criaChao();

  criaMasp();
  
  criaRua();

  criaObjetos();

  glEnable(GL_TEXTURE_2D);

  carregar_rua();

  carregar_chaoMasp();

  carregar_faixa();

  carregar_corpoMasp();

  carregar_teto();

  setTexturaRua(textura_rua);

  setTexturaRuaDescidaEsquerda(textura_rua);

  setTexturaRuaDescidaDireita(textura_rua);

  setTexturaChaoMasp(textura_chao);

  setTexturaFaixaEsquerda(textura_faixa);

  setTexturaFaixaDireita(textura_faixa);
  
  setTexturaCorpoMaspFrente(textura_corpo);

  setTexturaCorpoMaspTraz(textura_corpo);

  setTexturaCorpoMaspEsquerda(textura_corpo);

  setTexturaCorpoMaspDireita(textura_corpo);

  setTetoMasp(textura_teto);

  glDisable(GL_TEXTURE_2D); 

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
    if(zoom < 1.500000){
      zoom += 0.1;
    }
    glutPostRedisplay();
    break;
  case 'e':
    if(zoom > 0.200000){
      zoom -= 0.1;
    }
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
      // if(zoom < 1.500000){
      zoom += 0.1;
    // }
      break;
    case 4:
      // if(zoom > 0.200000){
      zoom -= 0.1;
    // }
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