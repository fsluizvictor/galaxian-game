#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

#include "PersonsMovementService.c"

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case ESC:
        exit(0);
        break;
    case PAUSE:

        break;
    case RESET:
        glutPostRedisplay();
    default:
        break;
    }
}

void keySpecialPressed(int key, int x, int y)
{
    switch (key)
    {
    case KEY_LEFT:
        keyLeftPressed = true;
        movementPrincipalPerson();
        glutPostRedisplay();

        break;
    case KEY_RIGHT:
        keyRightPressed = true;
        movementPrincipalPerson();
        glutPostRedisplay();

    default:
        break;
    }
}

void keySpecialUnpressed(int key, int x, int y)
{
    switch (key)
    {
    case KEY_LEFT:
        keyLeftPressed = false;
        movementPrincipalPerson();
        glutPostRedisplay();

        break;
    case KEY_RIGHT:
        keyRightPressed = false;
        movementPrincipalPerson();
        glutPostRedisplay();

    default:
        break;
    }
}
