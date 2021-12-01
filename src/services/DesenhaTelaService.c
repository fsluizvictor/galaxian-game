#include <GL/glew.h>     // glew.h deve vir antes
#include <GL/freeglut.h> // do freeglut.h

void drawPerson()
{
    glColor3f(0, 1, 0);

    // desenha um POLYGON por seus vértices
    glBegin(GL_POLYGON);
    // NOVIDADE: antes os valores eram -0.5, 0.5
    glVertex3f(20, 20, 0);
    glVertex3f(80, 20, 0);
    glVertex3f(80, 80, 0);
    glVertex3f(20, 80, 0);
    glEnd();
}

// callback de desenho (display)
void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 1, 0);

    drawPerson();
    //TODO: Adicionar funçoes para gerarem as telas do jogo

    glFlush();
}

// NOVIDADE: callback para o evento "reshape"
void redimensionada(int width, int height)
{
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void refreshDraw()
{
    glutTimerFunc(33, refreshDraw, 0);
}