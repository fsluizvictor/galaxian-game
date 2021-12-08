#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void drawEnemy()
{

    for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
    {
        for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; i++)
        {

            float coordX = enemiesMatrix[i][j].enemyPositionX;
            float coordY = enemiesMatrix[i][j].enemyPositionY;

            glPushMatrix();
            glTranslatef(enemiesMatrix[i][j].enemyPositionX, enemiesMatrix[i][j].enemyPositionY, 0);

            glColor3f(0, 1, 0);

            glBegin(GL_POLYGON);
            glVertex2f(-coordX / 2, -coordY / 2);
            glVertex2f(coordX / 2, -coordY / 2);
            glVertex2f(coordX / 2, coordY / 2);
            glVertex2f(-coordX / 2, coordY / 2);
            glEnd();
            glPopMatrix();
        }
    }
}