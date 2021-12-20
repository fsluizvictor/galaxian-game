#include "../entities/Constants.h"

#include "MusicController.c"
#include "ViewController.c"
#include "GameMovementController.c"

void execute(int argc, char **argv)
{
    glutInit(&argc, argv);
    initializeGameMusic();
    initializeGameObjects();
    initializeView();
    initializeGameMoviment();
}
