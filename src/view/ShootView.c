#include <string.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void drawShootEnemy()
{
    glBegin(GL_POLYGON);
    glColor3f(1, 1, 1); // cor do tiro do alien
    glVertex3f(shootEnemy.shootEnemyPositionX - 0.5, shootEnemy.shootEnemyPositionY - 2, 0);
    glVertex3f(shootEnemy.shootEnemyPositionX - 0.5, shootEnemy.shootEnemyPositionY + 2, 0);
    glVertex3f(shootEnemy.shootEnemyPositionX + 0.5, shootEnemy.shootEnemyPositionY + 2, 0);
    glVertex3f(shootEnemy.shootEnemyPositionX + 0.5, shootEnemy.shootEnemyPositionY - 2, 0);
    glEnd();
}
