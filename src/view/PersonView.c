#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void drawPerson()
{

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texturePerson);

    glBegin(GL_POLYGON);

    glTexCoord2f(0, 0);
    glVertex3f(personX, personY, 0);

    glTexCoord2f(0, 1);
    glVertex3f(personX + personHorizontal, personY, 0);

    glTexCoord2f(1, 1);
    glVertex3f(personX + personHorizontal, personY + personVertical, 0);

    glTexCoord2f(1, 0);
    glVertex3f(personX, personY + personVertical, 0);

    glEnd();
    glDisable(GL_TEXTURE_2D);
}
