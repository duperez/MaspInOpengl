void criaObjetos(){

  GLfloat cano_difusa[]    = { 1, 1, 1.0, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, cano_difusa);
    
      //cano sinaleiro
  glPushMatrix();
    glColor3f(0.47, 0.53, 0.6);
    glTranslatef (10.0, 5.0, 27);
    // glScalef (10.0, 1.0, 15);
    glRotatef(90, 1, 0, 0);
    GLUquadricObj * p = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluCylinder(p, 0.1, 0.1, 5, 10, 10);
  glPopMatrix();

  GLfloat placa_difusa[]    = { 0.18, 0.31, 0.31, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, placa_difusa);

  //placa sinaleiro
  glPushMatrix();
    glColor3f(0.18, 0.31, 0.31);
    glTranslatef (10.1, 4, 27);
    glScalef (0.1, 1, 0.5);
    glutSolidCube (1.0);
  glPopMatrix();

  GLfloat vermelho_difusa[]    = { 1 , 0, 0, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, vermelho_difusa);  

    //cor vermelha sinaleiro
  glPushMatrix();
    glColor3f(1, 0, 0);
    glTranslatef (10.15, 4.35, 27);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * cv = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluSphere(cv, 0.1, 10, 10);
  glPopMatrix();

  GLfloat amaerelo_difusa[]    = { 1, 1, 0, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, amaerelo_difusa);

        //cor amarela sinaleiro
  glPushMatrix();
    glColor3f(1, 1, 0);
    glTranslatef (10.15, 4, 27);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * ca = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluSphere(cv, 0.1, 10, 10);
  glPopMatrix();

  GLfloat verde_difusa[]    = { 0, 1, 0, 1.0 };
  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, verde_difusa);

      //cor verde sinaleiro
  glPushMatrix();
    glColor3f(0, 1, 0);
    glTranslatef (10.15, 3.65, 27);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * cvd = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluSphere(cv, 0.1, 10, 10);
  glPopMatrix();

  glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, cano_difusa);

    //cano poste de luz
  glPushMatrix();
    glColor3f(0.47, 0.53, 0.6);
    glTranslatef (10.0, 5.0, 39);
    // glScalef (10.0, 1.0, 15);
    glRotatef(90, 1, 0, 0);
    GLUquadricObj * ptz = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    gluCylinder(p, 0.1, 0.1, 5, 10, 10);
  glPopMatrix();

  GLfloat luz_brilho[]    = { 2.0 };
  GLfloat luz_difusa[]    = { 1, 1, 0.0, 1 };
  GLfloat luz_especular[] = { 1, 0, 0, 1 };
  glMaterialfv(GL_FRONT, GL_DIFFUSE, luz_difusa);
  glMaterialfv(GL_BACK, GL_SHININESS, luz_brilho);
  glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, luz_especular);
    //globo do poste de luz
  glPushMatrix();
    glColor3f(1, 1, 0);
    glTranslatef (10.0, 5.0, 39);
    // glScalef (10.0, 1.0, 15);
    GLUquadricObj * gl = gluNewQuadric();
    gluQuadricDrawStyle(p, GLU_FILL);
    // glMaterialfv(GL_FRONT, GL_EMISSION, cor_luz0);
    gluSphere(gl, 0.6, 10, 10);
  glPopMatrix();
}