void criaChao(){



  GLfloat chao_difusa[]    = { 0.72, 0.71, 0.55, 1.0 };
  GLfloat chao_brilho[]    = { 100.0 };
  // GLfloat chao_difusa[]    = {0.44, 0.5, 0.56, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, chao_difusa);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, chao_brilho);

  /* chao */
  glPushMatrix();
    glColor3f(0.82, 0.71, 0.55);
    glTranslatef (0.0, -4.5, 0.0);
    glScalef (50.0, 10.0, 45.5);
    glutSolidCube (1.0);
  glPopMatrix();

}

void criaRua(){

  GLfloat calcada_difusa[]    = { 0.66, 0.66, 0.66, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, calcada_difusa);
  /* calcada */
  glPushMatrix();
    glColor3f(0.66, 0.66, 0.66);
    glTranslatef (0.0, 0.0, 25.25);
    glScalef (50.0, 1.0, 5);
    glutSolidCube (1.0);
  glPopMatrix();

  GLfloat rua_difusa[]    = {0.41, 0.41, 0.41, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

  /* rua */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (0.0, 0.0, 32.75);
    glScalef (50.0, 1.0, 10);
    glutSolidCube (1.0);
    glPopMatrix();

  GLfloat ilha_difusa[]    = {1, 0.27, 0, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, ilha_difusa);

  /* ilha */
  glPushMatrix();
    glColor3f(1, 0.27, 0);
    glTranslatef (0.0, 0.0, 40.25);
    glScalef (70.0, 1.0, 5);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

  /* curva direita */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (30.0, 0.0, 30.25);
    glScalef (10.0, 1.0, 15);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

  /* curva esquerda */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (-30.0, 0.0, 30.25);
    glScalef (10.0, 1.0, 15);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

    /* descida esquerda */
  glPushMatrix();
    glRotatef(350, 1, 0, 0);
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (-30.0, -4, -0.5);
    glScalef (10.0, 1.0, 46);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

      /* descida direita */
  glPushMatrix();
    glRotatef(350, 1, 0, 0);
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (30.0, -4, -0.5);
    glScalef (10.0, 1.0, 46);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

      /* fim descida direita */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (30, -8, -25.1);
    glScalef (10.0, 1.0, 5.3);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

        /* fim descida esquerda */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (-30, -8, -25.1);
    glScalef (10.0, 1.0, 5.3);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

    /* calcada Trazeira */
  glPushMatrix();
    glColor3f(0.66, 0.66, 0.66);
    glTranslatef (0.0, -8, -24.8);
    glScalef (50.0, 1.0, 5.2);
    glutSolidCube (1.0);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, rua_difusa);

      /* rua Trazeira */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (0.0, -8, -30);
    glScalef (70.0, 1.0, 5.2);
    glutSolidCube (1.0);
  glPopMatrix();

}