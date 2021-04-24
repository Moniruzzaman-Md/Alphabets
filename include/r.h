void background_r()
{
   glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}
void rocket()
{
    glBegin(GL_QUADS);
   glVertex2f(.45f,.3f);
   glColor3ub(50,0,0);
   glVertex2f(.55f,.3f);
   glVertex2f(.55f,.8f);
   glColor3ub(0,0,0);
   glVertex2f(.45f,.8f);
   glEnd();

    //Head
   glColor3ub(50,50,0);
   glBegin(GL_TRIANGLES);
   glVertex2f(.448f,.8f);
   glVertex2f(.552f,.8f);
   glColor3ub(0,0,0);
   glVertex2f(.50f,.95f);
   glEnd();



   //Fame big
   glColor3ub(255,0,0);
   glBegin(GL_POLYGON);
   glVertex2f(.45f,.3f);
   glVertex2f(.40f,.20f);
   glColor3ub(255,255,0);
   glVertex2f(.5f,.01f);
   glColor3ub(255,0,0);
   glVertex2f(.60f,.20f);
   glVertex2f(.55f,.3f);
   glEnd();

   //Fame small
   glColor3ub(255,0,0);
   glBegin(GL_POLYGON);
   glVertex2f(.45f,.3f);
   glVertex2f(.43f,.22f);
   glColor3ub(255,255,0);
   glVertex2f(.5f,.10f);
   glColor3ub(255,0,0);
   glVertex2f(.57f,.22f);
   glVertex2f(.55f,.3f);
   glEnd();


   //side wings left_up
   glColor3ub(200,0,0);
   glBegin(GL_TRIANGLES);
   glVertex2f(.41f,.68f);
   glVertex2f(.45f,.68f);
   glVertex2f(.45f,.8f);
   glEnd();

   //side wings right_up
   glBegin(GL_TRIANGLES);
   glVertex2f(.55f,.8f);
   glVertex2f(.55f,.68f);
   glVertex2f(.59f,.68f);
   glEnd();

   //Side wings left_down
   glBegin(GL_POLYGON);
   glVertex2f(.40f,.3f);
   glVertex2f(.45f,.3f);
   glVertex2f(.45f,.55f);
   glEnd();

     //Side wings right_down
   glBegin(GL_POLYGON);
   glVertex2f(.55f,.55f);
   glVertex2f(.55f,.3f);
   glVertex2f(.60f,.3f);
   glEnd();
}
