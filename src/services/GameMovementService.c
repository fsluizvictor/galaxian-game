#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

#include "PersonsMovementService.c"
#include "EnemiesService.c"

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case EXIT:
        exit(0);
        break;
    case PAUSE:
        FLAG_STOP_GAME = true;
        FLAG_START_GAME = false;
        break;
    case UNPAUSE:
        FLAG_STOP_GAME = false;
        FLAG_START_GAME = true;
        break;
    case RESET:
        glutPostRedisplay();
        break;
    case ENTER:
        FLAG_INIT_SCREEN = false;
        FLAG_START_GAME = true;
        createEnemies();
        glutPostRedisplay();
        break;

    case KEY_SPACE:
        //TODO: adicionar shoot

        break;
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

void initializeGameObjects()
{
    createEnemies();
}

void refreshAll()
{
    if (!FLAG_STOP_GAME)
    {
        movementEnemies();
    }

    glutPostRedisplay();
    glutTimerFunc(33, refreshAll, 1);
}