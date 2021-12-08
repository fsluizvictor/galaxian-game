#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

#include "EnemiesView.c"
#include "PersonView.c"
#include "../services/EnemiesMovementService.c"

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 1, 0);

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