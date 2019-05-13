void criaMasp(){

  GLfloat masp_especular[] = { 1, 0, 0, 1 };
  GLfloat masp_brilho[]    = { 100.0 };
  GLfloat masp_difusa[]    = { 1, 0, 0.0, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, masp_difusa);
  // glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, masp_especular);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, masp_brilho);

  /* suporte esquerda 1*/ 
  glPushMatrix();
    glColor3f(0.89, 0.15, 0.21);
    glTranslatef (-23.5, 10.5, 18.5);
    glScalef (3.0, 20.0, 3.0);
    glutSolidCube (1.0);
  glPopMatrix();

    /* suporte direita 1*/ 
  glPushMatrix();
    glColor3f(0.89, 0.15, 0.21);
    glTranslatef (23.5, 10.5, 18.5);
    glScalef (3.0, 20.0, 3.0);
    glutSolidCube (1.0);
  glPopMatrix();

    /* suporte esquerda 2*/ 
  glPushMatrix();
    glColor3f(0.89, 0.15, 0.21);
    glTranslatef (-23.5, 10.5, 0);
    glScalef (3.0, 20.0, 3.0);
    glutSolidCube (1.0);
  glPopMatrix();

    /* suporte direita 2*/ 
  glPushMatrix();
    glColor3f(0.89, 0.15, 0.21);
    glTranslatef (23.5, 10.5, 0);
    glScalef (3.0, 20.0, 3.0);
    glutSolidCube (1.0);
  glPopMatrix();

      /* corpo*/ 
  glPushMatrix();
    glColor3f(0.44, 0.5, 0.56);
    glTranslatef (0, 10.5, 9);
    glScalef (44.0, 10.0, 30);
    glutSolidCube (1.0);
  glPopMatrix();

      /* superior esquerdo*/ 
  glPushMatrix();
    glColor3f(0.89, 0.15, 0.21);
    glTranslatef (0, 18, 0);
    glScalef (44.0, 5.0, 3);
    glutSolidCube (1.0);
  glPopMatrix();

      /* superior direito*/ 
  glPushMatrix();
    glColor3f(0.89, 0.15, 0.21);
    glTranslatef (0, 18, 18.5);
    glScalef (44.0, 5.0, 3);
    glutSolidCube (1.0);
  glPopMatrix();

    GLfloat rampa_especular[] = {0.44, 0.5, 0.56, 1 };
  GLfloat rampa_brilho[]    = { 100.0 };
  GLfloat rampa_difusa[]    = {0.44, 0.5, 0.56, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rampa_difusa);
  // glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, masp_especular);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, rampa_brilho);

        /* rampa trazeira */
  glPushMatrix();
    glRotatef(330, 1, 0, 0);
    glColor3f(0.44, 0.5, 0.56);
    glTranslatef (0, 6, -24.0);
    glScalef (10.0, 2.0, 5);
    glutSolidCube (1.0);
  glPopMatrix();

}