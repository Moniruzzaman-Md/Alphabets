void background_n()
{
    glBegin(GL_QUADS);
    glColor3ub(252, 189, 215);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}
void notebook()
{
    glScalef(1.5f,1.5f,0.0f);

    //PAGE***************************
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(.1, .1);
    glVertex2f(.1, .4);
    glVertex2f(.3, .4);
    glVertex2f(.3, .1);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.1, .1);
    glVertex2f(.1, .4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-.1, .1);
    glVertex2f(-.1, .4);
    glVertex2f(.1, .4);
    glVertex2f(.1, .1);
    glEnd();

//FREAM******************************************

    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(.3, .1);
    glVertex2f(.32, .08);
    glVertex2f(.32, .36);
    glVertex2f(.3, .4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(.3, .1);
    glVertex2f(.32, .08);
    glVertex2f(.12, .08);
    glVertex2f(.1, .1);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(-.1, .1);
    glVertex2f(-.12, .08);
    glVertex2f(-.12, .38);
    glVertex2f(-.1, .4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(170,170,170);
    glVertex2f(.1, .1);
    glVertex2f(.08, .08);
    glVertex2f(-.12, .08);
    glVertex2f(-.1, .1);
    glEnd();

    //write******************************************

    GLfloat  i;
    GLfloat  j;
    for(i=-0.09f; i<=0.26f; i=i+.05f)
        for(j=0.11; j<=.38; j=j+0.02)
        {
            {
                glBegin(GL_LINES);
                glColor3ub(0,0,0);
                glVertex2f(i, j);
                glVertex2f(i+.02f, j);
                glEnd();
            }
        }

    glLoadIdentity();
}

void char_n()
{
    glLineWidth(4);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.75899, 0.69112);
    glVertex2f(-0.75899, -0.61277);
    glVertex2f(-0.5714, -0.61277);
    glVertex2f(-0.5714, 0.30248);
    glVertex2f(-0.15491, -0.60789);
    glVertex2f(0.01466, -0.60789);
    glVertex2f(0.01466, 0.69112);
    glVertex2f(-0.17479, 0.69112);
    glVertex2f(-0.17479, -0.2286);
    glVertex2f(-0.58569, 0.69112);
    glEnd();




    glBegin(GL_LINE_LOOP);
    glVertex2f(0.21126, 0.31184);
    glVertex2f(0.21126, -0.60789);
    glVertex2f(0.38612, -0.60789);
    glVertex2f(0.38612, -0.09553);
    glVertex2f(0.39512, -0.04873);
    glVertex2f(0.40599, 0.00987);
    glVertex2f(0.43084, 0.04976);
    glVertex2f(0.45755, 0.0872);
    glVertex2f(0.49171, 0.10592);
    glVertex2f(0.52557, 0.12016);
    glVertex2f(0.56843, 0.12016);
    glVertex2f(0.60228, 0.10144);
    glVertex2f(0.62744, 0.07784);
    glVertex2f(0.64172, 0.04284);
    glVertex2f(0.65414, 0.0054);
    glVertex2f(0.66315, -0.04384);
    glVertex2f(0.66315, -0.60789);
    glVertex2f(0.82931, -0.60789);
    glVertex2f(0.82931, 0.07539);
    glVertex2f(0.81503, 0.13155);
    glVertex2f(0.80415, 0.1808);
    glVertex2f(0.77931, 0.23248);
    glVertex2f(0.75074, 0.26748);
    glVertex2f(0.71657, 0.30492);
    glVertex2f(0.67371, 0.3212);
    glVertex2f(0.63085, 0.33544);
    glVertex2f(0.5737, 0.333);
    glVertex2f(0.52929, 0.32364);
    glVertex2f(0.47743, 0.30248);
    glVertex2f(0.44513, 0.27928);
    glVertex2f(0.42556, 0.25568);
    glVertex2f(0.39699, 0.23004);
    glVertex2f(0.38612, 0.20888);
    glVertex2f(0.38612, 0.31184);
    glEnd();
    glLineWidth(1);


}
