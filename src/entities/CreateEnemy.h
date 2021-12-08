#ifndef _CREATE_ENEMY_H_
#define _CREATE_ENEMY_H_

#include "Constants.h"
#include "Enemy.h"

Enemy createEnemy(float enemyPositionX,
                  float enemyPositionY,
                  float enemyDimensionHorizontal,
                  float enemyDimensionVertical)
{
    Enemy enemy;
    enemy.enemyPositionX = enemyPositionX;
    enemy.enemyPositionY = enemyPositionY;
    enemy.enemyDimensionHorizontal = enemyDimensionHorizontal;
    enemy.enemyDimensionVertical = enemyDimensionVertical;

    return enemy;
}

#endif
