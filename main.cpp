#include<windows.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846
#include "include/essentials.h"

void keyHandeler(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'A':
    case 'a':
        glutDisplayFunc(a);
        PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'B':
    case 'b':
        glutDisplayFunc(b);
        PlaySound("b.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'C':
    case 'c':
        glutDisplayFunc(c);
        PlaySound("c.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'D':
    case 'd':
        glutDisplayFunc(d);
        PlaySound("d.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'E':
    case 'e':
        glutDisplayFunc(e);
        PlaySound("e.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'F':
    case 'f':
        glutDisplayFunc(f);
        PlaySound("f.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'G':
    case 'g':
        glutDisplayFunc(g);
        PlaySound("g.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'H':
    case 'h':
        glutDisplayFunc(h);
        PlaySound("h.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'I':
    case 'i':
        glutDisplayFunc(i);
        PlaySound("i.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'J':
    case 'j':
        glutDisplayFunc(j);
        PlaySound("j.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'K':
    case 'k':
        glutDisplayFunc(k);
        PlaySound("k.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'L':
    case 'l':
        glutDisplayFunc(l);
        PlaySound("l.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'M':
    case 'm':
        glutDisplayFunc(m);
        PlaySound("m.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'N':
    case 'n':
        glutDisplayFunc(n);
        PlaySound("n.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'O':
    case 'o':
        glutDisplayFunc(o);
        PlaySound("o.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'P':
    case 'p':
        glutDisplayFunc(p);
        PlaySound("p.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'Q':
    case 'q':
        glutDisplayFunc(q);
        PlaySound("q.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'R':
    case 'r':
        glutDisplayFunc(r);
        PlaySound("r.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'S':
    case 's':
        glutDisplayFunc(s);
        PlaySound("s.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'T':
    case 't':
        glutDisplayFunc(t);
        PlaySound("t.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'U':
    case 'u':
        glutDisplayFunc(u);
        PlaySound("u.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'V':
    case 'v':
        glutDisplayFunc(v);
        PlaySound("v.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'W':
    case 'w':
        glutDisplayFunc(w);
        PlaySound("w.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'X':
    case 'x':
        glutDisplayFunc(x1);
        PlaySound("x.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'Y':
    case 'y':
        glutDisplayFunc(y1);
        PlaySound("y.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    case 'Z':
    case 'z':
        glutDisplayFunc(z);
        PlaySound("z.wav", NULL, SND_ASYNC|SND_FILENAME);
        break;
    default:
        break;
    }
    glutPostRedisplay();
}


int main(int argc, char** argv)
{
    glutInitWindowPosition(300, 50);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Alphabets");
    glutDisplayFunc(welcome_window);
    glutKeyboardFunc(keyHandeler);
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}
