#define DEG2RAD 3.14159/180.0

void background_z()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glEnd();
}

void zero()
{
    glTranslatef(0.0f,0.0f,0.0f);
    glPointSize(9.0f);
    glColor3f(1.20f,0.15f,0.300f);
    glBegin(GL_LINE_LOOP);
    GLfloat radiusX = 0.3f, radiusY = 0.4f;
    for(float i=0.0;i<=360.0;i+=0.1)
    {
        float rad = i*DEG2RAD;
        glVertex2f(0.0f,0.0f);
        glVertex2f(cos(rad)*radiusX,sin(rad)*radiusY);
    }

    glEnd();
}
