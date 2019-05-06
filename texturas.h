void setTexturaRua(GLuint textura_rua){
    
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