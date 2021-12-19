#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "Enemy.h"
#include "Person.h"
#include "ShootEnemy.h"
#include "ShootPerson.h"

#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>

//----------------------------------KEYBOARD COMMAND CONFIGURATION------------------------------------

#define EXIT 27
#define ENTER 13
#define PAUSE 'p'
#define PAUSE2 'P'
//#define UNPAUSE 'u'
#define RESET 'r'
#define RESET2 'R'
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

#define LIMIT_SUPERIOR_VERTICAL_PERSON 100
#define LIMIT_INFERIOR_VERTICAL_PERSON 10

bool keyRightPressed = false;
bool keyLeftPressed = false;

//----------------------------------ENEMY CONFIGURATION------------------------------------
#define POSITION_ENEMIES_VERTICAL 90
#define POSITION_ENEMIES_HORIZONTAL 5
#define DIMENSION_ENEMIES_VERTICAL 3
#define DIMENSION_ENEMIES_HORIZONTAL 3

//SPEED
float speedEnemyX = 1;
float speedEnemyY = 1;

//AMOUNT_ENEMIES
#define AMOUNT_ENEMIES_HORIZONTAL 1
#define AMOUNT_ENEMIES_VERTICAL 3

Enemy enemiesMatrix[AMOUNT_ENEMIES_HORIZONTAL][AMOUNT_ENEMIES_VERTICAL];

bool directionEnemy = true; // if true direction is right, if false direction is left

//----------------------------------SHOOT CONFIGURATION------------------------------------

ShootPerson shootPerson;
ShootEnemy shootEnemy;

float speedShootPerson = 2;

//----------------------------------TEXTURE CONFIGURATION------------------------------------

GLuint textureEnemy;
GLuint texturePerson;
GLuint textureBackground;

GLuint textureArrowsKeyboard;
GLuint textureEnterKey;
GLuint textureSpaceBar;

GLuint textureGameOver;

GLuint textureWinner1;
GLuint textureWinner2;

GLuint textureStop;

char *pathtextureEnemy = "src/assets/alienEnemy.png";
char *pathtexturePerson = "src/assets/person.png";
char *pathtextureBackground = "src/assets/background.png";

char *pathtextureArrowsKeyboard = "src/assets/arrowsKeyboard.png";
char *pathtextureEnterKey = "src/assets/enterKey.png";
char *pathtextureSpaceBar = "src/assets/spaceBar.png";

char *pathtextureGameOver = "src/assets/gameOver.png";

char *pathtextureWinner1 = "src/assets/winner1.png";
char *pathtextureWinner2 = "src/assets/winner2.png";

char *pathtextureStop = "src/assets/stop.png";

char *pathmusicIntro = "src/assets/06_battle_in_space_intro.ogg";
Mix_Music *intro_song = NULL;

//----------------------------------WRITE CONFIGURATION------------------------------------

#define TITLE GLUT_BITMAP_TIMES_ROMAN_24
#define SUB_TITLE GLUT_BITMAP_9_BY_15

//----------------------------------GAME CONFIGURATION------------------------------------

bool FLAG_START_GAME = false;
bool FLAG_STOP_GAME = false;
bool FLAG_INIT_SCREEN = true;
bool FLAG_GAME_OVER = false;

bool FLAG_CAN_SHOOT_PERSON = false;

bool FLAG_CHAMPION = false;

int limitSuperiorHorizontal = 100;
int limitInferiorHorizontal = 0;

int limitSuperiorVertical = 100;
int limitInferiorVertical = -10;

int countEnemies = 0;
int quantityOfEnemies = AMOUNT_ENEMIES_HORIZONTAL * AMOUNT_ENEMIES_VERTICAL;

#endif
