#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void drawPerson()
{

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturePerson);

    glBegin(GL_POLYGON);

    glTexCoord2f(0, 0);
    glVertex2f(personX, personY);

    glTexCoord2f(0, 1);
    glVertex2f(personX + personHorizontal, personY);

    glTexCoord2f(1, 1);
    glVertex2f(personX + personHorizontal, personY + personVertical);

    glTexCoord2f(1, 0);
    glVertex2f(personX, personY + personVertical);

    glEnd();
    glDisable(GL_TEXTURE_2D);
}
