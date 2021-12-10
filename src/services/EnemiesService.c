#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

Enemy createEnemy(GLfloat enemyPositionX,
                  GLfloat enemyPositionY,
                  bool isAlive)
{
    Enemy enemy;
    enemy.enemyPositionX = enemyPositionX;
    enemy.enemyPositionY = enemyPositionY;
    enemy.isAlive = isAlive;
    return enemy;
}

void createEnemies()
{

    for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
    {
        for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
        {
            enemiesMatrix[i][j] = createEnemy(j * 10 + 10,
                                              100 - (i * 10 + 10),
                                              true);
        }
    }
}

void shiftEnemies(GLfloat x, GLfloat y)
{
    for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
    {
        for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
        {
            enemiesMatrix[i][j].enemyPositionX += x;
            enemiesMatrix[i][j].enemyPositionY += y;
        }
    }
}

void movementEnemies()
{
    for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
    {
        for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
        {

            if (enemiesMatrix[i][j].isAlive)
            {

                if (enemiesMatrix[i][j].enemyPositionX > limitInferiorHorizontal)
                {
                    limitInferiorHorizontal = enemiesMatrix[i][j].enemyPositionX;
                }

                if (enemiesMatrix[i][j].enemyPositionX < limitSuperiorHorizontal)
                {
                    limitSuperiorHorizontal = enemiesMatrix[i][j].enemyPositionX;
                }
            }
        }
    }

    if (limitInferiorHorizontal >= 97)
    {
        directionEnemy = false;
        shiftEnemies(0, -speedEnemyY);
    }

    if (limitSuperiorHorizontal <= 3)
    {
        directionEnemy = true;
        shiftEnemies(0, -speedEnemyY);
    }

    if (directionEnemy)
    {
        shiftEnemies(0.5, 0);
    }
    else
    {
        shiftEnemies(-0.5, 0);
    }
}
