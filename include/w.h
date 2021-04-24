void background_w()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
}

void wall()
{
  //wall
  glColor3ub(220,85,57);
  glBegin(GL_POLYGON);
  glVertex2f(0.1,0.2);
  glVertex2f(0.9,0.2);
  glVertex2f(0.9,0.7);
  glVertex2f(0.1,0.7);
  glEnd();

  //border
  glColor3ub(0,0,0);
  glLineWidth(3);
  glBegin(GL_LINE_LOOP);
  glVertex2f(0.1,0.2);
  glVertex2f(0.9,0.2);
  glVertex2f(0.9,0.7);
  glVertex2f(0.1,0.7);
  glEnd();

  //internal border
   glLineWidth(2);
  glBegin(GL_LINES);
  glVertex2f(0.1,0.3);
  glVertex2f(0.9,0.3);
  glVertex2f(0.1,0.4);
  glVertex2f(0.9,0.4);
  glVertex2f(0.1,0.5);
  glVertex2f(0.9,0.5);
  glVertex2f(0.1,0.6);
  glVertex2f(0.9,0.6);
  glVertex2f(0.1,0.7);
  glVertex2f(0.9,0.7);

  //////
  glVertex2f(0.26,0.2);
  glVertex2f(0.26,0.7);
  glVertex2f(0.42,0.2);
  glVertex2f(0.42,0.7);
  glVertex2f(0.58,0.2);
  glVertex2f(0.58,0.7);
  glVertex2f(0.74,0.2);
  glVertex2f(0.74,0.7);

  glEnd();

   glColor3ub(50,50,50);
  glBegin(GL_QUADS);
  glVertex2f(0.0f,0.0f);
  glVertex2f(1.0f,0.0f);
   glColor3ub(80,80,80);
  glVertex2f(0.9f,0.2f);
  glVertex2f(0.1f,0.2f);
  glEnd();
}
