void background_v()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
}

void volceno()
{
    //mountain
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(.1f,0.0f);
    glVertex2f(.9f,0.0f);
    glVertex2f(.6f,0.5f);
    glVertex2f(.4f,0.5f);
    glEnd();

    //fame
    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2f(.42f,.4f);
    glVertex2f(.5f,.4f);
    glVertex2f(.38f,.62f);

    glColor3ub(255,0,0);
    glVertex2f(.5f,.4f);
    glVertex2f(.58f,.4f);
    glColor3ub(255,255,0);
    glVertex2f(.5f,.72f);

    glColor3ub(255,0,0);
    glVertex2f(.5f,.4f);
    glVertex2f(.58f,.4f);
    glColor3ub(255,255,0);
    glVertex2f(.55f,.64f);

    glColor3ub(255,0,0);
    glVertex2f(.45f,.4f);
    glVertex2f(.58f,.4f);
    glVertex2f(.42f,.66f);

    glColor3ub(255,0,0);
    glVertex2f(.42f,.4f);
    glVertex2f(.56f,.4f);
    glColor3ub(255,255,0);
    glVertex2f(.45f,.67f);


    glColor3ub(255,0,0);
    glVertex2f(.5f,.4f);
    glVertex2f(.58f,.4f);
    glColor3ub(255,255,0);
    glVertex2f(.58f,.7f);

    glColor3ub(255,0,0);
    glVertex2f(.52f,.4f);
    glVertex2f(.58f,.4f);
    glVertex2f(.63f,.62f);


    glVertex2f(.42f,.4f);
    glColor3ub(255,255,0);
    glVertex2f(.57f,.4f);
    glColor3ub(255,205,0);
    glVertex2f(.55,.72f);

    glVertex2f(.42f,.4f);
    glColor3ub(255,25,0);
    glVertex2f(.57f,.4f);
    glColor3ub(255,205,0);
    glVertex2f(.48,.65f);
    glEnd();


    //upper_part
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(.4f,0.5f);
    glColor3ub(100,0,0);
    glVertex2f(.34f,0.4f);
    glVertex2f(.48f,0.35f);
    glVertex2f(.52f,0.3f);
    glVertex2f(.57,0.37f);
    glVertex2f(.66f,0.4f);
    glColor3ub(255,0,0);
    glVertex2f(.6f,0.5f);
    glEnd();
}
