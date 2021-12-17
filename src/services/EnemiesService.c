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

void checkVerticalPositionEnemies()
{
    for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
    {
        for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
        {

            if (enemiesMatrix[i][j].isAlive)
            {
                if (enemiesMatrix[i][j].enemyPositionY < 0)
                {
                    FLAG_GAME_OVER = true;
                }
            }
        }
    }
}

void movementEnemies()
{

    limitInferiorHorizontal = 0;
    limitSuperiorHorizontal = 100;

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

    if (limitInferiorHorizontal >= 100)
    {
        directionEnemy = false;
        shiftEnemies(0, -speedEnemyY);
        checkVerticalPositionEnemies();
    }

    if (limitSuperiorHorizontal <= 3)
    {
        directionEnemy = true;
        shiftEnemies(0, -speedEnemyY);
        checkVerticalPositionEnemies();
    }

    if (directionEnemy)
    {
        shiftEnemies(speedEnemyX, 0);
    }
    else
    {
        shiftEnemies(-speedEnemyX, 0);
    }
}
