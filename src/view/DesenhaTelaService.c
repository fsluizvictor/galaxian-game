#include "../entities/Constants.h"

#include "EnemiesView.c"
#include "PersonView.c"
#include "ScreenView.c"
#include "ShootView.c"

void initializeViewProperties()
{
    // cor do fundo (Background) preto
    //glClearColor(0, 0, 0, 1);

    // habilita mesclagem de cores, para termos suporte a texturas
    // com transparĂȘncia
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}

void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    //drawWinnerScreen();
    //drawLoserScreen();

    //drawStopScreen();

    //TODO: fix FLAGS

    if (FLAG_INIT_SCREEN == true)
    {
        drawInitScreen();
    }
    else if (FLAG_GAME_OVER)
    {
        drawGameOverScreen();
    }
    else if (FLAG_STOP_GAME)
    {
        drawStopScreen();
    }
    else if (FLAG_CHAMPION)
    {
        drawWinnerScreen();
    }
    else if (FLAG_START_GAME)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        drawScreenBackground();
        drawEnemy();
        drawPerson();
        drawShootEnemy();
        drawShootPerson();
    }

    glFlush();
}

void redimensionada(int width, int height)
{
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
