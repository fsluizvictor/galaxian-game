#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void movementPrincipalPerson()
{
    if (keyRightPressed)
    {
        if (personX += 8 <= 500)
        {
            personX += 8;
            glutPostRedisplay();
        }
    }
    else if (keyLeftPressed)
    {
        if (personX += 8 >= 0)
        {
            personX -= 8;
            glutPostRedisplay();
        }
    }
}