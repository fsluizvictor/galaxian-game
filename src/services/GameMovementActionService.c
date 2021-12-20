#include "../entities/Constants.h"

#include "EnemiesService.c"
#include "ShootService.c"
#include "PersonsMovementService.c"

void paused()
{
    FLAG_STOP_GAME = !FLAG_STOP_GAME;
    FLAG_START_GAME = !FLAG_START_GAME;
}

void reset()
{
    FLAG_GAME_OVER = false;
    FLAG_START_GAME = !FLAG_START_GAME;
    createEnemies();
    glutPostRedisplay();
}

void initGame()
{
    FLAG_INIT_SCREEN = false;
    FLAG_START_GAME = true;
    createEnemies();
    glutPostRedisplay();
}

void doShootPerson()
{
    FLAG_CAN_SHOOT_PERSON = true;
    executeShootPerson();
}

void keySpecialPressed(int key, int x, int y)
{
    switch (key)
    {
    case KEY_LEFT:
        if (!FLAG_GAME_OVER && !FLAG_STOP_GAME)
        {
            keyLeftPressed = true;
            movementPrincipalPerson();
            glutPostRedisplay();
        }
        break;
    case KEY_RIGHT:
        if (!FLAG_GAME_OVER && !FLAG_STOP_GAME)
        {
            keyRightPressed = true;
            movementPrincipalPerson();
            glutPostRedisplay();
        }
    default:
        break;
    }
}

void keySpecialUnpressed(int key, int x, int y)
{
    switch (key)
    {
    case KEY_LEFT:
        if (!FLAG_GAME_OVER && !FLAG_STOP_GAME)
        {
            keyLeftPressed = false;
            movementPrincipalPerson();
            glutPostRedisplay();
        }
        break;
    case KEY_RIGHT:
        if (!FLAG_GAME_OVER && !FLAG_STOP_GAME)
        {
            keyRightPressed = false;
            movementPrincipalPerson();
            glutPostRedisplay();
        }
        break;
    default:
        break;
    }
}
