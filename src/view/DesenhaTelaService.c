#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

#include "EnemiesView.c"
#include "PersonView.c"

void initializeViewProperties()
{
    // cor do fundo (Background) preto
    glClearColor(0, 0, 0, 1);

    // habilita mesclagem de cores, para termos suporte a texturas
    // com transparência
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void desenhaMinhaCena()
{
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    drawPerson();

    //FIX: segmentation fault
    //drawEnemy();

    glFlush();
}

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
    glutPostRedisplay();
    glutTimerFunc(33, refreshDraw, 0);
}