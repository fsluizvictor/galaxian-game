#ifndef _SHOOT_PERSON_H_
#define _SHOOT_PERSON_H_

#include <stdio.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

typedef struct ShootPerson
{
    GLfloat shootPersonPositionX;
    GLfloat shootPersonPositionY;
} ShootPerson;

ShootPerson createshootPerson(GLfloat shootPersonPositionX,
                              GLfloat shootPersonPositionY);

#endif