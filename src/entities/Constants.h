#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "Enemy.h"
#include "ShootEnemy.h"
#include "ShootPerson.h"

//----------------------------------KEYBOARD COMMAND CONFIGURATION------------------------------------

#define EXIT 27
#define ENTER 13
#define PAUSE 'p'
#define UNPAUSE 'u'
#define RESET 'r'
#define KEY_LEFT GLUT_KEY_LEFT
#define KEY_RIGHT GLUT_KEY_RIGHT
#define KEY_SPACE ' '

//----------------------------------PERSON CONFIGURATION------------------------------------

//POSITION PERSON
float personX = 10;
float personY = 0;
//DIMENSION PERSON
float personHorizontal = 10;
float personVertical = 10;

#define DIMENSION_PERSON_VERTICAL 10
#define DIMENSION_PERSON_HORIZONTAL 10

bool keyRightPressed = false;
bool keyLeftPressed = false;

//----------------------------------ENEMY CONFIGURATION------------------------------------
#define POSITION_ENEMIES_VERTICAL 90
#define POSITION_ENEMIES_HORIZONTAL 5
#define DIMENSION_ENEMIES_VERTICAL 3
#define DIMENSION_ENEMIES_HORIZONTAL 3

//POSITION ENEMY
float enemyX = 5;
float enemyY = 80;
//DIMENSION ENEMY
float enemyHorizontal = 10;
float enemyVertical = 10;
//SPEED
float speedEnemyX = 2;
float speedEnemyY = 0.09;

//AMOUNT_ENEMIES
#define AMOUNT_ENEMIES_HORIZONTAL 3
#define AMOUNT_ENEMIES_VERTICAL 7

Enemy enemiesMatrix[AMOUNT_ENEMIES_HORIZONTAL][AMOUNT_ENEMIES_VERTICAL];

bool directionEnemy = true; // if true direction is right, if false direction is left

//----------------------------------SHOOT CONFIGURATION------------------------------------

ShootPerson shootPerson;
ShootEnemy shootEnemy;

//----------------------------------TEXTURE CONFIGURATION------------------------------------

GLuint textureEnemy;
GLuint texturePerson;
GLuint textureBackground;

GLuint textureArrowsKeyboard;
GLuint textureEnterKey;
GLuint textureSpaceBar;

GLuint textureSucker;

GLuint textureWinner1;
GLuint textureWinner2;

GLuint textureStop;

char *pathtextureEnemy = "src/assets/alienEnemy.png";
char *pathtexturePerson = "src/assets/person.png";
char *pathtextureBackground = "src/assets/background.png";

char *pathtextureArrowsKeyboard = "src/assets/arrowsKeyboard.png";
char *pathtextureEnterKey = "src/assets/enterKey.png";
char *pathtextureSpaceBar = "src/assets/spaceBar.png";

char *pathtextureSucker = "src/assets/sucker.png";

char *pathtextureWinner1 = "src/assets/winner1.png";
char *pathtextureWinner2 = "src/assets/winner2.png";

char *pathtextureStop = "src/assets/stop.png";

//----------------------------------WRITE CONFIGURATION------------------------------------

#define TITLE GLUT_BITMAP_TIMES_ROMAN_24
#define SUB_TITLE GLUT_BITMAP_9_BY_15

//----------------------------------GAME CONFIGURATION------------------------------------

bool FLAG_START_GAME = false;
bool FLAG_STOP_GAME = false;
bool FLAG_INIT_SCREEN = true;
bool FLAG_GAME_OVER = false;

int limitSuperiorHorizontal = 100;
int limitInferiorHorizontal = 0;

int limitSuperiorVertical = 100;
int limitInferiorVertical = -10;

#endif