background_p()
{
  glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glEnd();
}

void pencil()
{
  glBegin(GL_QUADS);
    glColor3ub(255, 153, 0);
	glVertex2f(.5f, .7f);
	glVertex2f(.5f, -0.2f);
	glVertex2f(.35f, -0.2f);
	glVertex2f(.35f,.7f);
	glEnd();

    glLineWidth(6);
    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
	glVertex2f(.465f, .7f);
	glVertex2f(.465f,-.2f);
	glEnd();

	 glBegin(GL_LINES);
    glColor3ub(255, 255,255);
	glVertex2f(.385f, .7f);
	glVertex2f(.385f,-.2f);
	glEnd();

    glLineWidth(1);

    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
	glVertex2f(.5f, .51f);
	glVertex2f(.35f,.51f);
	glEnd();
    glLineWidth(1);

    glLineWidth(38);

    glBegin(GL_LINES);
    glColor3ub(155, 155,155);
	glVertex2f(.5f, .56f);
	glVertex2f(.35f,.56f);
	glEnd();
    glLineWidth(1);

     glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
	glVertex2f(.5f, .61f);
	glVertex2f(.35f,.61f);
	glEnd();
    glLineWidth(1);

    glLineWidth(30);

    glBegin(GL_LINES);
    glColor3ub(255, 51, 51);
	glVertex2f(.5f, .655f);
	glVertex2f(.35f,.655f);
	glEnd();
    glLineWidth(1);
     glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(255, 255,255);
	glVertex2f(.7f, -.2f);
	glVertex2f(.35f,-.2f);
	glEnd();
    glLineWidth(1);


    GLfloat x1 = .425;
	GLfloat y1 = .69;
	GLfloat radious = .075f;
	int ammountOfLIne = 1000;
	GLfloat twicePI = 2.0 * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 51, 51);
	glVertex2f(x1, y1);
	for (int i = 0; i < ammountOfLIne; i++)
	{
		glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
	}
	glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(255, 179, 179);
	glVertex2f(.5f, -.2f);
	glVertex2f(.35f, -0.2f);
	glVertex2f(.425f, -0.4f);
	glEnd();


     glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
	glVertex2f(.46f, -.3f);
	glVertex2f(.39f, -0.3f);
	glVertex2f(.425f, -0.4f);
	glEnd();
}

void char_p()
{
    glLineWidth(4);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.10901, -0.61357);
    glVertex2f(-0.10901, 0.69249);
    glVertex2f(-0.28931, 0.69249);
    glVertex2f(-0.28931, -0.61357);
    glEnd();
    glLineWidth(1);


    GLfloat x = -0.47122;
    GLfloat y = 0.25018;
    GLfloat radiousX = .36;
    GLfloat radiousY = .45;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    glLineWidth(4);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);


    glColor3ub(100, 100, 100);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(100, 100, 100);
    glBegin(GL_QUADS);
    glVertex2f(-0.10901, -0.61357);
    glVertex2f(-0.10901, 0.69249);
    glVertex2f(-0.28931, 0.69249);
    glVertex2f(-0.28931, -0.61357);
    glEnd();

    glLineWidth(4);
    radiousX = .21;
    radiousY = .28;
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(255, 255, 255);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
}
