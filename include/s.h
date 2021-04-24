void shipBase();
void smallBox();
void mediumBox();
void bigBox();

void background_s(){
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(1,1);
glVertex2f(-1,1);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glEnd();
}
void ship(){

glTranslated(0,0,0);

smallBox();
glTranslated(0,.28-.22,0);
smallBox();
glLoadIdentity();
glTranslated(0,.28-.16,0);
smallBox();
glLoadIdentity();
glTranslated(0,.28-.1,0);
smallBox();
glLoadIdentity();

mediumBox();

glTranslated(-.75+.44,0,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.44,.06,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.44,.12,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.44,.18,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.30,0,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.30,.06,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.30,.12,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.30,.18,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.16,0,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.16,.06,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.16,.12,0);
smallBox();
glLoadIdentity();

glTranslated(-.75+.16,.18,0);
smallBox();
glLoadIdentity();

bigBox();

glTranslated(-.75-.24,0,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.24,.06,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.24,.12,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.24,.18,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.38,0,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.38,.06,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.38,.12,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.38,.18,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.52,0,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.52,.06,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.52,.12,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.52,.18,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.66,0,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.66,.06,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.66,.12,0);
smallBox();
glLoadIdentity();

glTranslated(-.75-.66,.18,0);
smallBox();
glLoadIdentity();
glLoadIdentity();


glScalef(1.1,.7,0);
glTranslated(.05,-.12,0);
shipBase();
glLoadIdentity();

}

void shipBase(){
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(.7,-.6);
glVertex2f(.8,-.3);
glVertex2f(-.42,-.3);
glVertex2f(-.42,-.6);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(-.42,-.6);
glVertex2f(-.42,-.3);
glVertex2f(-.5,-.25);
glVertex2f(-.95,-.25);
glVertex2f(-.68,-.59);
glVertex2f(-.7,-.6);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-.42,-.3);
glVertex2f(-.42,-.29);
glVertex2f(-.5,-.24);
glVertex2f(-.5,-.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-.5,-.25);
glVertex2f(-.5,-.24);
glVertex2f(-1,-.24);
glVertex2f(-1,-.25);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(1,-.45);
glVertex2f(1,-.43);
glVertex2f(-1,-.43);
glVertex2f(-1,-.45);
glEnd();
}

void smallBox(){
glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex2f(.85,-.287);
glVertex2f(.85,-.23);
glVertex2f(.72,-.23);
glVertex2f(.72,-.287);
glEnd();
}

void mediumBox(){
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(.68,-.287);
glVertex2f(.68,0);
glVertex2f(.6,-0);
glVertex2f(.58,-.1);
glVertex2f(.58,-.287);
glEnd();
}

void bigBox(){
glBegin(GL_POLYGON);
glColor3ub(0,0,0);
glVertex2f(.09,-.287);
glVertex2f(.09,-.1);
glVertex2f(.05,0);
glVertex2f(-.1,-0);
glVertex2f(-.1,-.287);
glEnd();
}
