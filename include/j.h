background_j()
{
    glBegin(GL_QUADS);
    glColor3ub(72, 61, 139);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void juice()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(.1f, -.4f);
    glVertex2f(.6f, -.4f);
    glVertex2f(.6f, .4f);
    glVertex2f(.1f, .4f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(.1f, -.4f);
    glVertex2f(-.15f, -.3f);
    glVertex2f(-.15f, .5f);
    glVertex2f(.1f, .4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-.15f, .5f);
    glVertex2f(.1f, .4f);
    glVertex2f(.6f, .4f);
    glVertex2f(.35f, .5f);
    glEnd();

    //border******************************************
    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(.1f, .4f);
    glVertex2f(.6f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-.15f, .5f);
    glVertex2f(.35f, .5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-.15f, .5f);
    glVertex2f(.1f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(.6f, .4f);
    glVertex2f(.35f, .5f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(.1f, -.4f);
    glVertex2f(.6f, -.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(.593f, -.4f);
    glVertex2f(.593f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(.1f, -.4f);
    glVertex2f(.1f, .4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-.14f, -.3f);
    glVertex2f(-.14f, .5f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(.1f, -.4f);
    glVertex2f(-.15f, -.3f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0);
    glVertex2f(-.15f, .5f);
    glVertex2f(.35f, .5f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-.143f, .5f);
    glVertex2f(-0.05f, .3f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(.1f, .4f);
    glVertex2f(-0.056f, .3f);
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0f, .44f);
    glVertex2f(-0.05f, .3f);
    glEnd();
    glLineWidth(1);
    glLineWidth(18);
    glBegin(GL_LINES);
    glColor3ub(0, 255, 0);
    glVertex2f(.295f, .45f);
    glVertex2f(.295f, .75f);
    glEnd();
    glLineWidth(1);
    glLineWidth(22);
    glBegin(GL_LINES);
    glColor3ub(0, 255, 0);
    glVertex2f(.6f, .5f);
    glVertex2f(.31f, .74f);
    glEnd();
    glLineWidth(1);
    GLfloat x3= .6;
    GLfloat y3= .519;
    GLfloat radious3 = .01f;
    int ammountOfLIne3= 1000;
    GLfloat twicePI3= 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 255, 0);
    glVertex2f(x3, y3);
    for (int i = 0; i < ammountOfLIne3; i++)
    {
        glVertex2f(x3+ (radious3 * cos(i * twicePI3 / ammountOfLIne3)), y3+ (radious3* sin(i * twicePI3 / ammountOfLIne3)));
    }
    glEnd();

    GLfloat x1 = .295;
    GLfloat y1 = .75;
    GLfloat radious = .022f;
    int ammountOfLIne = 1000;
    GLfloat twicePI = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 255, 0);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    GLfloat x2= .595;
    GLfloat y2= .5;
    GLfloat radious2 = .025f;
    int ammountOfLIne2 = 1000;
    GLfloat twicePI2 = 2.0 * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 204, 0);
    glVertex2f(x2, y2);
    for (int i = 0; i < ammountOfLIne2; i++)
    {
        glVertex2f(x2 + (radious2 * cos(i * twicePI2 / ammountOfLIne2)), y2+ (radious2* sin(i * twicePI2 / ammountOfLIne2)));
    }
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(255,0,0);
    glVertex2f(0.0f, .43f);
    glVertex2f(-0.01f, .453f);
    glVertex2f(0.21f, .44f);

    glEnd();

    glScalef(-.5,-.5,1);
    glTranslatef(-.2,0.5,0.0);
    apple();
}

void char_j()
{
    glLineWidth(4);
    glColor3ub(0, 250, 154);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.6951, 0.44103);
    glVertex2f(0.6951, 0.4);
    glVertex2f(0.6951, 0-.2);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.67636, -0.33438);
    glVertex2f(0.64417, -0.37425);
    glVertex2f(0.59038, -0.39866);
    glVertex2f(0.5476, -0.41168);
    glVertex2f(0.48892, -0.40639);
    glVertex2f(0.44859, -0.39866);
    glVertex2f(0.42169, -0.37994);
    glVertex2f(0.3895, -0.35025);
    glVertex2f(0.36832, -0.32095);
    glVertex2f(0.17559, -0.32095);
    glVertex2f(0.19433, -0.38767);
    glVertex2f(0.22081, -0.43853);
    glVertex2f(0.25586, -0.47595);
    glVertex2f(0.30149, -0.50809);
    glVertex2f(0.35772, -0.52965);
    glVertex2f(0.41925, -0.54267);
    glVertex2f(0.48322, -0.55081);
    glVertex2f(0.5476, -0.54837);
    glVertex2f(0.61198, -0.54023);
    glVertex2f(0.67106, -0.5321);
    glVertex2f(0.72159, -0.51338);
    glVertex2f(0.77537, -0.48409);
    glVertex2f(0.81815, -0.44666);
    glVertex2f(0.85034, -0.4011);
    glVertex2f(0.86909, -0.33967);
    glVertex2f(0.86909, 0.44103);
    glEnd();
    glLineWidth(1);


    glColor3ub(60, 179, 113);
    glBegin(GL_QUADS);
    glVertex2f(0.6951, 0.44103);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.86909, -0.33967);
    glVertex2f(0.86909, 0.44103);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.72159, -0.51338);
    glVertex2f(0.77537, -0.48409);
    glVertex2f(0.81815, -0.44666);
    glVertex2f(0.85034, -0.4011);
    glVertex2f(0.86909, -0.33967);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.72159, -0.51338);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.67636, -0.33438);
    glVertex2f(0.64417, -0.37425);
    glVertex2f(0.59038, -0.39866);
    glVertex2f(0.5476, -0.41168);
    glVertex2f(0.48892, -0.40639);
    glVertex2f(0.44859, -0.39866);
    glVertex2f(0.42169, -0.37994);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.42169, -0.37994);
    glVertex2f(0.25586, -0.47595);
    glVertex2f(0.30149, -0.50809);
    glVertex2f(0.35772, -0.52965);
    glVertex2f(0.41925, -0.54267);
    glVertex2f(0.48322, -0.55081);
    glVertex2f(0.5476, -0.54837);
    glVertex2f(0.61198, -0.54023);
    glVertex2f(0.67106, -0.5321);
    glVertex2f(0.72159, -0.51338);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.42169, -0.37994);
    glVertex2f(0.3895, -0.35025);
    glVertex2f(0.36832, -0.32095);
    glVertex2f(0.17559, -0.32095);
    glVertex2f(0.19433, -0.38767);
    glVertex2f(0.22081, -0.43853);
    glVertex2f(0.25586, -0.47595);
    glEnd();
}

void dot()
{
    glLineWidth(4);
    GLfloat x = -0.09;
    GLfloat y = 0.15955;
    GLfloat radious = .05;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    glColor3ub(0, 250, 154);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(60, 179, 113);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
}

