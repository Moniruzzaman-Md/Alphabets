void background_d()
{
    glBegin(GL_QUADS);
    glColor3ub(72, 61, 139);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void door()
{
    glLineWidth(4);
    glColor3ub(150, 150, 150);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-.16589, -.90405);
    glVertex2f(-.16589, .50617);
    glVertex2f(-.95916, .50617);
    glVertex2f(-.95916, -.90405);
    glEnd();
    glLineWidth(1);

    glColor3ub(179, 89, 0);
    glBegin(GL_QUADS);
    glVertex2f(-.16589, -.90405);
    glVertex2f(-.16589, .50617);
    glVertex2f(-.95916, .50617);
    glVertex2f(-.95916, -.90405);
    glEnd();

    glLineWidth(3);
    glColor3ub(130, 90, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-.21145, -.85873);
    glVertex2f(-.21145, .46085);
    glVertex2f(-.91074, .46085);
    glVertex2f(-.91074, -.85873);
    glEnd();
    glLineWidth(1);

    glColor3ub(130, 90, 0);
    glBegin(GL_QUADS);
    glVertex2f(-.30501, .0395);
    glVertex2f(-.30501, .37552);
    glVertex2f(-.81963, .37552);
    glVertex2f(-.81963, .0395);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.34277, .0689);
    glVertex2f(-.34277, .33837);
    glVertex2f(-.78229, .33837);
    glVertex2f(-.78229, .0689);
    glEnd();

    glColor3ub(200, 230, 237);
    glBegin(GL_QUADS);
    glVertex2f(-.37478, .1036);
    glVertex2f(-.37478, .29305);
    glVertex2f(-.75028, .29305);
    glVertex2f(-.75028, .1036);
    glEnd();

    glLineWidth(4);
    glColor3ub(130, 90, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-.3321, -.77054);
    glVertex2f(-.3321, -.08544);
    glVertex2f(-.80117, -.08544);
    glVertex2f(-.80117, -.77054);
    glEnd();
    glLineWidth(1);

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-.3321, -.77054);
    glVertex2f(-.3321, -.08544);
    glVertex2f(-.80117, -.08544);
    glVertex2f(-.80117, -.77054);
    glEnd();

    glColor3ub(200, 230, 237);
    glBegin(GL_QUADS);
    glVertex2f(-.36165, -.74686);
    glVertex2f(-.36165, -.57089);
    glVertex2f(-.53852, -.57089);
    glVertex2f(-.53852, -.74686);
    glEnd();

    glColor3ub(200, 230, 237);
    glBegin(GL_QUADS);
    glVertex2f(-.57587, -.74686);
    glVertex2f(-.57587, -.57089);
    glVertex2f(-.76875, -.57089);
    glVertex2f(-.76875, -.74686);
    glEnd();

    glColor3ub(200, 230, 237);
    glBegin(GL_QUADS);
    glVertex2f(-.36165, -.53619);
    glVertex2f(-.36165, -.32551);
    glVertex2f(-.53852, -.32551);
    glVertex2f(-.53852, -.53619);
    glEnd();

    glColor3ub(200, 230, 237);
    glBegin(GL_QUADS);
    glVertex2f(-.57587, -.53619);
    glVertex2f(-.57587, -.32551);
    glVertex2f(-.76875, -.32551);
    glVertex2f(-.76875, -.53619);
    glEnd();

    glColor3ub(200, 230, 237);
    glBegin(GL_QUADS);
    glVertex2f(-.36165, -.28835);
    glVertex2f(-.36165, -.11769);
    glVertex2f(-.53852, -.11769);
    glVertex2f(-.53852, -.28835);
    glEnd();

    glColor3ub(200, 230, 237);
    glBegin(GL_QUADS);
    glVertex2f(-.57587, -.28835);
    glVertex2f(-.57587, -.11769);
    glVertex2f(-.76875, -.11769);
    glVertex2f(-.76875, -.28835);
    glEnd();

    GLfloat x1 = -.34523;
    GLfloat y1 = -.01358;
    GLfloat radious = .04f;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;


    glColor3ub(150, 150, 150);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();
}

