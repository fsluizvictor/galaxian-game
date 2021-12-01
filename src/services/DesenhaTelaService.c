#include <GL/glew.h>     // glew.h deve vir antes
#include <GL/freeglut.h> // do freeglut.h

#include "../entities/Constants.h"

void drawPerson()
{
    glColor3f(0, 1, 0);

    glBegin(GL_POLYGON);
    glVertex2f(personX, personY);
    glVertex2f(personX + personHorizontal, personY);
    glVertex2f(personX + personHorizontal, personY + personVertical);
    glVertex2f(personX, personY + personVertical);
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