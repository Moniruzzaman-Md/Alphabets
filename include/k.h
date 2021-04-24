void background_k()
{
    glBegin(GL_QUADS);
	glColor3ub(0, 128, 128);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
	glEnd();
}

void key()
{
	//key**************************************************************
    GLfloat x1 = .0;
	GLfloat y1 = .074;
	GLfloat radious = .17f;
	int ammountOfLIne = 1000;
	GLfloat twicePI = 2.0 * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(176, 196, 222);
	glVertex2f(x1, y1);
	for (int i = 0; i < ammountOfLIne; i++)
	{
		glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
	}
	glEnd();


	 GLfloat x2 =-.08;
	GLfloat y2 =.074;
	GLfloat radious1 = .065f;
	int ammountOfLIne1 = 1000;
	GLfloat twicePI1 = 2.0 * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 128, 128);
	glVertex2f(x2, y2);
	for (int i = 0; i < ammountOfLIne1; i++)
	{
    glVertex2f(x2 + (radious1 * cos(i * twicePI1 / ammountOfLIne1)), y2 + (radious1 * sin(i * twicePI1 / ammountOfLIne1)));
	}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(176, 196, 222);
	glVertex2f(.1f,.15f);
	glVertex2f(.7f, .15f);
	glVertex2f(.7f, .1f);
	glVertex2f(.1f, .1f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(176, 196, 222);
	glVertex2f(.7f, .1f);
	glVertex2f(.1f, .1f);
	glVertex2f(.1f,.0f);
	glVertex2f(.6f, .0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 128, 128);
	glVertex2f(.58f, .0f);
	glVertex2f(.5f, .0f);
	glVertex2f(.55f,.04f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 128, 128);
	glVertex2f(.49f, .0f);
	glVertex2f(.45f, .0f);
	glVertex2f(.47f,.03f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 128, 128);
	glVertex2f(.41f, .0f);
	glVertex2f(.35f, .0f);
	glVertex2f(.4f,.043f);
	glEnd();


	glBegin(GL_TRIANGLES);
	glColor3ub(0, 128, 128);
	glVertex2f(.34f, .0f);
	glVertex2f(.3f, .0f);
	glVertex2f(.31f,.02f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 128, 128);;
	glVertex2f(.28f, .0f);
	glVertex2f(.2f, .0f);
	glVertex2f(.23f,.04f);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(.18f, 0.135f);
	glVertex2f(.67f, .135f);
	glVertex2f(.67f, .115f);
	glVertex2f(.18f, .115f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex2f(.18f, 0.095f);
	glVertex2f(.65f, .095f);
	glVertex2f(.65f, .075f);
	glVertex2f(.18f, .075f);
	glEnd();
}

void char_k()
{
    glLineWidth(25);
	glBegin(GL_LINES);
    glColor3ub(179, 0, 89);
    glVertex2f(-.6, -.1);
	glVertex2f(-.6, .25);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(179, 0, 89);
    glVertex2f(-.6, .075);
	glVertex2f(-.46, .25);
	glEnd();

	glBegin(GL_LINES);
    glColor3ub(179, 0, 89);
    glVertex2f(-.6, .075);
	glVertex2f(-.46, -.1);
	glEnd();

    glLineWidth(1);
}
