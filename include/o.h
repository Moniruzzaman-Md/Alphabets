#include<windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846

void background_o()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 161, 225);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void orange()
{
    GLfloat x1 = -0.27726;
    GLfloat y1 = -0.25246;
    GLfloat radious = .68f;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    glLineWidth(4);
    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(255, 140, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radious * cos(i * twicePI / ammountOfLIne)), y1 + (radious * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.31301, 0.20024);
    glVertex2f(-0.27767, 0.20024);
    glVertex2f(-0.24273, 0.20717);
    glVertex2f(-0.2147, 0.22348);
    glVertex2f(-0.19601, 0.24224);
    glVertex2f(-0.19357, 0.26345);
    glVertex2f(-0.17732, 0.23531);
    glVertex2f(-0.15173, 0.22838);
    glVertex2f(-0.12817, 0.22593);
    glVertex2f(-0.10257, 0.23286);
    glVertex2f(-0.0721, 0.24021);
    glVertex2f(-0.08591, 0.2659);
    glVertex2f(-0.10501, 0.27773);
    glVertex2f(-0.12126, 0.28915);
    glVertex2f(-0.14442, 0.30587);
    glVertex2f(-0.1237, 0.30791);
    glVertex2f(-0.11192, 0.32667);
    glVertex2f(-0.10257, 0.35032);
    glVertex2f(-0.13507, 0.34787);
    glVertex2f(-0.15376, 0.34339);
    glVertex2f(-0.2472, 0.34339);
    glVertex2f(-0.2732, 0.35032);
    glVertex2f(-0.2988, 0.34787);
    glVertex2f(-0.31505, 0.35481);
    glVertex2f(-0.30367, 0.33605);
    glVertex2f(-0.28945, 0.31525);
    glVertex2f(-0.27767, 0.30097);
    glVertex2f(-0.25654, 0.30097);
    glVertex2f(-0.28498, 0.27528);
    glVertex2f(-0.30123, 0.261);
    glVertex2f(-0.31058, 0.23776);
    glEnd();

    glColor3ub(0, 128, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21, 0.311);
    glVertex2f(-0.31301, 0.20024);
    glVertex2f(-0.27767, 0.20024);
    glVertex2f(-0.24273, 0.20717);
    glVertex2f(-0.2147, 0.22348);
    glVertex2f(-0.19601, 0.24224);
    glVertex2f(-0.19357, 0.26345);
    glVertex2f(-0.17732, 0.23531);
    glVertex2f(-0.15173, 0.22838);
    glVertex2f(-0.12817, 0.22593);
    glVertex2f(-0.10257, 0.23286);
    glVertex2f(-0.0721, 0.24021);
    glVertex2f(-0.08591, 0.2659);
    glVertex2f(-0.10501, 0.27773);
    glVertex2f(-0.12126, 0.28915);
    glVertex2f(-0.14442, 0.30587);
    glVertex2f(-0.1237, 0.30791);
    glVertex2f(-0.11192, 0.32667);
    glVertex2f(-0.10257, 0.35032);
    glVertex2f(-0.13507, 0.34787);
    glVertex2f(-0.15376, 0.34339);
    glVertex2f(-0.2472, 0.34339);
    glVertex2f(-0.2732, 0.35032);
    glVertex2f(-0.2988, 0.34787);
    glVertex2f(-0.31505, 0.35481);
    glVertex2f(-0.30367, 0.33605);
    glVertex2f(-0.28945, 0.31525);
    glVertex2f(-0.27767, 0.30097);
    glVertex2f(-0.25654, 0.30097);
    glVertex2f(-0.28498, 0.27528);
    glVertex2f(-0.30123, 0.261);
    glVertex2f(-0.31058, 0.23776);
    glVertex2f(-0.31301, 0.20024);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(4);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.04937, 0.55383);
    glVertex2f(0.11112, 0.55097);
    glVertex2f(0.18587, 0.56199);
    glVertex2f(0.25819, 0.57789);
    glVertex2f(0.31425, 0.59665);
    glVertex2f(0.376, 0.63458);
    glVertex2f(0.42435, 0.6721);
    glVertex2f(0.467, 0.7447);
    glVertex2f(0.52307, 0.85236);
    glVertex2f(0.56857, 0.98654);
    glVertex2f(0.51779, 0.92741);
    glVertex2f(0.45075, 0.88988);
    glVertex2f(0.38657, 0.86297);
    glVertex2f(0.31709, 0.83891);
    glVertex2f(0.23422, 0.80628);
    glVertex2f(0.18059, 0.77161);
    glVertex2f(0.13225, 0.72838);
    glVertex2f(0.09203, 0.6721);
    glVertex2f(0.07334, 0.61582);
    glEnd();

    glColor3ub(0, 175, 0);
    glLineWidth(3);
    glBegin(GL_POLYGON);
    glVertex2f(0.456, 0.817);
    glVertex2f(0.04937, 0.55383);
    glVertex2f(0.11112, 0.55097);
    glVertex2f(0.18587, 0.56199);
    glVertex2f(0.25819, 0.57789);
    glVertex2f(0.31425, 0.59665);
    glVertex2f(0.376, 0.63458);
    glVertex2f(0.42435, 0.6721);
    glVertex2f(0.467, 0.7447);
    glVertex2f(0.52307, 0.85236);
    glVertex2f(0.56857, 0.98654);
    glVertex2f(0.51779, 0.92741);
    glVertex2f(0.45075, 0.88988);
    glVertex2f(0.38657, 0.86297);
    glVertex2f(0.31709, 0.83891);
    glVertex2f(0.23422, 0.80628);
    glVertex2f(0.18059, 0.77161);
    glVertex2f(0.13225, 0.72838);
    glVertex2f(0.09203, 0.6721);
    glVertex2f(0.07334, 0.61582);
    glVertex2f(0.04937, 0.55383);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(-0.20779, 0.43556);
    glVertex2f(-0.11679, 0.46533);
    glEnd();
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-0.11679, 0.46533);
    glVertex2f(-0.01482, 0.50815);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.01482, 0.50815);
    glVertex2f(0.05221, 0.55383);
    glEnd();
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(0.05221, 0.55383);
    glVertex2f(0.20212, 0.64804);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.20212, 0.64804);
    glVertex2f(0.33294, 0.73939);
    glVertex2f(0.33294, 0.73939);
    glVertex2f(0.42435, 0.82259);
    glVertex2f(0.42435, 0.82259);
    glVertex2f(0.49626, 0.88703);
    glEnd();


    glLineWidth(4);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.24964, 0.65742);
    glVertex2f(-0.2732, 0.65742);
    glVertex2f(-0.27564, 0.646);
    glVertex2f(-0.27076, 0.6199);
    glVertex2f(-0.24964, 0.5261);
    glVertex2f(-0.24517, 0.49551);
    glVertex2f(-0.24273, 0.4535);
    glVertex2f(-0.23786, 0.40905);
    glVertex2f(-0.24517, 0.30097);
    glVertex2f(-0.23339, 0.28221);
    glVertex2f(-0.21226, 0.27283);
    glVertex2f(-0.18667, 0.27773);
    glVertex2f(-0.16798, 0.28915);
    glVertex2f(-0.1631, 0.31035);
    glVertex2f(-0.18911, 0.39967);
    glVertex2f(-0.19845, 0.43474);
    glVertex2f(-0.19845, 0.46044);
    glVertex2f(-0.20536, 0.49796);
    glVertex2f(-0.2147, 0.53344);
    glVertex2f(-0.22161, 0.573);
    glVertex2f(-0.23095, 0.61786);
    glEnd();

    glColor3ub(0, 175, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.21714, 0.4535);
    glVertex2f(-0.24964, 0.65742);
    glVertex2f(-0.2732, 0.65742);
    glVertex2f(-0.27564, 0.646);
    glVertex2f(-0.27076, 0.6199);
    glVertex2f(-0.24964, 0.5261);
    glVertex2f(-0.24517, 0.49551);
    glVertex2f(-0.24273, 0.4535);
    glVertex2f(-0.23786, 0.40905);
    glVertex2f(-0.24517, 0.30097);
    glVertex2f(-0.23339, 0.28221);
    glVertex2f(-0.21226, 0.27283);
    glVertex2f(-0.18667, 0.27773);
    glVertex2f(-0.16798, 0.28915);
    glVertex2f(-0.1631, 0.31035);
    glVertex2f(-0.18911, 0.39967);
    glVertex2f(-0.19845, 0.43474);
    glVertex2f(-0.19845, 0.46044);
    glVertex2f(-0.20536, 0.49796);
    glVertex2f(-0.2147, 0.53344);
    glVertex2f(-0.22161, 0.573);
    glVertex2f(-0.23095, 0.61786);
    glVertex2f(-0.24964, 0.65742);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.10015, 0.44371);
    glVertex2f(0.1485, 0.40334);
    glVertex2f(0.194, 0.37642);
    glVertex2f(0.23422, 0.36011);
    glVertex2f(0.27688, 0.36011);
    glVertex2f(0.32238, 0.36827);
    glVertex2f(0.38941, 0.40619);
    glVertex2f(0.45644, 0.47838);
    glVertex2f(0.4215, 0.47063);
    glVertex2f(0.39185, 0.46533);
    glVertex2f(0.35447, 0.47308);
    glVertex2f(0.31709, 0.49184);
    glVertex2f(0.27688, 0.50285);
    glVertex2f(0.23137, 0.51345);
    glVertex2f(0.18303, 0.51345);
    glVertex2f(0.1485, 0.49469);
    glEnd();


    glColor3ub(0, 175, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.39753, 0.44616);
    glVertex2f(0.10015, 0.44371);
    glVertex2f(0.1485, 0.40334);
    glVertex2f(0.194, 0.37642);
    glVertex2f(0.23422, 0.36011);
    glVertex2f(0.27688, 0.36011);
    glVertex2f(0.32238, 0.36827);
    glVertex2f(0.38941, 0.40619);
    glVertex2f(0.45644, 0.47838);
    glVertex2f(0.4215, 0.47063);
    glVertex2f(0.39185, 0.46533);
    glVertex2f(0.35447, 0.47308);
    glVertex2f(0.31709, 0.49184);
    glVertex2f(0.27688, 0.50285);
    glVertex2f(0.23137, 0.51345);
    glVertex2f(0.18303, 0.51345);
    glVertex2f(0.1485, 0.49469);
    glVertex2f(0.10015, 0.44371);
    glEnd();

    glColor3ub(0, 0, 0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(-0.07901, 0.48124);
    glVertex2f(-0.03107, 0.45717);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-0.03107, 0.45717);
    glVertex2f(0.0254, 0.44371);
    glEnd();
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(0.0254, 0.44371);
    glVertex2f(0.08146, 0.44086);
    glEnd();
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2f(0.08146, 0.44086);
    glVertex2f(0.19115, 0.44086);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(0.19115, 0.44086);
    glVertex2f(0.29028, 0.44086);
    glVertex2f(0.29028, 0.44086);
    glVertex2f(0.37072, 0.45962);
    glEnd();
}

void char_o()
{
    glLineWidth(5);
    GLfloat x1 = 0;
    GLfloat y1 = 0;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    GLfloat radiousX = .3;
    GLfloat radiousY = .4;

    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();


    glColor3ub(255, 140, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();


    radiousX = .2;
    radiousY = .37;
    glColor3ub(255, 165, 0);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(0, 161, 225);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();
}
