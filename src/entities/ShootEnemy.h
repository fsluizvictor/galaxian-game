#ifndef _SHOOT_ENEMY_H_
#define _SHOOT_ENEMY_H_

#include <stdio.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

typedef struct ShootEnemy
{
    GLfloat shootEnemyPositionX;
    GLfloat shootEnemyPositionY;
} ShootEnemy;

ShootEnemy createShootEnemy(GLfloat shootEnemyPositionX,
                            GLfloat shootEnemyPositionY);

#endif