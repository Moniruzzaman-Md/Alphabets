void background_u(){
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();
}

void umbrella()
{
    //stick
   glColor3ub(0,0,0);
   glLineWidth(4);
   glBegin(GL_LINE_STRIP);
   glVertex2f(.5f,.8f);
   glVertex2f(.5f,.1f);
   glVertex2f(.53f,.1f);
   glVertex2f(.53f,.13f);
   glEnd();

   //body
   glColor3ub(166,0,5);
   glBegin(GL_TRIANGLE_FAN);
   glVertex2f(0.5f,.9f);
   glColor3ub(0,0,255);
   glVertex2f(.9f,.51f);
   glVertex2f(.8f,.5f);
   glColor3ub(0,255,0);
   glVertex2f(.7f,.52f);
   glVertex2f(.6f,.5f);
   glColor3ub(255,255,0);
   glVertex2f(.5f,.53f);
   glVertex2f(.4f,.5f);
   glColor3ub(255,83,0);
   glVertex2f(.3f,.52f);
   glVertex2f(.2f,.5f);
   glColor3ub(155,0,0);
   glVertex2f(.1f,.51f);
   glEnd();

}
