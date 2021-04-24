void background_y()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
}

void yardstick()
{
    glColor3ub(218,165,32);
  glBegin(GL_POLYGON);
  glVertex2f(0.35,0.2);
  glVertex2f(0.55,0.2);
  glVertex2f(0.55,0.7);
  glVertex2f(0.35,0.7);
  glEnd();

  glColor3ub(0,0,0);
  glLineWidth(5);
  glBegin(GL_LINE_LOOP);
  glVertex2f(0.35,0.2);
  glVertex2f(0.55,0.2);
  glVertex2f(0.55,0.7);
  glVertex2f(0.35,0.7);
  glEnd();

  //internal border
   glLineWidth(2);
  glBegin(GL_LINES);
   glVertex2f(0.35,0.3);
   glVertex2f(0.55,0.3);
   glVertex2f(0.35,0.4);
   glVertex2f(0.55,0.4);
   glVertex2f(0.35,0.5);
   glVertex2f(0.55,0.5);
   glVertex2f(0.35,0.6);
   glVertex2f(0.55,0.6);


  glEnd();
}
