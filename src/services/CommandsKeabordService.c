#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void keyPressed(unsigned char key, int x, int y)
{
    switch (key)
    {
    case ESC:    // Tecla "ESC"
        exit(0); // Sai da aplicação
        break;
    case PAUSE: // Tecla "ESC"
        //TODO: ADICIONAR TELA DE PAUSA
        break;
    case RESET: // Tecla "ESC"
        //TODO: REINICIAR O JOGO
    default:
        break;
    }
}

void keyRocketControl(unsigned char key, int x, int y)
{
    switch (key)
    {
    case KEY_LEFT:
        //TODO: ADICIONAR FUNCAO PARA CONTROLAR NAVE
        break;
    case KEY_RIGHT:
    //TODO: ADICIONAR FUNCAO PARA CONTROLAR NAVE
    case KEY_SPACE:
        //TODO: ADICIONAR FUNCAO PARA A NAVE ATIRAR
    default:
        break;
    }
}
