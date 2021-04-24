void background_x()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
}

void xylophone()
{
  //border
  glColor3ub(0,0,0);
  glLineWidth(3);
  glBegin(GL_LINE_LOOP);
  glVertex2f(0.1,0.1);
  glVertex2f(0.9,0.2);
  glVertex2f(0.9,0.7);
  glVertex2f(0.1,0.7);
  glEnd();

  //internal border
   glLineWidth(2);
  glBegin(GL_LINES);


  //////

  glVertex2f(0.26,0.120);
  glVertex2f(0.26,0.7);

  glVertex2f(0.42,0.140);
  glVertex2f(0.42,0.7);

  glVertex2f(0.58,0.160);
  glVertex2f(0.58,0.7);

  glVertex2f(0.74,0.178);
  glVertex2f(0.74,0.7);

  glEnd();
  //box
  glColor3ub(220,85,57);
  glBegin(GL_QUADS);
  glVertex2f(0.1,0.7);//q
  glVertex2f(0.1,0.1);//a
  glVertex2f(0.26,0.120);//s
  glVertex2f(0.26,0.7);//w
  glEnd();

  glColor3ub(20,15,197);
  glBegin(GL_QUADS);
  glVertex2f(0.26,0.7);
  glVertex2f(0.26,0.120);
  glVertex2f(0.42,0.140);
  glVertex2f(0.42,0.7);
  glEnd();

  glColor3ub(30,155,57);
  glBegin(GL_QUADS);
  glVertex2f(0.42,0.140);
  glVertex2f(0.42,0.7);
  glVertex2f(0.58,0.7);
  glVertex2f(0.58,0.160);
  glEnd();

  glColor3ub(35,155,217);
  glBegin(GL_QUADS);
  glVertex2f(0.58,0.160);
  glVertex2f(0.58,0.7);
  glVertex2f(0.74,0.7);
  glVertex2f(0.74,0.178);
  glEnd();

  glColor3ub(135,105,187);
  glBegin(GL_QUADS);

  glVertex2f(0.74,0.7);
  glVertex2f(0.74,0.178);
  glVertex2f(0.9,0.2);
  glVertex2f(0.9,0.7);
  glEnd();

}
