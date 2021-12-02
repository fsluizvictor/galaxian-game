#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void drawEnemy()
{
    glColor3f(0, 1, 0);

    glBegin(GL_POLYGON);
    glVertex2f(enemyX, enemyY);
    glVertex2f(enemyX + enemyHorizontal, enemyY);
    glVertex2f(enemyX + enemyHorizontal, enemyY + enemyVertical);
    glVertex2f(enemyX, enemyY + enemyVertical);
    glEnd();
}