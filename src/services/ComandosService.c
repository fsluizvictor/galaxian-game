#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27:     // Tecla "ESC"
        exit(0); // Sai da aplicação
        break;
    case 'p': // Tecla "ESC"
        //TODO: ADICIONAR TELA DE PAUSA
        break;
    case 'r': // Tecla "ESC"
        //TODO: REINICIAR O JOGO
    default:
        break;
    }
}

void keyRocketControl(unsigned char key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
        //TODO: ADICIONAR FUNCAO PARA CONTROLAR NAVE
        break;
    case GLUT_KEY_RIGHT:
    //TODO: ADICIONAR FUNCAO PARA CONTROLAR NAVE
    case ' ':
        //TODO: ADICIONAR FUNCAO PARA A NAVE ATIRAR
    default:
        break;
    }
}
