#ifndef _PERSON_H_
#define _PERSON_H_

#include <stdio.h>
#include <stdbool.h>

typedef struct Person
{
    float personPositionX;
    float personPositionY;
    float personDimensionHorizontal;
    float personDimensionVertical;
} Person;

Person createPerson(float personPositionX,
                    float personPositionY,
                    float personDimensionHorizontal,
                    float personDimensionVertical);

#endif