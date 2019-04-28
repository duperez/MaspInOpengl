void criaChao(){

  /* chao */
  glPushMatrix();
    glColor3f(0.82, 0.71, 0.);
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
    glScalef (50.0, 1.0, 5);
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

}