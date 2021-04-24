void background_g()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 139, 139);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glEnd();
}

void guitar()
{
    glLineWidth(3);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);

    glVertex2f(0.06016, 0.16123);

    glVertex2f(-0.11571, 0.16373);
    glVertex2f(-0.16713, 0.14458);
    glVertex2f(-0.21446, 0.11586);
    glVertex2f(-0.252, 0.08215);
    glVertex2f(-0.2871, 0.0297);
    glVertex2f(-0.30831, -0.02066);
    glVertex2f(-0.31525, -0.0756);
    glVertex2f(-0.30342, -0.11181);
    glVertex2f(-0.29158, -0.16176);
    glVertex2f(-0.2822, -0.20505);

    glVertex2f(-0.28954, -0.24334);
    glVertex2f(-0.29893, -0.27913);
    glVertex2f(-0.3128, -0.31285);
    glVertex2f(-0.34096, -0.35114);
    glVertex2f(-0.36218, -0.38444);
    glVertex2f(-0.3834, -0.41815);
    glVertex2f(-0.40421, -0.46602);
    glVertex2f(-0.41604, -0.51139);
    glVertex2f(-0.41849, -0.55218);
    glVertex2f(-0.40666, -0.60462);

    glVertex2f(-0.39278, -0.64791);
    glVertex2f(-0.36912, -0.69078);
    glVertex2f(-0.34586, -0.72907);
    glVertex2f(-0.31036, -0.76029);
    glVertex2f(-0.28016, -0.78901);
    glVertex2f(-0.24262, -0.80815);
    glVertex2f(-0.20508, -0.83229);
    glVertex2f(-0.15774, -0.84644);
    glVertex2f(-0.11082, -0.85851);
    glVertex2f(-0.06185, -0.86101);

    glVertex2f(-0.00309, -0.86559);
    glVertex2f(0.05322, -0.85602);
    glVertex2f(0.1026, -0.84644);
    glVertex2f(0.15891, -0.82022);
    glVertex2f(0.21073, -0.7915);
    glVertex2f(0.25766, -0.75571);
    glVertex2f(0.29275, -0.71242);
    glVertex2f(0.32785, -0.66705);
    glVertex2f(0.34417, -0.61419);
    glVertex2f(0.35355, -0.55218);

    glVertex2f(0.34662, -0.47309);
    glVertex2f(0.32091, -0.41066);
    glVertex2f(0.29031, -0.36279);
    glVertex2f(0.25276, -0.31285);
    glVertex2f(0.2295, -0.25749);
    glVertex2f(0.22012, -0.21212);
    glVertex2f(0.23155, -0.14511);
    glVertex2f(0.24583, -0.09017);
    glVertex2f(0.24828, -0.03523);
    glVertex2f(0.23399, 0.02013);

    glVertex2f(0.21073, 0.05842);
    glVertex2f(0.17523, 0.09422);
    glVertex2f(0.13075, 0.12543);
    glVertex2f(0.10015, 0.14708);

    glEnd();
    glLineWidth(1);

    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);

    glVertex2f(0.06016, 0.16123);

    glVertex2f(-0.11571, 0.16373);
    glVertex2f(-0.16713, 0.14458);
    glVertex2f(-0.21446, 0.11586);
    glVertex2f(-0.252, 0.08215);
    glVertex2f(-0.2871, 0.0297);
    glVertex2f(-0.30831, -0.02066);
    glVertex2f(-0.31525, -0.0756);
    glVertex2f(-0.30342, -0.11181);
    glVertex2f(-0.29158, -0.16176);
    glVertex2f(-0.2822, -0.20505);

    glVertex2f(-0.28954, -0.24334);
    glVertex2f(-0.29893, -0.27913);
    glVertex2f(-0.3128, -0.31285);
    glVertex2f(-0.34096, -0.35114);
    glVertex2f(-0.36218, -0.38444);
    glVertex2f(-0.3834, -0.41815);
    glVertex2f(-0.40421, -0.46602);
    glVertex2f(-0.41604, -0.51139);
    glVertex2f(-0.41849, -0.55218);
    glVertex2f(-0.40666, -0.60462);

    glVertex2f(-0.39278, -0.64791);
    glVertex2f(-0.36912, -0.69078);
    glVertex2f(-0.34586, -0.72907);
    glVertex2f(-0.31036, -0.76029);
    glVertex2f(-0.28016, -0.78901);
    glVertex2f(-0.24262, -0.80815);
    glVertex2f(-0.20508, -0.83229);
    glVertex2f(-0.15774, -0.84644);
    glVertex2f(-0.11082, -0.85851);
    glVertex2f(-0.06185, -0.86101);

    glEnd();

    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);

    glVertex2f(-0.39278, -0.64791);
    glVertex2f(-0.36912, -0.69078);
    glVertex2f(-0.34586, -0.72907);
    glVertex2f(-0.31036, -0.76029);
    glVertex2f(-0.28016, -0.78901);
    glVertex2f(-0.24262, -0.80815);
    glVertex2f(-0.20508, -0.83229);
    glVertex2f(-0.15774, -0.84644);
    glVertex2f(-0.11082, -0.85851);
    glVertex2f(-0.06185, -0.86101);

    glVertex2f(-0.00309, -0.86559);
    glVertex2f(0.05322, -0.85602);
    glVertex2f(0.1026, -0.84644);
    glVertex2f(0.15891, -0.82022);
    glVertex2f(0.21073, -0.7915);
    glVertex2f(0.25766, -0.75571);
    glVertex2f(0.29275, -0.71242);
    glVertex2f(0.32785, -0.66705);
    glVertex2f(0.34417, -0.61419);
    glVertex2f(0.35355, -0.55218);

    glVertex2f(0.34662, -0.47309);
    glVertex2f(0.32091, -0.41066);
    glVertex2f(0.29031, -0.36279);
    glVertex2f(0.25276, -0.31285);
    glVertex2f(0.2295, -0.25749);
    glVertex2f(0.22012, -0.21212);
    glVertex2f(0.23155, -0.14511);
    glVertex2f(0.24583, -0.09017);
    glVertex2f(0.24828, -0.03523);
    glVertex2f(0.23399, 0.02013);

    glVertex2f(0.21073, 0.05842);
    glVertex2f(0.17523, 0.09422);
    glVertex2f(0.13075, 0.12543);
    glVertex2f(0.10015, 0.14708);
    glVertex2f(0.06016, 0.16123);

    glEnd();


    glLineWidth(3);
    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.16019, 0.86964);
    glVertex2f(-0.11571, 0.5325);
    glVertex2f(0.04384, 0.5325);
    glVertex2f(0.09566, 0.86964);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2f(-0.25894, 0.7814);
    glVertex2f(0.1989, 0.7814);
    glVertex2f(-0.23772, 0.65695);
    glVertex2f(0.18013, 0.65695);
    glVertex2f(-0.16019, -0.53053);
    glVertex2f(0.0977, -0.53053);
    glEnd();

    glLineWidth(3);
    glColor3ub(218, 165, 32);
    glBegin(GL_QUADS);
    glVertex2f(-0.16019, 0.86964);
    glVertex2f(-0.11571, 0.5325);
    glVertex2f(0.04384, 0.5325);
    glVertex2f(0.09566, 0.86964);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.11571, 0.5325);
    glVertex2f(-0.11571, -0.06603);
    glVertex2f(0.04384, -0.06603);
    glVertex2f(0.04384, 0.5325);
    glEnd();

    glColor3ub(218, 165, 32);
    glBegin(GL_QUADS);
    glVertex2f(-0.11571, 0.5325);
    glVertex2f(-0.11571, -0.06603);
    glVertex2f(0.04384, -0.06603);
    glVertex2f(0.04384, 0.5325);
    glEnd();

    glColor3ub(0, 0, 0);
    GLfloat x = -0.03124;
    GLfloat y = -0.15718;
    GLfloat radious = .15;
    int ammountOfLIne = 47;
    GLfloat twicePI = 4 * PI;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(218, 165, 32);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radious * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radious * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glLineWidth(1);

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(0.01323, 0.76683);
    glVertex2f(0.01323, -0.53053);
    glVertex2f(-0.03369, 0.71897);
    glVertex2f(-0.03369, -0.53053);
    glVertex2f(-0.07572, 0.6736);
    glVertex2f(-0.07572, -0.53053);
    glEnd();

    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2f(0.01323, 0.76683);
    glVertex2f(-0.03369, 0.71897);
    glVertex2f(-0.07572, 0.6736);
    glEnd();
    glPointSize(1);
}

