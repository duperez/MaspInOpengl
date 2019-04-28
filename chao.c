void criaChao(){

  glColor3f(1.0, 1.0, 1.0);
  /* chao */
  glPushMatrix();
 glTranslatef (0.0, -4.5, 0.0);
  glScalef (50.0, 10.0, 45.5);
  glutSolidCube (1.0);
  glPopMatrix();

}

void criaRua(){

    glColor3f(1.0, 0.0, 0.0);
  /* calcada */
  glPushMatrix();
 glTranslatef (0.0, 0.0, 25.25);
  glScalef (50.0, 1.0, 5);
  glutSolidCube (1.0);
  glPopMatrix();

      glColor3f(1.0, 1.0, 1.0);
  /* rua */
  glPushMatrix();
 glTranslatef (0.0, 0.0, 32.75);
  glScalef (50.0, 1.0, 10);
  glutSolidCube (1.0);
  glPopMatrix();

        glColor3f(1.0, 0.0, 0.0);
  /* land */
  glPushMatrix();
 glTranslatef (0.0, 0.0, 40.25);
  glScalef (50.0, 1.0, 5);
  glutSolidCube (1.0);
  glPopMatrix();

        glColor3f(1.0, 1.0, 1.0);
  /* curva direita */
  glPushMatrix();
 glTranslatef (30.0, 0.0, 30.25);
  glScalef (10.0, 1.0, 15);
  glutSolidCube (1.0);
  glPopMatrix();

          glColor3f(1.0, 1.0, 1.0);
  /* curva esquerda */
  glPushMatrix();
 glTranslatef (-30.0, 0.0, 30.25);
  glScalef (10.0, 1.0, 15);
  glutSolidCube (1.0);
  glPopMatrix();


}