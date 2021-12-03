#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void movementEnemy()
{
    enemyX += speedEnemyX;
    enemyY += speedEnemyY;

    if (enemyX < 0)
    {
        speedEnemyX -= speedEnemyX;
        glutPostRedisplay();
    }
    else if (enemyX + enemyHorizontal > 500)
    {
        speedEnemyX -= speedEnemyX;
        glutPostRedisplay();
    }
    else if (enemyY < 0)
    {
        speedEnemyY -= speedEnemyY;
        glutPostRedisplay();
    }
    else if (enemyY + enemyVertical > 500)
    {
        speedEnemyY -= speedEnemyY;
        glutPostRedisplay();
    }
}