void char_g()
{
    glLineWidth(5);
    glColor3ub(218, 165, 32);
    GLfloat x = -0.46;
    GLfloat y = 0.23;
    GLfloat radiousX = .5;
    GLfloat radiousY = .55;
    int ammountOfLIne = 100;
    GLfloat twicePI = 4 * PI;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(184, 134, 11);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(218, 165, 32);
    radiousX = .3;
    radiousY = .37;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(0, 139, 139);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(0, 139, 139);
    glBegin(GL_POLYGON);
    glVertex2f(0.07172, 0.49);
    glVertex2f(-0.43805, 0.27219);
    glVertex2f(-0.43805, 0.09929);
    glVertex2f(-0.17768, 0.09929);
    glVertex2f(-0.17768, -0.30305);
    glVertex2f(0.02486, -0.30305);
    glEnd();

    glColor3ub(218, 165, 32);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.43805, 0.27219);
    glVertex2f(-0.43805, 0.09929);
    glColor3ub(184, 134, 11);
    glVertex2f(-0.17768, 0.09929);
    glVertex2f(-0.17768, -0.2111);
    glColor3ub(218, 165, 32);
    glVertex2f(-0.17768, -0.30305);
    glVertex2f(0.00486, -0.30305);
    glVertex2f(0.00486, 0.27219);
    glEnd();

    glColor3ub(184, 134, 11);
    glBegin(GL_POLYGON);
    glVertex2f(0.00486, 0.27219);
    glVertex2f(-0.43805, 0.27219);
    glVertex2f(-0.43805, 0.09929);
    glVertex2f(-0.17768, 0.09929);
    glVertex2f(-0.17768, -0.2111);
    glVertex2f(-0.17768, -0.30305);
    glVertex2f(0.00486, -0.30305);
    glEnd();




    //////////////
    glColor3ub(218, 165, 32);
    x = 0.46071;
    y = 0.10702;
    radiousX = .32;
    radiousY = .37;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();


    glColor3ub(184, 134, 11);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();


    glColor3ub(218, 165, 32);
    x = 0.48071;
    y = 0.10702;
    radiousX = .18;
    radiousY = .22;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();

    glColor3ub(0, 139, 139);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i < ammountOfLIne; i++)
    {
        glVertex2f(x + (radiousX * cos(i * twicePI * 1.5 / ammountOfLIne)), y + (radiousY * sin(i * twicePI * 1.5 / ammountOfLIne)));
    }
    glEnd();



    glColor3ub(218, 165, 32);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.6951, 0.44103);
    glColor3ub(184, 134, 11);
    glVertex2f(0.6951, 0.4);
    glVertex2f(0.6951, 0-.2);
    glColor3ub(218, 165, 32);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.67636, -0.33438);
    glVertex2f(0.64417, -0.37425);
    glVertex2f(0.59038, -0.39866);
    glVertex2f(0.5476, -0.41168);
    glVertex2f(0.48892, -0.40639);
    glVertex2f(0.44859, -0.39866);
    glVertex2f(0.42169, -0.37994);
    glVertex2f(0.3895, -0.35025);
    glVertex2f(0.36832, -0.32095);
    glVertex2f(0.17559, -0.32095);
    glVertex2f(0.19433, -0.38767);
    glVertex2f(0.22081, -0.43853);
    glVertex2f(0.25586, -0.47595);
    glVertex2f(0.30149, -0.50809);
    glVertex2f(0.35772, -0.52965);
    glVertex2f(0.41925, -0.54267);
    glVertex2f(0.48322, -0.55081);
    glVertex2f(0.5476, -0.54837);
    glVertex2f(0.61198, -0.54023);
    glVertex2f(0.67106, -0.5321);
    glVertex2f(0.72159, -0.51338);
    glVertex2f(0.77537, -0.48409);
    glVertex2f(0.81815, -0.44666);
    glVertex2f(0.85034, -0.4011);
    glVertex2f(0.86909, -0.33967);
    glVertex2f(0.86909, 0.44103);
    glEnd();
    glLineWidth(1);

    glColor3ub(184, 134, 11);
    glBegin(GL_QUADS);
    glVertex2f(0.6951, 0.44103);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.86909, -0.33967);
    glVertex2f(0.86909, 0.44103);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.72159, -0.51338);
    glVertex2f(0.77537, -0.48409);
    glVertex2f(0.81815, -0.44666);
    glVertex2f(0.85034, -0.4011);
    glVertex2f(0.86909, -0.33967);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.72159, -0.51338);
    glVertex2f(0.6951, -0.27824);
    glVertex2f(0.67636, -0.33438);
    glVertex2f(0.64417, -0.37425);
    glVertex2f(0.59038, -0.39866);
    glVertex2f(0.5476, -0.41168);
    glVertex2f(0.48892, -0.40639);
    glVertex2f(0.44859, -0.39866);
    glVertex2f(0.42169, -0.37994);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.42169, -0.37994);
    glVertex2f(0.25586, -0.47595);
    glVertex2f(0.30149, -0.50809);
    glVertex2f(0.35772, -0.52965);
    glVertex2f(0.41925, -0.54267);
    glVertex2f(0.48322, -0.55081);
    glVertex2f(0.5476, -0.54837);
    glVertex2f(0.61198, -0.54023);
    glVertex2f(0.67106, -0.5321);
    glVertex2f(0.72159, -0.51338);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.42169, -0.37994);
    glVertex2f(0.3895, -0.35025);
    glVertex2f(0.36832, -0.32095);
    glVertex2f(0.17559, -0.32095);
    glVertex2f(0.19433, -0.38767);
    glVertex2f(0.22081, -0.43853);
    glVertex2f(0.25586, -0.47595);
    glEnd();
}
