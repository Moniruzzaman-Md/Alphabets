void background_c()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 139, 139);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}


float angles=0.0f;
float anglem=0.0f;
float angleh=0.0f;

void clock()
{
    GLfloat x1 = 0;
    GLfloat y1 = 0;
    GLfloat radious = .2f;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;


    glColor3ub(255, 0, 0);
    GLfloat radiousX = .22;
    GLfloat radiousY = .28;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    radiousX = .21;
    radiousY = .24;
    glColor3ub(255, 255, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glLineWidth(2);
    radiousX = .21;
    radiousY = .24;
    glColor3ub(0, 90, 155);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    radiousX = .22;
    radiousY = .28;
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);


    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 90, 155);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    radious = .195f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255, 255, 255);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glLineWidth(2);

    glBegin(GL_LINES);
    glColor3f(0, 0,0 );
    glVertex2f(0, -.16);
    glVertex2f(0, -.2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0,0 );
    glVertex2f(0, .16);
    glVertex2f(0, .2);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0,0 );
    glVertex2f(.2, 0);
    glVertex2f(.16, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0,0 );
    glVertex2f(-.2, 0);
    glVertex2f(-.16, 0);
    glEnd();

    glPushMatrix();
    glRotatef(anglem,0,0,1);

    glBegin(GL_LINES);
    glColor3f(0, 1, 0);
    glVertex2f(.0f, .0f);
    glVertex2f(.16f, .0f);
    glEnd();
    glPopMatrix();
    anglem-=.002;

    glPushMatrix();
    glRotatef(angleh,0,0,1);

    glBegin(GL_LINES);
    glColor3f(0, 0, 1);
    glVertex2f(.0f, .0f);
    glVertex2f(.14f, .0f);
    glEnd();
    glPopMatrix();
    angleh-=.0001;

    glPushMatrix();
    glRotatef(angles,0,0,1);

    glBegin(GL_LINES);
    glColor3ub(255, 0, 0 );
    glVertex2f(.0f, .0f);
    glVertex2f(.17f, .0f);
    glEnd();

    glPopMatrix();
    angles-=.06;

    glLineWidth(1);

    radious = .005f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 0);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();
}

void char_c()
{
    GLfloat x1 = 0;
    GLfloat y1 = 0;
    GLfloat radious = .2f;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    glLineWidth(4);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 255);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 0, 139);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();


    glLineWidth(4);
    radious = .15f;
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 255);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);


    radious = .15f;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 139, 139);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(0, 139, 139);
    glBegin(GL_TRIANGLES);
    glVertex2f(0, 0);
    glVertex2f(.205, -.2);
    glVertex2f(.205, .2);
    glEnd();
}
