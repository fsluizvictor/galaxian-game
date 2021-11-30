#include <GL/glew.h>     // glew.h deve vir antes
#include <GL/freeglut.h> // do freeglut.h

#include "DesenhaTelaService.c"

void execute(int argc, char **argv)
{
    glutInit(&argc, argv);

    glutInitContextVersion(1, 1);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);

    //TODO: add function that create the game elements, enemies, rockets and others

    glutCreateWindow("GALAXIAN GAME");

    // registra callbacks para alguns eventos
    glutDisplayFunc(desenhaMinhaCena);
    glutReshapeFunc(redimensionada);
    glutKeyboardFunc(teclaPressionada);

    // configura valor inicial de algumas
    // variáveis de estado do OpenGL
    inicializa();

    glutMainLoop();
}