void char_capital_d()
{
    glLineWidth(4);
    glColor3ub(127, 255, 212);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.63885, -0.87568);
    glVertex2f(0.63885, 0.84242);
    glVertex2f(-0.1136, 0.84242);
    glVertex2f(-0.19798, 0.83794);
    glVertex2f(-0.28236, 0.82163);
    glVertex2f(-0.37366, 0.79351);
    glVertex2f(-0.44866, 0.76049);
    glVertex2f(-0.52163, 0.72054);
    glVertex2f(-0.57788, 0.66429);
    glVertex2f(-0.63617, 0.60804);
    glVertex2f(-0.68304, 0.53304);
    glVertex2f(-0.71361, 0.46048);
    glVertex2f(-0.74418, 0.38997);
    glVertex2f(-0.76538, 0.33372);
    glVertex2f(-0.78169, 0.26116);
    glVertex2f(-0.79554, 0.19105);
    glVertex2f(-0.79799, -0.12322);
    glVertex2f(-0.78169, -0.21697);
    glVertex2f(-0.76538, -0.31072);
    glVertex2f(-0.74174, -0.39062);
    glVertex2f(-0.72054, -0.44442);
    glVertex2f(-0.69731, -0.50556);
    glVertex2f(-0.65288, -0.57567);
    glVertex2f(-0.606, -0.64619);
    glVertex2f(-0.55424, -0.70448);
    glVertex2f(-0.49309, -0.74932);
    glVertex2f(-0.43684, -0.78682);
    glVertex2f(-0.37122, -0.81494);
    glVertex2f(-0.29418, -0.83369);
    glVertex2f(-0.23059, -0.85244);
    glVertex2f(-0.1348, -0.87568);
    glEnd();
    glLineWidth(1);


    glColor3ub(95, 158, 160);
    glBegin(GL_POLYGON);
    glVertex2f(0.63885, -0.87568);
    glVertex2f(0.63885, 0.84242);
    glVertex2f(-0.1136, 0.84242);
    glVertex2f(-0.19798, 0.83794);
    glVertex2f(-0.28236, 0.82163);
    glVertex2f(-0.37366, 0.79351);
    glVertex2f(-0.44866, 0.76049);
    glVertex2f(-0.52163, 0.72054);
    glVertex2f(-0.57788, 0.66429);
    glVertex2f(-0.63617, 0.60804);
    glVertex2f(-0.68304, 0.53304);
    glVertex2f(-0.71361, 0.46048);
    glVertex2f(-0.74418, 0.38997);
    glVertex2f(-0.76538, 0.33372);
    glVertex2f(-0.78169, 0.26116);
    glVertex2f(-0.79554, 0.19105);
    glVertex2f(-0.79799, -0.12322);
    glVertex2f(-0.78169, -0.21697);
    glVertex2f(-0.76538, -0.31072);
    glVertex2f(-0.74174, -0.39062);
    glVertex2f(-0.72054, -0.44442);
    glVertex2f(-0.69731, -0.50556);
    glVertex2f(-0.65288, -0.57567);
    glVertex2f(-0.606, -0.64619);
    glVertex2f(-0.55424, -0.70448);
    glVertex2f(-0.49309, -0.74932);
    glVertex2f(-0.43684, -0.78682);
    glVertex2f(-0.37122, -0.81494);
    glVertex2f(-0.29418, -0.83369);
    glVertex2f(-0.23059, -0.85244);
    glVertex2f(-0.1348, -0.87568);
    glEnd();

    glLineWidth(4);
    glColor3ub(127, 255, 212);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.28953, -0.59442);
    glVertex2f(0.28953, 0.55424);
    glVertex2f(-0.08996, 0.55424);
    glVertex2f(-0.18371, 0.53793);
    glVertex2f(-0.26116, 0.51429);
    glVertex2f(-0.3223, 0.46497);
    glVertex2f(-0.37366, 0.40179);
    glVertex2f(-0.41361, 0.3223);
    glVertex2f(-0.43481, 0.19553);
    glVertex2f(-0.43236, -0.20067);
    glVertex2f(-0.40668, -0.30828);
    glVertex2f(-0.38059, -0.38817);
    glVertex2f(-0.34105, -0.45624);
    glVertex2f(-0.27747, -0.51494);
    glVertex2f(-0.20736, -0.55244);
    glVertex2f(-0.13928, -0.57323);
    glVertex2f(-0.07855, -0.58994);
    glEnd();
    glLineWidth(1);

    glColor3ub(72, 61, 139);
    glBegin(GL_POLYGON);
    glVertex2f(0.28953, -0.59442);
    glVertex2f(0.28953, 0.55424);
    glVertex2f(-0.08996, 0.55424);
    glVertex2f(-0.18371, 0.53793);
    glVertex2f(-0.26116, 0.51429);
    glVertex2f(-0.3223, 0.46497);
    glVertex2f(-0.37366, 0.40179);
    glVertex2f(-0.41361, 0.3223);
    glVertex2f(-0.43481, 0.19553);
    glVertex2f(-0.43236, -0.20067);
    glVertex2f(-0.40668, -0.30828);
    glVertex2f(-0.38059, -0.38817);
    glVertex2f(-0.34105, -0.45624);
    glVertex2f(-0.27747, -0.51494);
    glVertex2f(-0.20736, -0.55244);
    glVertex2f(-0.13928, -0.57323);
    glVertex2f(-0.07855, -0.58994);
    glEnd();
}
void char_small_d()
{
    glLineWidth(4);
    glColor3ub(127, 255, 212);
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
    glColor3ub(127, 255, 212);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);


    glColor3ub(95, 158, 160);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(95, 158, 160);
    glBegin(GL_QUADS);
    glVertex2f(-0.10901, -0.61357);
    glVertex2f(-0.10901, 0.69249);
    glVertex2f(-0.28931, 0.69249);
    glVertex2f(-0.28931, -0.61357);
    glEnd();

    glLineWidth(4);
    radiousX = .21;
    radiousY = .28;
    glColor3ub(127, 255, 212);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(72, 61, 139);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
}
