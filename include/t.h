void background_t(){
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();
}

void tv()
{
  glLineWidth(4);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(.5f,.58f);
    glVertex2f(.4f,.7f);
    glVertex2f(.5f,.58f);
    glVertex2f(.6f,.7f);
    glEnd();



    //frame
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(.3f,.3f);
    glVertex2f(.7f,.3f);
    glVertex2f(.7f,.6f);
    glVertex2f(.3f,.6f);
    glEnd();

    //inner_frame
    glColor3ub(0,0,200);
    glBegin(GL_POLYGON);
    glVertex2f(.32f,.315f);
    glVertex2f(.68f,.315f);
    glVertex2f(.68f,.585f);
    glVertex2f(.32,.585f);
    glEnd();

     //Antena
    glLineWidth(6);
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(.4f,.27f);
    glVertex2f(.6f,.27f);

    glVertex2f(.43f,.3f);
    glVertex2f(.43,.27f);

    glVertex2f(.57f,.3f);
    glVertex2f(.57,.27f);


    glEnd();
}
