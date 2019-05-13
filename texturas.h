void setTexturaRua(GLuint textura_rua){

  GLfloat amaerelo_difusa[]    = { 1, 1, 0, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, amaerelo_difusa);
    
    GLfloat ctpA[4][2]={
        {1, 0},
        {-1, 0},
        {1, 1},
        {-1, 1}
    };
    glBindTexture(GL_TEXTURE_2D, textura_rua);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpA[1]);  glVertex3f(-35, 0.501, 27.7);
        glTexCoord2fv(ctpA[0]);  glVertex3f(35, 0.501, 27.7);
        glTexCoord2fv(ctpA[2]);  glVertex3f(35, 0.501, 37.7);
        glTexCoord2fv(ctpA[3]);  glVertex3f(-35, 0.501, 37.7);
    glEnd();

}

void setTexturaRuaDescidaEsquerda(GLuint textura_rua){

   GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);

    GLfloat ctpA2[4][2]={
        {1, 1},
        {1, 0},
        {-1, 1},
        {-1, 0}
    };
    glBindTexture(GL_TEXTURE_2D, textura_rua);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpA2[1]);  glVertex3f(35, 0.501, 22.8);
        glTexCoord2fv(ctpA2[0]);  glVertex3f(25, 0.501, 22.8);
        glTexCoord2fv(ctpA2[2]);  glVertex3f(25, -7.5, -22.8);
        glTexCoord2fv(ctpA2[3]);  glVertex3f(35, -7.5, -22.8);
    glEnd();
}

void setTexturaRuaDescidaDireita(GLuint textura_rua){
   GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpA2[4][2]={
        {1, 1},
        {1, 0},
        {-1, 1},
        {-1, 0}
    };
    glBindTexture(GL_TEXTURE_2D, textura_rua);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpA2[1]);  glVertex3f(-35, 0.501, 22.8);
        glTexCoord2fv(ctpA2[0]);  glVertex3f(-25, 0.501, 22.8);
        glTexCoord2fv(ctpA2[2]);  glVertex3f(-25, -7.5, -22.8);
        glTexCoord2fv(ctpA2[3]);  glVertex3f(-35, -7.5, -22.8);
  glEnd();
}

void setTexturaChaoMasp(GLuint textura_chao){
  GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpM[4][2]={
        {20, 0},
        {-20, 0},
        {20, 20},
        {-20, 20}
    };
    glBindTexture(GL_TEXTURE_2D, textura_chao);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpM[1]);  glVertex3f(-25, 0.501, 22.8);
        glTexCoord2fv(ctpM[0]);  glVertex3f(25, 0.501, 22.8);
        glTexCoord2fv(ctpM[2]);  glVertex3f(25, 0.501, -22.8);
        glTexCoord2fv(ctpM[3]);  glVertex3f(-25, 0.501, -22.8);
    glEnd();
}

void setTexturaFaixaEsquerda(GLuint textura_faixa){
   GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpF[4][2]={
        {1, 0},
        {-1, 0},
        {1, 1},
        {-1, 1}
    };
    glBindTexture(GL_TEXTURE_2D, textura_faixa);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpF[1]);  glVertex3f(-35, 0.501, 27.7);
        glTexCoord2fv(ctpF[0]);  glVertex3f(-25, 0.501, 27.7);
        glTexCoord2fv(ctpF[2]);  glVertex3f(-25, 0.501, 22.8);
        glTexCoord2fv(ctpF[3]);  glVertex3f(-35, 0.501, 22.8);
    glEnd();
}

void setTexturaFaixaDireita(GLuint textura_faixa){
  GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpF[4][2]={
        {1, 0},
        {-1, 0},
        {1, 1},
        {-1, 1}
    };
    glBindTexture(GL_TEXTURE_2D, textura_faixa);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpF[1]);  glVertex3f(35, 0.501, 27.7);
        glTexCoord2fv(ctpF[0]);  glVertex3f(25, 0.501, 27.7);
        glTexCoord2fv(ctpF[2]);  glVertex3f(25, 0.501, 22.8);
        glTexCoord2fv(ctpF[3]);  glVertex3f(35, 0.501, 22.8);
    glEnd();
}

