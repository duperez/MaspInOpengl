void criaChao(){

  /* chao */
  glPushMatrix();
    glColor3f(0.82, 0.71, 0.55);
    glTranslatef (0.0, -4.5, 0.0);
    glScalef (50.0, 10.0, 45.5);
    glutSolidCube (1.0);
  glPopMatrix();

}

void criaRua(){
  /* calcada */
  glPushMatrix();
    glColor3f(0.66, 0.66, 0.66);
    glTranslatef (0.0, 0.0, 25.25);
    glScalef (50.0, 1.0, 5);
    glutSolidCube (1.0);
  glPopMatrix();

  /* rua */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (0.0, 0.0, 32.75);
    glScalef (50.0, 1.0, 10);
    glutSolidCube (1.0);
    glPopMatrix();

  /* ilha */
  glPushMatrix();
    glColor3f(1, 0.27, 0);
    glTranslatef (0.0, 0.0, 40.25);
    glScalef (70.0, 1.0, 5);
    glutSolidCube (1.0);
  glPopMatrix();

  /* curva direita */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (30.0, 0.0, 30.25);
    glScalef (10.0, 1.0, 15);
    glutSolidCube (1.0);
  glPopMatrix();

  /* curva esquerda */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (-30.0, 0.0, 30.25);
    glScalef (10.0, 1.0, 15);
    glutSolidCube (1.0);
  glPopMatrix();

    /* descida esquerda */
  glPushMatrix();
    glRotatef(350, 1, 0, 0);
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (-30.0, -4, -0.5);
    glScalef (10.0, 1.0, 46);
    glutSolidCube (1.0);
  glPopMatrix();

      /* descida direita */
  glPushMatrix();
    glRotatef(350, 1, 0, 0);
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (30.0, -4, -0.5);
    glScalef (10.0, 1.0, 46);
    glutSolidCube (1.0);
  glPopMatrix();

      /* fim descida direita */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (30, -8, -25.1);
    glScalef (10.0, 1.0, 5.3);
    glutSolidCube (1.0);
  glPopMatrix();

        /* fim descida esquerda */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (-30, -8, -25.1);
    glScalef (10.0, 1.0, 5.3);
    glutSolidCube (1.0);
  glPopMatrix();

    /* calcada Trazeira */
  glPushMatrix();
    glColor3f(0.66, 0.66, 0.66);
    glTranslatef (0.0, -8, -24.8);
    glScalef (50.0, 1.0, 5.2);
    glutSolidCube (1.0);
  glPopMatrix();

      /* rua Trazeira */
  glPushMatrix();
    glColor3f(0.41, 0.41, 0.41);
    glTranslatef (0.0, -8, -30);
    glScalef (70.0, 1.0, 5.2);
    glutSolidCube (1.0);
  glPopMatrix();

}