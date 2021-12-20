#include "../entities/Constants.h"

Person createPerson(float personPositionX,
                    float personPositionY,
                    float personDimensionHorizontal,
                    float personDimensionVertical)
{
    Person person;
    person.personPositionX = personPositionX;
    person.personPositionY = personPositionY;
    person.personDimensionHorizontal = personDimensionHorizontal;
    person.personDimensionVertical = personDimensionVertical;

    return person;
}

//Person person = createPerson(10, 0, 10, 10);

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
