#include "../view/DesenhaTelaService.c"
#include "../view/TextureView.c"

void initializeView()
{
    glutInitContextVersion(1, 1);
    glutInitContextProfile(GLUT_COMPATIBILITY_PROFILE);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);

    glutCreateWindow("GALAXIAN GAME");

    glutDisplayFunc(desenhaMinhaCena);
    glutReshapeFunc(redimensionada);

    initializeTexture();
    initializeViewProperties();
}