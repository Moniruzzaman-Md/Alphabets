#include<windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846

void background_q()
{
    glBegin(GL_QUADS);
    glColor3ub(32, 178, 170);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void quill()
{
    glLineWidth(4);
    glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.63226, 0.95953);
    glVertex2f(0.56923, 0.95953);
    glVertex2f(0.52246, 0.95505);
    glVertex2f(0.47814, 0.94323);
    glVertex2f(0.42894, 0.92938);
    glVertex2f(0.35655, 0.90127);
    glVertex2f(0.31182, 0.87071);
    glVertex2f(0.27685, 0.84708);
    glVertex2f(0.23497, 0.80267);
    glVertex2f(0.19959, 0.76519);
    glVertex2f(0.17885, 0.72771);
    glVertex2f(0.16015, 0.69715);
    glVertex2f(0.139, 0.65967);
    glVertex2f(0.12477, 0.79575);
    glVertex2f(0.08736, 0.77008);
    glVertex2f(0.05239, 0.74197);
    glVertex2f(0.02189, 0.70652);
    glVertex2f(-0.00861, 0.66212);
    glVertex2f(-0.03423, 0.61282);
    glVertex2f(-0.04602, 0.57778);
    glVertex2f(-0.05741, 0.53337);
    glVertex2f(-0.05985, 0.47919);
    glVertex2f(-0.0997, 0.64582);
    glVertex2f(-0.1489, 0.59652);
    glVertex2f(-0.1977, 0.53582);
    glVertex2f(-0.23511, 0.47226);
    glVertex2f(-0.25625, 0.41359);
    glVertex2f(-0.28187, 0.32926);
    glVertex2f(-0.30058, 0.37611);
    glVertex2f(-0.31237, 0.42296);
    glVertex2f(-0.31725, 0.47715);
    glVertex2f(-0.36849, 0.40422);
    glVertex2f(-0.42216, 0.31052);
    glVertex2f(-0.45754, 0.23352);
    glVertex2f(-0.47625, 0.16548);
    glVertex2f(-0.49699, 0.07177);
    glVertex2f(-0.5348, 0.16548);
    glVertex2f(-0.55107, 0.23352);
    glVertex2f(-0.57913, 0.15366);
    glVertex2f(-0.59783, 0.0787);
    glVertex2f(-0.60962, 0.01311);
    glVertex2f(-0.61898, -0.12297);
    glVertex2f(-0.67021, 0.02003);
    glVertex2f(-0.68648, -0.048);
    glVertex2f(-0.69136, -0.11115);
    glVertex2f(-0.69136, -0.17186);
    glVertex2f(-0.67509, -0.24927);
    glVertex2f(-0.72389, -0.17675);
    glVertex2f(-0.72633, -0.2399);
    glVertex2f(-0.7125, -0.30305);
    glVertex2f(-0.6938, -0.35927);
    glVertex2f(-0.6633, -0.41794);
    glVertex2f(-0.63036, -0.46031);
    glVertex2f(-0.70315, -0.42731);
    glVertex2f(-0.65395, -0.52834);
    glVertex2f(-0.7125, -0.5422);
    glVertex2f(-0.63036, -0.5866);
    glVertex2f(-0.68445, -0.63346);
    glVertex2f(-0.58157, -0.63346);
    glVertex2f(-0.52748, -0.64283);
    glVertex2f(-0.41525, -0.67583);
    glVertex2f(-0.4364, -0.61716);
    glVertex2f(-0.31237, -0.62205);
    glVertex2f(-0.37784, -0.55401);
    glVertex2f(-0.27252, -0.51653);
    glVertex2f(-0.34531, -0.48842);
    glVertex2f(-0.03179, -0.39227);
    glVertex2f(-0.11149, -0.39471);
    glVertex2f(-0.16517, -0.39227);
    glVertex2f(-0.21884, -0.3829);
    glVertex2f(-0.09034, -0.34053);
    glVertex2f(0.00562, -0.30101);
    glVertex2f(0.06662, -0.26801);
    glVertex2f(-0.01796, -0.2843);
    glVertex2f(-0.0879, -0.29164);
    glVertex2f(-0.13955, -0.2843);
    glVertex2f(-0.06229, -0.26353);
    glVertex2f(0.02433, -0.24479);
    glVertex2f(0.09915, -0.21871);
    glVertex2f(0.17885, -0.18123);
    glVertex2f(0.10606, -0.1906);
    glVertex2f(0.07109, -0.18856);
    glVertex2f(0.00806, -0.1743);
    glVertex2f(0.07353, -0.16045);
    glVertex2f(0.15527, -0.13234);
    glVertex2f(0.22562, -0.10423);
    glVertex2f(0.29556, -0.06186);
    glVertex2f(0.37526, 0.00129);
    glVertex2f(0.32606, 0.01066);
    glVertex2f(0.29556, 0.02737);
    glVertex2f(0.25367, 0.05059);
    glVertex2f(0.44073, 0.12311);
    glVertex2f(0.50864, 0.16792);
    glVertex2f(0.44764, 0.17241);
    glVertex2f(0.39844, 0.18666);
    glVertex2f(0.36794, 0.19807);
    glVertex2f(0.46635, 0.24044);
    glVertex2f(0.53873, 0.28037);
    glVertex2f(0.61599, 0.35533);
    glVertex2f(0.57614, 0.35044);
    glVertex2f(0.5367, 0.36226);
    glVertex2f(0.48953, 0.38793);
    glVertex2f(0.58102, 0.42541);
    glVertex2f(0.64161, 0.47471);
    glVertex2f(0.68837, 0.5403);
    glVertex2f(0.63714, 0.51911);
    glVertex2f(0.59037, 0.50771);
    glVertex2f(0.54808, 0.51219);
    glVertex2f(0.6042, 0.58267);
    glVertex2f(0.63714, 0.66212);
    glVertex2f(0.6534, 0.73463);
    glVertex2f(0.66032, 0.80023);
    glVertex2f(0.65584, 0.85645);
    glVertex2f(0.64649, 0.92693);
    glEnd();


    glColor3ub(173, 216, 230);
    glBegin(GL_POLYGON);
    glVertex2f(.3, .51);
    glVertex2f(0.63226, 0.95953);
    glVertex2f(0.56923, 0.95953);
    glVertex2f(0.52246, 0.95505);
    glVertex2f(0.47814, 0.94323);
    glVertex2f(0.42894, 0.92938);
    glVertex2f(0.35655, 0.90127);
    glVertex2f(0.31182, 0.87071);
    glVertex2f(0.27685, 0.84708);
    glVertex2f(0.23497, 0.80267);
    glVertex2f(0.19959, 0.76519);
    glVertex2f(0.17885, 0.72771);
    glVertex2f(0.16015, 0.69715);
    glVertex2f(0.139, 0.65967);
    glVertex2f(0.54808, 0.51219);
    glVertex2f(0.6042, 0.58267);
    glVertex2f(0.63714, 0.66212);
    glVertex2f(0.6534, 0.73463);
    glVertex2f(0.66032, 0.80023);
    glVertex2f(0.65584, 0.85645);
    glVertex2f(0.64649, 0.92693);
    glVertex2f(0.63226, 0.95953);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(.102, .271);
    glVertex2f(.3, .51);
    glVertex2f(0.139, 0.65967);
    glVertex2f(0.12477, 0.79575);
    glVertex2f(0.08736, 0.77008);
    glVertex2f(0.05239, 0.74197);
    glVertex2f(0.02189, 0.70652);
    glVertex2f(-0.00861, 0.66212);
    glVertex2f(-0.03423, 0.61282);
    glVertex2f(-0.04602, 0.57778);
    glVertex2f(-0.05741, 0.53337);
    glVertex2f(-0.05985, 0.47919);
    glVertex2f(0.36794, 0.19807);
    glVertex2f(0.46635, 0.24044);
    glVertex2f(0.53873, 0.28037);
    glVertex2f(0.61599, 0.35533);
    glVertex2f(0.57614, 0.35044);
    glVertex2f(0.5367, 0.36226);
    glVertex2f(0.48953, 0.38793);
    glVertex2f(0.58102, 0.42541);
    glVertex2f(0.64161, 0.47471);
    glVertex2f(0.68837, 0.5403);
    glVertex2f(0.63714, 0.51911);
    glVertex2f(0.59037, 0.50771);
    glVertex2f(0.54808, 0.51219);
    glVertex2f(.3, .51);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-.27, -.123);
    glVertex2f(.102, .271);
    glVertex2f(-0.05985, 0.47919);
    glVertex2f(-0.0997, 0.64582);
    glVertex2f(-0.1489, 0.59652);
    glVertex2f(-0.1977, 0.53582);
    glVertex2f(-0.23511, 0.47226);
    glVertex2f(-0.25625, 0.41359);
    glVertex2f(-0.28187, 0.32926);
    glVertex2f(-0.30058, 0.37611);
    glVertex2f(-0.31237, 0.42296);
    glVertex2f(-0.31725, 0.47715);
    glVertex2f(-0.36849, 0.40422);
    glVertex2f(-0.42216, 0.31052);
    glVertex2f(-0.45754, 0.23352);
    glVertex2f(-0.47625, 0.16548);
    glVertex2f(-0.49699, 0.07177);
    glVertex2f(0.00806, -0.1743);
    glVertex2f(0.07353, -0.16045);
    glVertex2f(0.15527, -0.13234);
    glVertex2f(0.22562, -0.10423);
    glVertex2f(0.29556, -0.06186);
    glVertex2f(0.37526, 0.00129);
    glVertex2f(0.32606, 0.01066);
    glVertex2f(0.29556, 0.02737);
    glVertex2f(0.25367, 0.05059);
    glVertex2f(0.44073, 0.12311);
    glVertex2f(0.50864, 0.16792);
    glVertex2f(0.44764, 0.17241);
    glVertex2f(0.39844, 0.18666);
    glVertex2f(0.36794, 0.19807);
    glVertex2f(.102, .271);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-.4982, -.212);
    glVertex2f(-.27, -.123);
    glVertex2f(-0.49699, 0.07177);
    glVertex2f(-0.5348, 0.16548);
    glVertex2f(-0.55107, 0.23352);
    glVertex2f(-0.57913, 0.15366);
    glVertex2f(-0.59783, 0.0787);
    glVertex2f(-0.60962, 0.01311);
    glVertex2f(-0.61898, -0.12297);
    glVertex2f(-0.13955, -0.2843);
    glVertex2f(-0.06229, -0.26353);
    glVertex2f(0.02433, -0.24479);
    glVertex2f(0.09915, -0.21871);
    glVertex2f(0.17885, -0.18123);
    glVertex2f(0.10606, -0.1906);
    glVertex2f(0.07109, -0.18856);
    glVertex2f(0.00806, -0.1743);
    glVertex2f(-.27, -.123);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-.484, -.348);
    glVertex2f(-.4982, -.212);
    glVertex2f(-0.61898, -0.12297);
    glVertex2f(-0.67021, 0.02003);
    glVertex2f(-0.68648, -0.048);
    glVertex2f(-0.69136, -0.11115);
    glVertex2f(-0.69136, -0.17186);
    glVertex2f(-0.67509, -0.24927);
    glVertex2f(-0.21884, -0.3829);
    glVertex2f(-0.09034, -0.34053);
    glVertex2f(0.00562, -0.30101);
    glVertex2f(0.06662, -0.26801);
    glVertex2f(-0.01796, -0.2843);
    glVertex2f(-0.0879, -0.29164);
    glVertex2f(-0.13955, -0.2843);
    glVertex2f(-.4982, -.212);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-.5, -.46);
    glVertex2f(-.484, -.348);
    glVertex2f(-0.67509, -0.24927);
    glVertex2f(-0.72389, -0.17675);
    glVertex2f(-0.72633, -0.2399);
    glVertex2f(-0.7125, -0.30305);
    glVertex2f(-0.6938, -0.35927);
    glVertex2f(-0.6633, -0.41794);
    glVertex2f(-0.63036, -0.46031);
    glVertex2f(-0.34531, -0.48842);
    glVertex2f(-0.03179, -0.39227);
    glVertex2f(-0.11149, -0.39471);
    glVertex2f(-0.16517, -0.39227);
    glVertex2f(-0.21884, -0.3829);
    glVertex2f(-.484, -.348);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-.54, -.55);
    glVertex2f(-.5, -.46);
    glVertex2f(-0.63036, -0.46031);
    glVertex2f(-0.70315, -0.42731);
    glVertex2f(-0.65395, -0.52834);
    glVertex2f(-0.7125, -0.5422);
    glVertex2f(-0.63036, -0.5866);
    glVertex2f(-0.68445, -0.63346);
    glVertex2f(-0.58157, -0.63346);
    glVertex2f(-0.52748, -0.64283);
    glVertex2f(-0.41525, -0.67583);
    glVertex2f(-0.4364, -0.61716);
    glVertex2f(-0.31237, -0.62205);
    glVertex2f(-0.37784, -0.55401);
    glVertex2f(-0.27252, -0.51653);
    glVertex2f(-0.34531, -0.48842);
    glVertex2f(-.5, -.46);
    glEnd();


    glLineWidth(3);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.60474, -0.93576);
    glVertex2f(-0.59295, -0.89828);
    glVertex2f(-0.56977, -0.85631);
    glVertex2f(-0.55107, -0.8282);
    glVertex2f(-0.54863, -0.75527);
    glVertex2f(-0.53684, -0.67583);
    glVertex2f(-0.52057, -0.59394);
    glVertex2f(-0.50186, -0.53038);
    glVertex2f(-0.46893, -0.44849);
    glVertex2f(-0.4364, -0.38045);
    glVertex2f(-0.39654, -0.31038);
    glVertex2f(-0.35222, -0.2399);
    glVertex2f(-0.3079, -0.1906);
    glVertex2f(-0.26805, -0.13927);
    glVertex2f(-0.20705, -0.07815);
    glVertex2f(-0.16029, -0.02682);
    glVertex2f(-0.11352, 0.0294);
    glVertex2f(-0.0692, 0.06933);
    glVertex2f(-0.02, 0.11618);
    glVertex2f(0.03124, 0.17729);
    glVertex2f(0.07801, 0.2217);
    glVertex2f(0.12274, 0.26855);
    glVertex2f(0.18089, 0.34596);

    glVertex2f(0.22765, 0.39974);
    glVertex2f(0.26994, 0.46045);
    glVertex2f(0.33053, 0.55456);
    glVertex2f(0.37282, 0.62015);
    glVertex2f(0.28865, 0.49589);
    glVertex2f(0.24635, 0.43722);
    glVertex2f(0.19959, 0.37856);
    glVertex2f(0.14591, 0.31785);
    glVertex2f(0.08736, 0.25226);
    glVertex2f(0.04547, 0.20744);
    glVertex2f(-0.01064, 0.15855);
    glVertex2f(-0.06676, 0.09989);
    glVertex2f(-0.11596, 0.05059);
    glVertex2f(-0.16964, 0.00129);
    glVertex2f(-0.23755, -0.07123);

    glVertex2f(-0.28675, -0.12052);
    glVertex2f(-0.33108, -0.16493);
    glVertex2f(-0.37784, -0.21667);
    glVertex2f(-0.41769, -0.26353);
    glVertex2f(-0.46689, -0.3336);
    glVertex2f(-0.5043, -0.40164);
    glVertex2f(-0.5348, -0.47416);
    glVertex2f(-0.56042, -0.55401);
    glVertex2f(-0.58157, -0.62653);
    glVertex2f(-0.59539, -0.70394);
    glVertex2f(-0.60718, -0.77401);
    glEnd();
    glLineWidth(1);

    glBegin(GL_POLYGON);
    glVertex2f(-.56245, -.62653);
    glVertex2f(-0.60474, -0.93576);
    glVertex2f(-0.59295, -0.89828);
    glVertex2f(-0.56977, -0.85631);
    glVertex2f(-0.55107, -0.8282);
    glVertex2f(-0.54863, -0.75527);
    glVertex2f(-0.53684, -0.67583);
    glVertex2f(-0.52057, -0.59394);
    glVertex2f(-0.50186, -0.53038);
    glVertex2f(-0.46893, -0.44849);
    glVertex2f(-0.4364, -0.38045);
    glVertex2f(-0.39654, -0.31038);
    glVertex2f(-0.35222, -0.2399);
    glVertex2f(-0.28675, -0.12052);
    glVertex2f(-0.33108, -0.16493);
    glVertex2f(-0.37784, -0.21667);
    glVertex2f(-0.41769, -0.26353);
    glVertex2f(-0.46689, -0.3336);
    glVertex2f(-0.5043, -0.40164);
    glVertex2f(-0.5348, -0.47416);
    glVertex2f(-0.56042, -0.55401);
    glVertex2f(-0.58157, -0.62653);
    glVertex2f(-0.59539, -0.70394);
    glVertex2f(-0.60718, -0.77401);
    glVertex2f(-0.60474, -0.93576);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-.04439, .11415);
    glVertex2f(-0.35222, -0.2399);
    glVertex2f(-0.3079, -0.1906);
    glVertex2f(-0.26805, -0.13927);
    glVertex2f(-0.20705, -0.07815);
    glVertex2f(-0.16029, -0.02682);
    glVertex2f(-0.11352, 0.0294);
    glVertex2f(-0.0692, 0.06933);
    glVertex2f(-0.02, 0.11618);
    glVertex2f(0.03124, 0.17729);
    glVertex2f(0.07801, 0.2217);
    glVertex2f(0.12274, 0.26855);
    glVertex2f(0.18089, 0.34596);

    glVertex2f(-0.06676, 0.09989);
    glVertex2f(-0.11596, 0.05059);
    glVertex2f(-0.16964, 0.00129);
    glVertex2f(-0.23755, -0.07123);
    glVertex2f(-0.28675, -0.12052);
    glVertex2f(-0.35222, -0.2399);

    glEnd();
}

