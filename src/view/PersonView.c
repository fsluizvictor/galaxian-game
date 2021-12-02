#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void drawPerson()
{
    glColor3f(0, 1, 0);

    glBegin(GL_POLYGON);
    glVertex2f(personX, personY);
    glVertex2f(personX + personHorizontal, personY);
    glVertex2f(personX + personHorizontal, personY + personVertical);
    glVertex2f(personX, personY + personVertical);
    glEnd();
}
