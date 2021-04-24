void background_e()
{
    glBegin(GL_QUADS);
    glColor3ub(85, 107, 47);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}
void egg()
{
    GLfloat x = 0;
    GLfloat y = 0;
    GLfloat radiousX = .4;
    GLfloat radiousY = .54;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    glLineWidth(3);
    glColor3ub(85, 85, 85);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(242, 242, 242);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    x = 0;
    y = .6;
    radiousX = .4;
    radiousY = .05;

    glColor3ub(200, 200, 200);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
}

void char_e()
{
    glColor3ub(0, 255, 255);
    glLineWidth(2);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.79833, -0.74455);
    glVertex2f(0.79833, 0.3192);
    glVertex2f(0.00429, 0.3192);
    glVertex2f(0.00429, 0.15053);
    glVertex2f(0.59952, 0.15053);
    glVertex2f(0.59952, -0.14485);
    glVertex2f(0.08373, -0.1424);
    glVertex2f(0.08373, -0.31351);
    glVertex2f(0.59952, -0.31351);
    glVertex2f(0.59952, -0.56407);
    glVertex2f(0.03933, -0.56407);
    glVertex2f(0.03933, -0.74455);
    glEnd();
    glLineWidth(1);

    glColor3ub(0, 139, 139);
    glBegin(GL_QUADS);
    glVertex2f(0.79833, -0.74455);
    glVertex2f(0.79833, 0.3192);
    glVertex2f(0.59952, 0.3192);
    glVertex2f(0.59952, -0.74455);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.79833, 0.3192);
    glVertex2f(0.00429, 0.3192);
    glVertex2f(0.00429, 0.15053);
    glVertex2f(0.79833, 0.15053);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.79833, -0.14485);
    glVertex2f(0.08373, -0.1424);
    glVertex2f(0.08373, -0.31351);
    glVertex2f(0.79833, -0.31351);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(0.79833, -0.74455);
    glVertex2f(0.79833, -0.56407);
    glVertex2f(0.03933, -0.56407);
    glVertex2f(0.03933, -0.74455);
    glEnd();


    GLfloat x = -0.4646;
    GLfloat y = -0.05359;
    GLfloat radiousX = .36;
    GLfloat radiousY = .39;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    glLineWidth(3);
    glColor3ub(0, 255, 255);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(0, 139, 139);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();


    radiousX = .23;
    radiousY = .28;
    glLineWidth(3);
    glColor3ub(0, 255, 255);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);


    glColor3ub(85, 107, 47);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(0, 139, 139);
    glBegin(GL_QUADS);
    glVertex2f(-0.759, -0.14933);
    glVertex2f(-0.15619, -0.14933);
    glVertex2f(-0.15619, -0.02303);
    glVertex2f(-0.759, -0.02303);
    glEnd();

    glColor3ub(85, 107, 47);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.40804, -0.024);
    glVertex2f(-0.80235, 0.12738);
    glVertex2f(-0.84235, -0.024);
    glEnd();
}
