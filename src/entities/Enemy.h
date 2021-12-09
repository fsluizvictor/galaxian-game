#ifndef _ENEMY_H_
#define _ENEMY_H_

#include <stdio.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

typedef struct Enemy
{
    GLfloat enemyPositionX;
    GLfloat enemyPositionY;
    bool isAlive;
} Enemy;

Enemy createEnemy(GLfloat enemyPositionX,
                  GLfloat enemyPositionY,
                  bool isAlive);

#endif