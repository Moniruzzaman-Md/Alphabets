void background_b()
{
    glBegin(GL_QUADS);
    glColor3ub(143, 188, 143);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}
void bat()
{
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3ub(150, 60, 0);
    glVertex2f(0.242540767497207, -0.279216138001533);
    glVertex2f(0.242540767497207, 0.96303776411095);
    glVertex2f(0.106147737560478, 0.985409723710225);
    glVertex2f(-0.0143191601381303, 0.965071578619974);
    glVertex2f(-0.0143191601381303, -0.279216138001533);
    glVertex2f(0.0692736, -0.341044099075894);
    glVertex2f(0.149, -0.341044099075894);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(150, 150, 150);
    glVertex2f(0.149, -0.341044099075894);
    glVertex2f(0.0692736, -0.341044099075894);
    glVertex2f(0.0692736, -.9);
    glVertex2f(0.149, -.9);
    glEnd();

    glLineWidth(1);

    glBegin(GL_POLYGON);
    glColor3ub(200, 80, 0);
    glVertex2f(0.242540767497207, -0.279216138001533);
    glVertex2f(0.242540767497207, 0.96303776411095);
    glVertex2f(0.106147737560478, 0.985409723710225);
    glVertex2f(-0.0143191601381303, 0.965071578619974);
    glVertex2f(-0.0143191601381303, -0.279216138001533);
    glVertex2f(0.0692736, -0.341044099075894);
    glVertex2f(0.149, -0.341044099075894);
    glEnd();

    glLineWidth(2);
    glColor3ub(150, 60, 0);
    glBegin(GL_LINES);
    glVertex2f(0.106147737560478, 0.985409723710225);
    glVertex2f(0.106147737560478, -0.341044099075894);
    glEnd();
    glLineWidth(1);


    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(0.149, -0.341044099075894);
    glVertex2f(0.0692736, -0.341044099075894);
    glVertex2f(0.0692736, -.9);
    glVertex2f(0.149, -.9);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2f(0.149, -0.341044099075894);
    glVertex2f(0.0692736, -0.341044099075894);
    glVertex2f(0.0692736, -.37);
    glVertex2f(0.149, -.37);
    glEnd();
}

