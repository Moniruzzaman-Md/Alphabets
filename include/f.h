void background_f()
{
    glBegin(GL_QUADS);
    glColor3ub(150, 150, 200);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

GLfloat speed = 0;

void fan()
{

    ///stand
    glLineWidth(15);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(0, -.6);
    glEnd();
    glLineWidth(1);

    glLineWidth(35);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(-.15, -.6);
    glVertex2f(.15, -.6);
    glEnd();
    glLineWidth(1);

    glPointSize(4);
    glColor3ub(255,255,255);
    glBegin(GL_POINTS);
    glVertex2f(0,-.4);
    glVertex2f(0,-.45);
    glVertex2f(0,-.35);
    glEnd();
    glPointSize(1);


    ///wings
    glPushMatrix();
    glRotatef(speed, 0, 0, 1);

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(.2, .05);
    glVertex2f(.2, .2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(-.2, -.05);
    glVertex2f(-.2, -.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(.05, -.2);
    glVertex2f(.2, -.2);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 0);
    glVertex2f(-.05, .2);
    glVertex2f(-.2, .2);
    glEnd();
    speed+=0.2;
    glPopMatrix();

    ///case

    glLineWidth(3);
    glColor3ub(50, 50, 50);
    GLfloat x = 0;
    GLfloat y = 0;
    GLfloat radious = .3;
    int ammountOfLIne = 47;
    GLfloat twicePI = 4 * PI;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x, y);
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(150, 150, 150);
    radious = .05;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(150, 0, 0);
    radious = .04;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(100, 100, 100);
    radious = .03;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
}

void char_f()
{
    glLineWidth(4);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.78709, 0.62915);
    glVertex2f(-0.78709, -0.64494);
    glVertex2f(-0.54656, -0.64494);
    glVertex2f(-0.54656, -0.14517);
    glVertex2f(-0.14878, -0.14517);
    glVertex2f(-0.14878, 0.10124);
    glVertex2f(-0.55102, 0.10124);
    glVertex2f(-0.55102, 0.39008);
    glVertex2f(-0.04354, 0.39008);
    glVertex2f(-0.04354, 0.62915);
    glEnd();
    glLineWidth(1);

    glColor3ub(50, 50, 100);
    glBegin(GL_QUADS);
    glVertex2f(-0.78709, 0.62915);
    glVertex2f(-0.78709, -0.64494);
    glVertex2f(-0.54656, -0.64494);
    glVertex2f(-0.54656, 0.62915);

    glVertex2f(-0.78709, -0.14517);
    glVertex2f(-0.14878, -0.14517);
    glVertex2f(-0.14878, 0.10124);
    glVertex2f(-0.78709, 0.10124);

    glVertex2f(-0.78709, 0.39008);
    glVertex2f(-0.04354, 0.39008);
    glVertex2f(-0.04354, 0.62915);
    glVertex2f(-0.78709, 0.62915);
    glEnd();

    glLineWidth(4);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.85157, 0.52594);
    glVertex2f(0.80728, 0.55898);
    glVertex2f(0.74877, 0.58958);
    glVertex2f(0.68823, 0.61039);
    glVertex2f(0.64841, 0.61773);
    glVertex2f(0.51026, 0.61528);
    glVertex2f(0.44241, 0.601);
    glVertex2f(0.37699, 0.5753);
    glVertex2f(0.32336, 0.53532);
    glVertex2f(0.27907, 0.49085);
    glVertex2f(0.23682, 0.43455);
    glVertex2f(0.21122, 0.37825);
    glVertex2f(0.19456, 0.32195);
    glVertex2f(0.18521, 0.2681);
    glVertex2f(0.17587, 0.2118);
    glVertex2f(0.17587, 0.15061);
    glVertex2f(0.17587, 0.09675);

    glVertex2f(0.06373, 0.09675);
    glVertex2f(0.06373, -0.14273);
    glVertex2f(0.17587, -0.14273);
    glVertex2f(0.17587, -0.64494);
    glVertex2f(0.41681, -0.64494);
    glVertex2f(0.41681, -0.14273);
    glVertex2f(0.71383, -0.14273);
    glVertex2f(0.71383, 0.09675);

    glVertex2f(0.41681, 0.09675);
    glVertex2f(0.41925, 0.14367);
    glVertex2f(0.42169, 0.19507);
    glVertex2f(0.4355, 0.25382);
    glVertex2f(0.45419, 0.30074);
    glVertex2f(0.48223, 0.34317);
    glVertex2f(0.51961, 0.37132);
    glVertex2f(0.5643, 0.38519);
    glVertex2f(0.6155, 0.38764);
    glVertex2f(0.66222, 0.37825);
    glVertex2f(0.70692, 0.35949);
    glVertex2f(0.73699, 0.34521);
    glEnd();
    glLineWidth(1);


    glColor3ub(50, 50, 100);
    glBegin(GL_QUADS);
    glVertex2f(0.06373, 0.09675);
    glVertex2f(0.06373, -0.14273);
    glVertex2f(0.71383, -0.14273);
    glVertex2f(0.71383, 0.09675);

    glVertex2f(0.17587, -0.14273);
    glVertex2f(0.17587, -0.64494);
    glVertex2f(0.41681, -0.64494);
    glVertex2f(0.41681, -0.14273);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(0.85157, 0.52594);
    glVertex2f(0.80728, 0.55898);
    glVertex2f(0.74877, 0.58958);
    glVertex2f(0.68823, 0.61039);
    glVertex2f(0.64841, 0.61773);
    glVertex2f(0.51026, 0.61528);
    glVertex2f(0.44241, 0.601);
    glVertex2f(0.37699, 0.5753);
    glVertex2f(0.32336, 0.53532);
    glVertex2f(0.27907, 0.49085);
    glVertex2f(0.23682, 0.43455);
    glVertex2f(0.21122, 0.37825);
    glVertex2f(0.19456, 0.32195);
    glVertex2f(0.18521, 0.2681);
    glVertex2f(0.17587, 0.2118);
    glVertex2f(0.17587, 0.15061);
    glVertex2f(0.17587, 0.09675);

    glVertex2f(0.41681, 0.09675);
    glVertex2f(0.41925, 0.14367);
    glVertex2f(0.42169, 0.19507);
    glVertex2f(0.4355, 0.25382);
    glVertex2f(0.45419, 0.30074);
    glVertex2f(0.48223, 0.34317);
    glVertex2f(0.51961, 0.37132);
    glVertex2f(0.5643, 0.38519);
    glVertex2f(0.6155, 0.38764);
    glVertex2f(0.66222, 0.37825);
    glVertex2f(0.70692, 0.35949);
    glVertex2f(0.73699, 0.34521);
    glEnd();

    glLineWidth(4);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.73699, 0.34521);
    glVertex2f(0.70692, 0.35949);
    glVertex2f(0.66222, 0.37825);
    glVertex2f(0.6155, 0.38764);
    glVertex2f(0.5643, 0.38519);
    glVertex2f(0.51961, 0.37132);
    glVertex2f(0.48223, 0.34317);
    glVertex2f(0.45419, 0.30074);
    glVertex2f(0.4355, 0.25382);
    glVertex2f(0.42169, 0.19507);
    glVertex2f(0.41925, 0.14367);
    glVertex2f(0.41681, 0.09675);

    glColor3ub(150, 150, 200);

    glVertex2f(0.41681, 0.09675);
    glVertex2f(0.73699, 0.34521);

    glEnd();
    glLineWidth(1);

    glColor3ub(150, 150, 200);
    glBegin(GL_POLYGON);
    glVertex2f(0.73699, 0.34521);
    glVertex2f(0.70692, 0.35949);
    glVertex2f(0.66222, 0.37825);
    glVertex2f(0.6155, 0.38764);
    glVertex2f(0.5643, 0.38519);
    glVertex2f(0.51961, 0.37132);
    glVertex2f(0.48223, 0.34317);
    glVertex2f(0.45419, 0.30074);
    glVertex2f(0.4355, 0.25382);
    glVertex2f(0.42169, 0.19507);
    glVertex2f(0.41925, 0.14367);
    glVertex2f(0.41681, 0.09675);
    glEnd();

}
