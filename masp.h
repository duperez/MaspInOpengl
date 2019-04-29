void criaMasp(){
  /* suporte esquerda 1*/ 
  glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef (-23.5, 10.5, 18.5);
    glScalef (3.0, 20.0, 3.0);
    glutSolidCube (1.0);
  glPopMatrix();

    /* suporte direita 1*/ 
  glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef (23.5, 10.5, 18.5);
    glScalef (3.0, 20.0, 3.0);
    glutSolidCube (1.0);
  glPopMatrix();

    /* suporte esquerda 2*/ 
  glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef (-23.5, 10.5, 0);
    glScalef (3.0, 20.0, 3.0);
    glutSolidCube (1.0);
  glPopMatrix();

    /* suporte direita 2*/ 
  glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
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
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef (0, 18, 0);
    glScalef (44.0, 5.0, 3);
    glutSolidCube (1.0);
  glPopMatrix();

      /* superior direito*/ 
  glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef (0, 18, 18.5);
    glScalef (44.0, 5.0, 3);
    glutSolidCube (1.0);
  glPopMatrix();

        /* rampa trazeira */
  glPushMatrix();
    glRotatef(330, 1, 0, 0);
    glColor3f(0.44, 0.5, 0.56);
    glTranslatef (0, 6, -24.0);
    glScalef (10.0, 2.0, 5);
    glutSolidCube (1.0);
  glPopMatrix();

}