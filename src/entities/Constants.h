#ifndef _Constants_H_
#define _Constants_H_

#include <stdio.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#define ESC 27
#define PAUSE 'p'
#define RESET 'r'
#define KEY_LEFT GLUT_KEY_LEFT
#define KEY_RIGHT GLUT_KEY_RIGHT
#define KEY_SPACE ' '

//POSITION PESON
float personX = 10;
float personY = 10;
//DIMENSION PERSON
float personHorizontal = 10;
float personVertical = 10;

bool keyRightPressed = false;
bool keyLeftPressed = false;

//POSITION ENEMY
float enemyX = 5;
float enemyY = 80;
//DIMENSION ENEMY
float enemyHorizontal = 10;
float enemyVertical = 10;
//SPEED
float speedEnemyX = 2;
float speedEnemyY = 2;

#endif