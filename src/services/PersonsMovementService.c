#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void movementPrincipalPerson()
{
    if (keyRightPressed)
    {
        if (personX < 90 - (personHorizontal / 5))
        {
            personX += 5;
        }
    }
    else if (keyLeftPressed)
    {

        if (personX > 0 + (personHorizontal / 5))
        {
            personX -= 5;
        }
    }
}