void char_q()
{
    glLineWidth(4);
    glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.43233, -0.08599);
    glVertex2f(-0.12525, -0.59942);
    glVertex2f(0.07172, -0.4938);
    glVertex2f(-0.25167, 0.01719);
    glEnd();

    glColor3ub(173, 216, 230);
    glBegin(GL_QUADS);
    glVertex2f(-0.43233, -0.08599);
    glVertex2f(-0.12525, -0.59942);
    glVertex2f(0.07172, -0.4938);
    glVertex2f(-0.25167, 0.01719);
    glEnd();


    GLfloat x1 = -.44661;
    GLfloat y1 = .05266;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;

    GLfloat radiousX = .5;
    GLfloat radiousY = .6;
    glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(173, 216, 230);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();



    radiousX = .3;
    radiousY = .4;
    glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();


    glColor3ub(32, 178, 170);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1, y1);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x1 + (radiousX * cos(i * twicePI / ammountOfLIne)), y1 + (radiousY * sin(i * twicePI / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(173, 216, 230);
    glBegin(GL_QUADS);
    glVertex2f(-0.43233, -0.08599);
    glVertex2f(-0.12525, -0.59942);
    glVertex2f(0.07172, -0.4938);
    glVertex2f(-0.25167, 0.01719);
    glEnd();
}

void char_small_q()
{
    glLineWidth(4);
    glColor3ub(100, 100, 100);
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
    glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);


    glColor3ub(173, 216, 230);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(173, 216, 230);
    glBegin(GL_QUADS);
    glVertex2f(-0.10901, -0.61357);
    glVertex2f(-0.10901, 0.69249);
    glVertex2f(-0.28931, 0.69249);
    glVertex2f(-0.28931, -0.61357);
    glEnd();

    glLineWidth(4);
    radiousX = .21;
    radiousY = .28;
    glColor3ub(100, 100, 100);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
    glLineWidth(1);

    glColor3ub(32, 178, 170);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();
}

