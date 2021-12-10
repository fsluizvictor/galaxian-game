#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../view/DesenhaTelaService.c"
#include "../view/TextureView.c"
#include "../services/GameMovementService.c"

void execute(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitContextVersion(1, 1);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);

    //TODO: add function that create the game elements, enemies, rockets and others
    initializeGameObjects();

    glutCreateWindow("GALAXIAN GAME");

    // registra callbacks para alguns eventos
    glutDisplayFunc(desenhaMinhaCena);
    glutReshapeFunc(redimensionada);

    glutKeyboardFunc(keyPressed);

    glutSpecialFunc(keySpecialPressed);
    glutSpecialUpFunc(keySpecialUnpressed);

    glutTimerFunc(33, refreshAll, 1);

    initializeTexture();

    initializeViewProperties();

    glutMainLoop();
}