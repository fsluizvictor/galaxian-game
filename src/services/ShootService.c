#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

ShootEnemy createShootEnemy(GLfloat shootEnemyPositionX,
                            GLfloat shootEnemyPositionY)
{
    ShootEnemy shootEnemy;
    shootEnemy.shootEnemyPositionX = shootEnemyPositionX;
    shootEnemy.shootEnemyPositionY = shootEnemyPositionY;
    return shootEnemy;
}

ShootPerson createShootPerson(GLfloat shootPersonPositionX,
                              GLfloat shootPersonPositionY)
{
    ShootPerson shootPerson;
    shootPerson.shootPersonPositionX = shootPersonPositionX;
    shootPerson.shootPersonPositionY = shootPersonPositionY;
    return shootPerson;
}

void executeShootEnemies()
{

    if (shootEnemy.shootEnemyPositionY <= limitInferiorVertical)
    {

        bool shooted = false;

        while (!shooted)
        {
            int randomPositionX = rand() % AMOUNT_ENEMIES_HORIZONTAL;
            int randomPositionY = rand() % AMOUNT_ENEMIES_VERTICAL;

            if (enemiesMatrix[randomPositionX][randomPositionY].isAlive)
            {
                shootEnemy = createShootEnemy(enemiesMatrix[randomPositionX][randomPositionY].enemyPositionX,
                                              enemiesMatrix[randomPositionX][randomPositionY].enemyPositionY - DIMENSION_ENEMIES_HORIZONTAL);
                shooted = true;
            }
        }
    }
    else
    {
        shootEnemy.shootEnemyPositionY--;
        if (shootEnemy.shootEnemyPositionX >= personX - DIMENSION_PERSON_HORIZONTAL && shootEnemy.shootEnemyPositionX <= personX + DIMENSION_PERSON_HORIZONTAL)
        {
            if (shootEnemy.shootEnemyPositionY >= 0 && shootEnemy.shootEnemyPositionY <= 10)
            {
                FLAG_GAME_OVER = true;
                FLAG_START_GAME = false;
                shootEnemy.shootEnemyPositionY = limitInferiorVertical;
            }
        }
    }
}
