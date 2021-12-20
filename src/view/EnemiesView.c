#include "../entities/Constants.h"

void drawEnemy()
{
    for (int i = 0; i < AMOUNT_ENEMIES_HORIZONTAL; i++)
    {
        for (int j = 0; j < AMOUNT_ENEMIES_VERTICAL; j++)
        {
            glEnable(GL_TEXTURE_2D);
            glBindTexture(GL_TEXTURE_2D, textureEnemy);
            glBegin(GL_POLYGON);

            glBegin(GL_POLYGON);
            if (enemiesMatrix[i][j].isAlive)
            {

                glTexCoord2f(0, 0);
                glVertex3f(enemiesMatrix[i][j].enemyPositionX - 3, enemiesMatrix[i][j].enemyPositionY - 3, 0);

                glTexCoord2f(0, 1);
                glVertex3f(enemiesMatrix[i][j].enemyPositionX - 3, enemiesMatrix[i][j].enemyPositionY + 3, 0);

                glTexCoord2f(1, 1);
                glVertex3f(enemiesMatrix[i][j].enemyPositionX + 3, enemiesMatrix[i][j].enemyPositionY + 3, 0);

                glTexCoord2f(1, 0);
                glVertex3f(enemiesMatrix[i][j].enemyPositionX + 3, enemiesMatrix[i][j].enemyPositionY - 3, 0);
            }

            glEnd();
            glDisable(GL_TEXTURE_2D);
        }
    }
}