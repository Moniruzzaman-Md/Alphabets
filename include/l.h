void background_l()
{
    glBegin(GL_QUADS);
    glColor3ub(65, 105, 225);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void lock()
{
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.1f, .42f);
    glVertex2f(.65f, .42f);
    glEnd();


    glLineWidth(1);

    GLfloat x1 = .4;
    GLfloat y1 = .4;
    GLfloat radious = .2f;
    int ammountOfLIne = 1000;
    GLfloat twicePI = 4.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(190,190, 190);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    GLfloat x2 = .4;
    GLfloat y2 = .4;
    GLfloat radious1 = .15f;
    int ammountOfLIne1 = 1000;
    GLfloat twicePI1 = 4.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(65, 105, 225);
    glVertex2f(x2, y2);
    for (int i = 0; i < ammountOfLIne1; i++)
    {
        glVertex2f(x2 + (radious1 * cos(i * twicePI1 / ammountOfLIne1)), y2 + (radious1 * sin(i * twicePI1 / ammountOfLIne1)));
    }
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(204, 102, 0);
    glVertex2f(.15f, .4f);
    glVertex2f(.7f, .4f);
    glVertex2f(.7f, .0f);
    glVertex2f(.15f,.0f);
    glEnd();


    GLfloat x3= .4;
    GLfloat y3 = .27;
    GLfloat radious3 = .025f;
    int ammountOfLIne3 = 1000;
    GLfloat twicePI3 = 4.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0, 0);
    glVertex2f(x3, y3);
    for (int i = 0; i < ammountOfLIne3; i++)
    {
        glVertex2f(x3 + (radious3 * cos(i * twicePI3 / ammountOfLIne3)), y3 + (radious3 * sin(i * twicePI3 / ammountOfLIne3)));
    }
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(153, 77, 0);
    glVertex2f(.15f, .4f);
    glVertex2f(.1f, .42f);
    glVertex2f(.1f, .02f);
    glVertex2f(.15f,.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 77, 0);
    glVertex2f(.15f, .4f);
    glVertex2f(.1f, .42f);
    glVertex2f(.65f, .42f);
    glVertex2f(.7f,.4f);
    glEnd();

    glLineWidth(3);

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.55f, .42f);
    glVertex2f(.25f,.42f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.65f, .42f);
    glVertex2f(.7f,.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.15f, .4f);
    glVertex2f(.1f, .42);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.15f, .4f);
    glVertex2f(.7f,.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.1f, .42f);
    glVertex2f(.1f, .02f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.15f, .4f);
    glVertex2f(.15f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.1f, .02f);
    glVertex2f(.15f, .0f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.7f, .0f);
    glVertex2f(.15f,.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(.7f, .4f);
    glVertex2f(.7f,.0f);
    glEnd();

    glLineWidth(1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2f(.4f, .265f);
    glVertex2f(.37f, .2f);
    glVertex2f(.43f, .2f);
    glEnd();
}

void char_l()
{
    glLineWidth(25);
    glBegin(GL_LINES);
    glColor3ub(135, 206, 235);
    glVertex2f(-.6f, .4f);
    glVertex2f(-.6f, 0);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-.6f, .021f);
    glVertex2f(-.4f, .021f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-.3f, .4f);
    glVertex2f(-.3f, .0f);
    glEnd();
    glLineWidth(1);
}
