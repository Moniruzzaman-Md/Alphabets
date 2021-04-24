void background_i()
{
    glBegin(GL_QUADS);
	glColor3ub(0, 100, 0);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glEnd();
}

void ice_cream()
{
   GLfloat x1 = .15;
	GLfloat y1 = .5;
	GLfloat radious = .15f;
	int ammountOfLIne = 1000;
	GLfloat twicePI = 2.0 * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(77, 17, 0);
	glVertex2f(x1, y1);
	for (int i = 0; i < ammountOfLIne; i++)
	{
    glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
	}
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(77, 17, 0);
	glVertex2f(0, 0);
	glVertex2f(.3, 0);
	glVertex2f(.3, .5);
	glVertex2f(0, .5);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(155, 155, 155);
	glVertex2f(.11, 0);
	glVertex2f(.19, 0);
	glVertex2f(.19, -.3);
	glVertex2f(.11, -.3);
	glEnd();
}

void char_i()
{
    glColor3ub(0, 191, 255);
    glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glVertex2f(-0.95937, 0.96428);
	glVertex2f(-0.95937, 0.82859);
    glVertex2f(-0.68614, 0.82859);
    glVertex2f(-0.68614, -0.79035);
    glVertex2f(-0.95937, -0.79035);
    glVertex2f(-0.95937, -0.94229);
    glVertex2f(-0.26979, -0.94229);
    glVertex2f(-0.26979, -0.79035);
    glVertex2f(-0.53854, -0.79035);
    glVertex2f(-0.53854, 0.82859);
    glVertex2f(-0.26979, 0.82859);
    glVertex2f(-0.26979, 0.96428);
    glEnd();

    glColor3ub(30, 144, 255);
    glBegin(GL_QUADS);
    glVertex2f(-0.95937, 0.96428);
	glVertex2f(-0.95937, 0.82859);
	glVertex2f(-0.26979, 0.82859);
    glVertex2f(-0.26979, 0.96428);

    glVertex2f(-0.95937, -0.79035);
    glVertex2f(-0.95937, -0.94229);
    glVertex2f(-0.26979, -0.94229);
    glVertex2f(-0.26979, -0.79035);

    glVertex2f(-0.68614, 0.82859);
    glVertex2f(-0.68614, -0.79035);
    glVertex2f(-0.53854, -0.79035);
    glVertex2f(-0.53854, 0.82859);
    glEnd();

    glColor3ub(0, 191, 255);
    glLineWidth(4);
	glBegin(GL_LINE_LOOP);
	glVertex2f(0.04613, 0.00876);
	glVertex2f(0.04613, -0.94229);
	glVertex2f(0.19332, -0.94229);
	glVertex2f(0.19332, 0.00876);
    glEnd();

    glColor3ub(30, 144, 255);
    glBegin(GL_QUADS);
	glVertex2f(0.04613, 0.00876);
	glVertex2f(0.04613, -0.94229);
	glVertex2f(0.19332, -0.94229);
	glVertex2f(0.19332, 0.00876);
    glEnd();


    GLfloat x = 0.11851;
    GLfloat y = 0.31955;
    GLfloat radious = .1;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    glColor3ub(0, 191, 255);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(30, 144, 255);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
}