void setTexturaCorpoMaspFrente(GLuint texturaMasp){
  GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpF[4][2]={
        {20, 0},
        {-1, 0},
        {20, 1},
        {-1, 1}
    };
    glBindTexture(GL_TEXTURE_2D, texturaMasp);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpF[1]);  glVertex3f(22.1, 15.6, 24.1);
        glTexCoord2fv(ctpF[0]);  glVertex3f(-22.1, 15.6, 24.1);
        glTexCoord2fv(ctpF[2]);  glVertex3f(-22.1, 5.5, 24.1);
        glTexCoord2fv(ctpF[3]);  glVertex3f(22.1, 5.5, 24.1);
    glEnd();
}

void setTexturaCorpoMaspTraz(GLuint texturaMasp){
  GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpF[4][2]={
        {20, 0},
        {-1, 0},
        {20, 1},
        {-1, 1}
    };
    glBindTexture(GL_TEXTURE_2D, texturaMasp);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpF[1]);  glVertex3f(22.1, 15.6, -6.1);
        glTexCoord2fv(ctpF[0]);  glVertex3f(-22.1, 15.6, -6.1);
        glTexCoord2fv(ctpF[2]);  glVertex3f(-22.1, 5.5, -6.1);
        glTexCoord2fv(ctpF[3]);  glVertex3f(22.1, 5.5, -6.1);
    glEnd();
}

void setTexturaCorpoMaspEsquerda(GLuint texturaMasp){
  GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpF[4][2]={
        {20, 1},
        {20, 0},
        {-1, 1},
        {-1, 0}
    };
    glBindTexture(GL_TEXTURE_2D, texturaMasp);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpF[1]);  glVertex3f(22.1, 15.6, 24.1);
        glTexCoord2fv(ctpF[0]);  glVertex3f(22.1, 5.5, 24.1);
        glTexCoord2fv(ctpF[2]);  glVertex3f(22.1, 5.5, -6.1);
        glTexCoord2fv(ctpF[3]);  glVertex3f(22.1, 15.6, -6.1);
    glEnd();
}

void setTexturaCorpoMaspDireita(GLuint texturaMasp){
  GLfloat aux_difusa[]    = { 1, 1, 0, 1.0 };
   glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, aux_difusa);
    GLfloat ctpF[4][2]={
        {20, 1},
        {20, 0},
        {-1, 1},
        {-1, 0}
    };
    glBindTexture(GL_TEXTURE_2D, texturaMasp);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpF[1]);  glVertex3f(-22.1, 15.6, 24.1);
        glTexCoord2fv(ctpF[0]);  glVertex3f(-22.1, 5.5, 24.1);
        glTexCoord2fv(ctpF[2]);  glVertex3f(-22.1, 5.5, -6.1);
        glTexCoord2fv(ctpF[3]);  glVertex3f(-22.1, 15.6, -6.1);
    glEnd();
}

void setTetoMasp(GLuint textura_teto){
    GLfloat ctpF[4][2]={
        {20, 0},
        {-1, 0},
        {20, 1},
        {-1, 1}
    };
    glBindTexture(GL_TEXTURE_2D, textura_teto);
    glBegin(GL_QUADS);
        glTexCoord2fv(ctpF[1]);  glVertex3f(-22.1, 15.6, 24.1);
        glTexCoord2fv(ctpF[0]);  glVertex3f(22.1, 15.6, 24.1);
        glTexCoord2fv(ctpF[2]);  glVertex3f(22.1, 15.6, -6.1);
        glTexCoord2fv(ctpF[3]);  glVertex3f(-22.1, 15.6, -6.1);
    glEnd();
}