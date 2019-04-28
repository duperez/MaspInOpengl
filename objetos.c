void criaObjetos(){
    
      //cano sinaleiro
  glPushMatrix();
    glColor3f(0.47, 0.53, 0.6);
    glTranslatef (10.0, 5.0, 27);
    // glScalef (10.0, 1.0, 15);
    glRotatef(90, 1, 0, 0);
    GLUquadricObj * p = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluCylinder(p, 0.3, 0.3, 5, 4, 4);
  glPopMatrix();

  //placa sinaleiro
  glPushMatrix();
    glColor3f(0.18, 0.31, 0.31);
    glTranslatef (10.3, 4, 27);
    glScalef (0.2, 2, 1);
    glutSolidCube (1.0);
  glPopMatrix();

    //cor vermelha sinaleiro
  glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef (10.4, 4.7, 27);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * cv = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluSphere(cv, 0.2, 10, 10);
  glPopMatrix();

        //cor amarela sinaleiro
  glPushMatrix();
    glColor3f(1, 1, 0);
    glTranslatef (10.4, 4, 27);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * ca = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluSphere(ca, 0.2, 10, 10);
  glPopMatrix();

      //cor verde sinaleiro
  glPushMatrix();
    glColor3f(0, 1, 0);
    glTranslatef (10.4, 3.3, 27);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * cvd = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluSphere(cvd, 0.2, 10, 10);
  glPopMatrix();

    //cano poste de luz
  glPushMatrix();
    glColor3f(0.47, 0.53, 0.6);
    glTranslatef (10.0, 5.0, 39);
    // glScalef (10.0, 1.0, 15);
    glRotatef(90, 1, 0, 0);
    GLUquadricObj * ptz = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluCylinder(ptz, 0.2, 0.2, 5, 4, 4);
  glPopMatrix();

    //globo do poste de luz
  glPushMatrix();
    glColor3f(1, 1, 0);
    glTranslatef (10.0, 5.0, 39);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * gl = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluSphere(gl, 0.6, 10, 10);
  glPopMatrix();
}