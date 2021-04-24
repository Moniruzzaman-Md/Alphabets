#include <windows.h>
#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>
#include<iostream>

using namespace std;

#include "../include/a.h"
#include "../include/b.h"
#include "../include/c.h"
#include "../include/d.h"
#include "../include/e.h"
#include "../include/f.h"
#include "../include/g.h"
#include "../include/h.h"
#include "../include/i.h"
#include "../include/j.h"
#include "../include/k.h"
#include "../include/l.h"
#include "../include/m.h"
#include "../include/n.h"
#include "../include/o.h"
#include "../include/p.h"
#include "../include/q.h"
#include "../include/r.h"
#include "../include/s.h"
#include "../include/t.h"
#include "../include/u.h"
#include "../include/v.h"
#include "../include/w.h"
#include "../include/x.h"
#include "../include/y.h"
#include "../include/z.h"


using namespace std;

void Idle()
{
    glutPostRedisplay();
}

int rng()
{
    return rand() % 500 + 50;
}

void background()
{
    glBegin(GL_QUADS);
    glColor3ub(153, 0, 76);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void drawText(const char *text, int length, int x, int y)
{
    glMatrixMode(GL_PROJECTION);
    double *matrix = new double[16];
    glGetDoublev(GL_PROJECTION_MATRIX, matrix);
    glLoadIdentity();
    glOrtho(0,600,0,600,-5,5);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(x,y);
    for(int i=0; i<length; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,(int)text[i]);
    }
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glLoadMatrixd(matrix);
    glMatrixMode(GL_MODELVIEW);
}

void welcome_window()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background();

    string text="A";
    glColor3ub(255,0,0);
    drawText(text.data(), text.size(), rng(), rng());

    text="E";
    glColor3ub(255,255,51);
    drawText(text.data(), text.size(), rng(), rng());

    text="I";
    glColor3ub(102,0,204);
    drawText(text.data(), text.size(), rng(), rng());

    text="O";
    glColor3ub(0,255,0);
    drawText(text.data(), text.size(), rng(), rng());

    text="U";
    glColor3ub(0,0,255);
    drawText(text.data(), text.size(), rng(), rng());

    text="ALPHABETS";
    glColor3ub(255,255,255);
    drawText(text.data(), text.size(), 240, 300);


    glFlush();

}


void a()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_a();

    glScalef(-1, -1, 1);
    glTranslated(0, .3, 0);
    apple();
    glLoadIdentity();

    string text="APPLE";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 420, 150);

    glScalef(-1, -1, 1);
    glScalef(.5, .5, 1);
    glTranslated(.9, 0, 0);
    char_a();
    glLoadIdentity();

    glFlush();
}

void b()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_b();

    glScalef(-1, -1, 1);
    glScalef(.8, .8, 1);
    glTranslated(-.8, -.25, 0);
    bat();
    glLoadIdentity();

    string text="BAT";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 440, 90);

    glScalef(-1, -1, 1);
    glScalef(.6, .6, 1);
    glTranslated(.4, 0, 0);
    char_b();
    glLoadIdentity();

    glFlush();
}

void c()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_c();

    glScalef(1.5, 1.5, 1);
    glTranslated(.4, 0, 0);
    clock();
    glLoadIdentity();

    string text="CLOCK";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 440, 130);

    glScalef(2, 2, 1);
    glTranslated(-.29, 0, 0);
    char_c();
    glLoadIdentity();

    glScalef(1.2, 1.2, 1);
    glTranslated(0, -.11, 0);
    char_c();
    glLoadIdentity();

    glFlush();
}

void d()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_d();

    glScalef(-1, -1, 1);
    door();
    glLoadIdentity();

    glScalef(-1, -1, 1);
    glScalef(.4, .5, 1);
    glTranslated(1.8, 0.1, 0);
    char_capital_d();
    glLoadIdentity();

    glScalef(1, -1, 1);
    glScalef(.6, .6, 1);
    glTranslated(.3, 0, 0);
    char_small_d();
    glLoadIdentity();

    string text="DOOR";
    glColor3ub(255, 255, 255);
    drawText(text.data(), text.size(), 440, 100);

    glFlush();
}

void e()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_e();

    glScalef(-1, -1, 1);
    glScalef(.7, .7, 1);
    glTranslated(-.95, 0, 0);
    egg();
    glLoadIdentity();

    string text="EGG";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 480, 130);

    glScalef(-1, -1, 1);
    glScalef(.7, .7, 1);
    glTranslatef(.5, .2, 0);
    char_e();
    glLoadIdentity();

    glFlush();
}

void f()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_f();

    glTranslatef(.6, .2, 0);
    fan();
    glLoadIdentity();

    string text="FAN";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 455, 130);

    glScalef(.7, .8, 1);
    glTranslatef(-.45, 0, 0);
    char_f();
    glLoadIdentity();

    glFlush();
}

void g()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_g();

    glScalef(.8, .8, 1);
    glTranslatef(.8, 0.1, 0);
    guitar();
    glLoadIdentity();

    string text="GUITAR";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 440, 80);

    glScalef(.65, .9, 1);
    glTranslatef(-.5, -.2, 0);
    char_g();
    glLoadIdentity();

    glFlush();
}

