#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void drawScreenBackground()
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, textureBackground);

    glBegin(GL_POLYGON);
    glTexCoord2f(0, 0);
    glVertex3f(0, 0, 0);

    glTexCoord2f(0, 1);
    glVertex3f(0, 100, 0);

    glTexCoord2f(1, 1);
    glVertex3f(100, 100, 0);

    glTexCoord2f(1, 0);
    glVertex3f(100, 0, 0);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}