#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

#include "EnemiesView.c"
#include "PersonView.c"
#include "ScreenView.c"

void initializeViewProperties()
{
    // cor do fundo (Background) preto
    //glClearColor(0, 0, 0, 1);

    // habilita mesclagem de cores, para termos suporte a texturas
    // com transparência
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

    drawScreenBackground();

    drawEnemy();

    drawPerson();

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

void writeText(void *font, char *s, float x, float y, float z)
{
    int i;
    glRasterPos3f(x, y, z);
    glPushMatrix();
    for (i = 0; i < strlen(s); i++)
    {
        glutBitmapCharacter(font, s[i]);
    }
    glPopMatrix();
}