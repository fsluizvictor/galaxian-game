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

//PERSONAGEM
float personX = 10;
float personY = 10;
float personHorizontal = 50;
float personVertical = 30;

bool keyRightPressed = false;
bool keyLeftPressed = false;

#endif