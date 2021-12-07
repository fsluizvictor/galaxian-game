#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void movementEnemy()
{
    if (enemyX < 90 - (enemyHorizontal / 5))
    {
        enemyX += 5;
    }
    glutPostRedisplay();
    if (enemyX > 0 + (enemyHorizontal / 5))
    {
        enemyX -= 5;
    }
    glutPostRedisplay();
}

void createEnemies()
{
    float verticalPosition = enemyY;

    for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
    {
        for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
        {
            /* code */
        }

        /* code */
    }
}