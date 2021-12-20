#include "GameMovementActionService.c"

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case EXIT:
        exit(0);
        break;
    case PAUSE2:
    case PAUSE:
        paused();
        break;
    case RESET:
    case RESET2:
        reset();
        break;
    case ENTER:
        initGame();
        break;
    case KEY_SPACE:
        doShootPerson();
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