void char_b()
{
    glLineWidth(4);
    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.717818920999468, -0.61357);
    glVertex2f(0.717818920999468, 0.730132343580398);
    glVertex2f(0.383402909096196, 0.730132343580398);
    glVertex2f(0.329443997030644, 0.718675720656584);
    glVertex2f(0.269992261581174, 0.704354942001816);
    glVertex2f(0.214094705968356, 0.676122549796702);
    glVertex2f(0.15852, 0.63152);
    glVertex2f(0.10844, 0.57506);
    glVertex2f(0.08033, 0.51164);
    glVertex2f(0.05997, 0.42203);
    glVertex2f(0.04899, 0.33979);
    glVertex2f(0.0506, 0.2645);
    glVertex2f(0.06547, 0.18431);
    glVertex2f(0.09164, 0.12539);
    glVertex2f(0.13235, 0.05951);
    glVertex2f(0.16046, 0.02923);
    glVertex2f(0.19762, -0.00145);
    glVertex2f(0.23477, -0.02519);
    glVertex2f(0.18631, -0.09352);
    glVertex2f(0.15852, -0.13812);
    glVertex2f(0.13816, -0.20645);
    glVertex2f(0.13429, -0.28378);
    glVertex2f(0.13978, -0.34515);
    glVertex2f(0.15303, -0.41348);
    glVertex2f(0.18081, -0.46995);
    glVertex2f(0.21248, -0.51209);
    glVertex2f(0.2477, -0.54769);
    glVertex2f(0.29972, -0.58042);
    glVertex2f(0.36111, -0.6017);
    glVertex2f(0.42056, -0.61357);
    glEnd();
    glLineWidth(1);


    glColor3ub(200, 80, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.717818920999468, -0.61357);
    glVertex2f(0.717818920999468, 0.730132343580398);
    glVertex2f(0.383402909096196, 0.730132343580398);
    glVertex2f(0.329443997030644, 0.718675720656584);
    glVertex2f(0.269992261581174, 0.704354942001816);
    glVertex2f(0.214094705968356, 0.676122549796702);
    glVertex2f(0.15852, 0.63152);
    glVertex2f(0.10844, 0.57506);
    glVertex2f(0.08033, 0.51164);
    glVertex2f(0.05997, 0.42203);
    glVertex2f(0.04899, 0.33979);
    glVertex2f(0.0506, 0.2645);
    glVertex2f(0.06547, 0.18431);
    glVertex2f(0.09164, 0.12539);
    glVertex2f(0.13235, 0.05951);
    glVertex2f(0.16046, 0.02923);
    glVertex2f(0.19762, -0.00145);
    glVertex2f(0.23477, -0.02519);
    glVertex2f(0.18631, -0.09352);
    glVertex2f(0.15852, -0.13812);
    glVertex2f(0.13816, -0.20645);
    glVertex2f(0.13429, -0.28378);
    glVertex2f(0.13978, -0.34515);
    glVertex2f(0.15303, -0.41348);
    glVertex2f(0.18081, -0.46995);
    glVertex2f(0.21248, -0.51209);
    glVertex2f(0.2477, -0.54769);
    glVertex2f(0.29972, -0.58042);
    glVertex2f(0.36111, -0.6017);
    glVertex2f(0.42056, -0.61357);
    glEnd();


    glLineWidth(4);
    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.51523, -0.38034);
    glVertex2f(0.51717, -0.10047);
    glVertex2f(0.43348, -0.10047);
    glVertex2f(0.3889, -0.11929);
    glVertex2f(0.34786, -0.15694);
    glVertex2f(0.32944, -0.21095);
    glVertex2f(0.32751, -0.26987);
    glVertex2f(0.34625, -0.33574);
    glVertex2f(0.38146, -0.36152);
    glVertex2f(0.42799, -0.38034);
    glEnd();
    glLineWidth(1);

    glColor3ub(143, 188, 143);
    glBegin(GL_POLYGON);
    glVertex2f(0.51523, -0.38034);
    glVertex2f(0.51717, -0.10047);
    glVertex2f(0.43348, -0.10047);
    glVertex2f(0.3889, -0.11929);
    glVertex2f(0.34786, -0.15694);
    glVertex2f(0.32944, -0.21095);
    glVertex2f(0.32751, -0.26987);
    glVertex2f(0.34625, -0.33574);
    glVertex2f(0.38146, -0.36152);
    glVertex2f(0.42799, -0.38034);
    glEnd();

    glLineWidth(4);
    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.51717, 0.1303);
    glVertex2f(0.51717, 0.4785);
    glVertex2f(0.39245, 0.4785);
    glVertex2f(0.33688, 0.45967);
    glVertex2f(0.29423, 0.43594);
    glVertex2f(0.26256, 0.38439);
    glVertex2f(0.2477, 0.3136);
    glVertex2f(0.25868, 0.24323);
    glVertex2f(0.28679, 0.18185);
    glVertex2f(0.33688, 0.15157);
    glVertex2f(0.38502, 0.1303);
    glEnd();
    glLineWidth(1);

    glColor3ub(143, 188, 143);
    glBegin(GL_POLYGON);
    glVertex2f(0.51717, 0.1303);
    glVertex2f(0.51717, 0.4785);
    glVertex2f(0.39245, 0.4785);
    glVertex2f(0.33688, 0.45967);
    glVertex2f(0.29423, 0.43594);
    glVertex2f(0.26256, 0.38439);
    glVertex2f(0.2477, 0.3136);
    glVertex2f(0.25868, 0.24323);
    glVertex2f(0.28679, 0.18185);
    glVertex2f(0.33688, 0.15157);
    glVertex2f(0.38502, 0.1303);
    glEnd();


    glLineWidth(4);
    glColor3ub(255, 165, 0);
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

    glLineWidth(3);
    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);


    glColor3ub(200, 80, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(200, 80, 0);
    glBegin(GL_QUADS);
    glVertex2f(-0.10901, -0.61357);
    glVertex2f(-0.10901, 0.69249);
    glVertex2f(-0.28931, 0.69249);
    glVertex2f(-0.28931, -0.61357);
    glEnd();

    glLineWidth(4);
    radiousX = .21;
    radiousY = .28;
    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(143, 188, 143);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

}

