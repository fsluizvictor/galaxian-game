#include <GL/glew.h>     // glew.h deve vir antes
#include <GL/freeglut.h> // do freeglut.h

// callback de desenho (display)
void desenhaMinhaCena()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 1, 0);

    //TODO: Adicionar funçoes para gerarem as telas do jogo

    glFlush();
}

void desenhaFundo(GLuint tx, int x_begin, int y_begin, int x_end, int y_end)
{
    glColor3f(1, 1, 1);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, tx);
    glBegin(GL_TRIANGLE_FAN);

    glTexCoord2f(0, 0);
    glVertex2f(x_begin, y_begin);

    glTexCoord2f(1, 0);
    glVertex2f(x_end, y_begin);

    glTexCoord2f(1, 1);
    glVertex2f(x_end, y_end);

    glTexCoord2f(0, 1);
    glVertex2f(x_begin, y_end);

    glEnd();
    glDisable(GL_TEXTURE_2D);
}

// NOVIDADE: callback para o evento "reshape"
void redimensionada(int width, int height)
{
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -1, 1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

// NOVIDADE: callback de "keyboard"
void teclaPressionada(unsigned char key, int x, int y)
{
    // vê qual tecla foi pressionada
    switch (key)
    {
    case 27:     // Tecla "ESC"
        exit(0); // Sai da aplicação
        break;
    default:
        break;
    }
}

// função principal
