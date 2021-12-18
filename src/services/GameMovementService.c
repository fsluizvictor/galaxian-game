#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

#include "PersonsMovementService.c"
#include "EnemiesService.c"
#include "ShootService.c"

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case EXIT:
        exit(0);
        break;
    case PAUSE2:
    case PAUSE:
        FLAG_STOP_GAME = !FLAG_STOP_GAME;
        FLAG_START_GAME = !FLAG_START_GAME;
        break;
    case RESET:
    case RESET2:
        FLAG_GAME_OVER = false;
        FLAG_START_GAME = !FLAG_START_GAME;
        createEnemies();
        glutPostRedisplay();
        break;
    case ENTER:
        FLAG_INIT_SCREEN = false;
        FLAG_START_GAME = true;
        createEnemies();
        glutPostRedisplay();
        break;
    case KEY_SPACE:
        FLAG_CAN_SHOOT_PERSON = true;
        executeShootPerson();
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

void initializeGameObjects()
{
    createEnemies();
}

void refreshAll()
{
    if (!FLAG_STOP_GAME && !FLAG_GAME_OVER)
    {

        movementEnemies();
        executeShootEnemies();
        if (FLAG_CAN_SHOOT_PERSON)
        {
            executeShootPerson();
        }

        int quantityOfEnemies = 0;
        for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
        {
            for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
            {
                if (enemiesMatrix[i][j].isAlive)
                {
                    quantityOfEnemies++;
                }
            }
        }

        if (quantityOfEnemies < 1)
        {
            FLAG_CHAMPION = true;
            FLAG_START_GAME = false;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(33, refreshAll, 1);
}