void h()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_h();

    string text="HAT";
    glColor3ub(255,255,255);
    drawText(text.data(), text.size(), 490, 460);

    glScalef(.8, .8, 1);
    glTranslated(0, -.45, 0);
    char_h();
    glLoadIdentity();

    glScalef(.5, .5, 1);
    glTranslated(.6, .8, 0);
    hat();
    glLoadIdentity();

    glFlush();
}

void i()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_i();

    glScalef(1.2, 1.2, 1);
    glTranslatef(.2, -.1, 0);
    ice_cream();
    glLoadIdentity();

    string text="ICE-CREAM";
    glColor3ub(255,255,255);
    drawText(text.data(), text.size(), 360, 120);

    glScalef(.5, .6, 1);
    glTranslated(-.2, 0, 0);
    char_i();
    glLoadIdentity();

    glFlush();
}

void j()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_j();
    glTranslated(.3, -.1, 0);
    juice();
    glLoadIdentity();

    string text="Apple Juice";
    glColor3ub(255,0,0);
    drawText(text.data(), text.size(), 430, 350);

    text="JUICE";
    glColor3ub(255, 255, 255);
    drawText(text.data(), text.size(), 430, 110);

    glTranslated(-1, 0, 0);
    glScalef(.6, .8, 1);
    char_j();

    glScalef(.8, .8, 1);
    glTranslated(1.1, -.4, 0);
    char_j();
    glLoadIdentity();

    dot();

    glFlush();
}

void k()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_k();

    glTranslated(.2, 0, 0);
    key();
    glLoadIdentity();

    string text="KEY";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 430, 250);

    glScalef(2, 2, 1);
    glTranslated(.17, 0, 0);
    char_k();
    glLoadIdentity();

    glScalef(1.5, 1.5, 1);
    glTranslated(.32, -.04, 0);
    char_k();
    glLoadIdentity();

    glFlush();
}

void l()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_l();

    glScalef(.7, 1.5, 1);
    glTranslated(.3, -.3, 0);
    lock();
    glLoadIdentity();

    string text="LOCK";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 420, 130);

    glScalef(2, 2, 1);
    glTranslated(.25, -.2, 0);
    char_l();
    glLoadIdentity();

    glFlush();
}

void m()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_m();

    glScalef(1.5, 1.5, 1);
    glTranslated(.2, .2, 0);
    moon();
    glLoadIdentity();

    glScalef(2, 2, 1);
    glTranslated(-.5, -.5, 0);
    stars();
    glLoadIdentity();

    string text="MOON";
    glColor3ub(255,255,255);
    drawText(text.data(), text.size(), 420, 330);

    glTranslated(0, -.7, 0);
    char_m();
    glLoadIdentity();

    glFlush();
}

void n()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_n();

    glTranslated(.4, -.4, 0);
    notebook();
    glLoadIdentity();

    glScalef(.6, .6, 1);
    glTranslated(-.6, 0, 0);
    char_n();
    glLoadIdentity();

    string text="NOTEBOOK";
    glColor3ub(0,0,0);
    drawText(text.data(), text.size(), 400, 170);


    glFlush();
}

void o()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_o();

    glScalef(.6, .6, 1);
    glTranslated(-.69, .2, 0);
    orange();
    glLoadIdentity();

    glTranslated(.2, 0, 0);
    char_o();
    glLoadIdentity();

    glScalef(.6, .6, 1);
    glTranslated(1.25, -0.2, 0);
    char_o();
    glLoadIdentity();

    string text="ORANGE";
    glColor3ub(255, 255, 255);
    drawText(text.data(), text.size(), 70, 130);

    glFlush();
}

void p()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_p();
    glTranslated(.2, 0, 0);
    pencil();
    glLoadIdentity();

    string text="PENCIL";
    glColor3ub(0, 0, 0);
    drawText(text.data(), text.size(), 450, 130);

    glScalef(-.8, .8, 1);
    glTranslated(1.2, .1, 0);
    char_p();
    glLoadIdentity();

    glScalef(-.6, .6, 1);
    glTranslated(.4, -.1, 0);
    char_p();
    glLoadIdentity();

    glFlush();
}

void q()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_q();

    glScalef(.4, .8, 1);
    glTranslated(1.7, .2, 0);
    quill();
    glLoadIdentity();

    string text="QUILL";
    glColor3ub(255, 255, 255);
    drawText(text.data(), text.size(), 400, 100);

    glScalef(.7, .7, 1);
    glTranslatef(-.4, 0, 0);
    char_q();
    glLoadIdentity();

    glScalef(.6, .6, 1);
    glTranslated(.5, -.35, 0);
    char_small_q();
    glLoadIdentity();

    glFlush();
}

void r()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_r();
    rocket();

    glFlush();
}

void s()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_s();
    ship();

    glFlush();
}

void t()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_t();
    tv();

    glFlush();
}

void u()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_u();
    umbrella();

    glFlush();
}

void v()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_v();
    volceno();

    glFlush();
}

void w()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_w();
    wall();

    glFlush();
}

void x1()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_x();
    xylophone();

    glFlush();
}

void y1()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_y();
    yardstick();

    glFlush();
}

void z()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1, 1, 1, 1);

    background_z();
    zero();

    glFlush();
}
