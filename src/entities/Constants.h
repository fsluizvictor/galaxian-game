#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

#include <stdio.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "Enemy.h"

#define ESC 27
#define PAUSE 'p'
#define RESET 'r'
#define KEY_LEFT GLUT_KEY_LEFT
#define KEY_RIGHT GLUT_KEY_RIGHT
#define KEY_SPACE ' '

//----------------------------------PERSON CONFIGURATION------------------------------------

//POSITION PERSON
float personX = 10;
float personY = 10;
//DIMENSION PERSON
float personHorizontal = 10;
float personVertical = 10;

bool keyRightPressed = false;
bool keyLeftPressed = false;

//----------------------------------ENEMY CONFIGURATION------------------------------------
#define POSITION_ENEMIES_VERTICAL 90
#define POSITION_ENEMIES_HORIZONTAL 5
#define DIMENSION_ENEMIES_VERTICAL 5
#define DIMENSION_ENEMIES_HORIZONTAL 5

//POSITION ENEMY
float enemyX = 5;
float enemyY = 80;
//DIMENSION ENEMY
float enemyHorizontal = 10;
float enemyVertical = 10;
//SPEED
float speedEnemyX = 2;
float speedEnemyY = 2;

//AMOUNT_ENEMIES
#define AMOUNT_ENEMIES_HORIZONTAL 4
#define AMOUNT_ENEMIES_VERTICAL 9

Enemy enemiesMatrix[AMOUNT_ENEMIES_HORIZONTAL][AMOUNT_ENEMIES_VERTICAL];

#endif