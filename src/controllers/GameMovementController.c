#include "../services/GameMovementService.c"

void initializeGameMoviment()
{
    glutKeyboardFunc(keyPressed);

    glutSpecialFunc(keySpecialPressed);
    glutSpecialUpFunc(keySpecialUnpressed);

    glutTimerFunc(33, refreshAll, 1);

    glutMainLoop();
}