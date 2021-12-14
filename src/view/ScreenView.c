#include <string.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

#include "../entities/Constants.h"

void writeText(char *s, int x, int y, bool fontType)
{
    glColor3f(1, 1, 1);
    glRasterPos2d(x, y);

    {
        if (fontType)
        {
            for (int i = 0; i < strlen(s); i++)
            {
                glutBitmapCharacter(TITLE, s[i]);
            }
        }
        else
        {
            for (int i = 0; i < strlen(s); i++)
            {
                glutBitmapCharacter(SUB_TITLE, s[i]);
            }
        }
    }
}

void drawImage(GLuint tx, int x_begin, int y_begin, int x_end, int y_end)
{
    glColor3f(1.0, 1.0, 1.0);
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

void drawScreenBackground()
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, textureBackground);

    glBegin(GL_POLYGON);
    glTexCoord2f(0, 0);
    glVertex3f(0, 0, 0);

    glTexCoord2f(0, 1);
    glVertex3f(0, 100, 0);

    glTexCoord2f(1, 1);
    glVertex3f(100, 100, 0);

    glTexCoord2f(1, 0);
    glVertex3f(100, 0, 0);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}

void drawInitScreen()
{
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(0, 0, 0);

    glVertex3f(0, 100, 0);

    glVertex3f(100, 100, 0);

    glVertex3f(100, 0, 0);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    writeText("Welcome Galaxian Game!", 25, 80, true);
    writeText("Press enter to start", 35, 74, false);
    drawImage(textureEnterKey, 30, 55, 70, 70);
    writeText("Instructions:", 10, 40, false);
    writeText("To Shoot:", 10, 30, false);
    drawImage(textureSpaceBar, 30, 25, 50, 35);
    writeText("To move:", 10, 14, false);
    drawImage(textureArrowsKeyboard, 30, 10, 50, 20);
}

void drawLoserScreen()
{
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(0, 0, 0);

    glVertex3f(0, 100, 0);

    glVertex3f(100, 100, 0);

    glVertex3f(100, 0, 0);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    writeText("GAME OVER!", 40, 80, false);
    writeText("S U C K E R", 35, 74, true);
    drawImage(textureSucker, 30, 55, 70, 70);
}

void drawWinnerScreen()
{
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(0, 0, 0);

    glVertex3f(0, 100, 0);

    glVertex3f(100, 100, 0);

    glVertex3f(100, 0, 0);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    writeText("W I N N E R !!!", 40, 80, false);
    writeText("CONGRATS GENIUS !!!", 25, 74, true);
    drawImage(textureWinner1, 10, 5, 50, 55);
    drawImage(textureWinner2, 55, 5, 95, 55);
}

void drawStopScreen()
{
    glBegin(GL_POLYGON);
    glColor3f(0, 0, 0);
    glVertex3f(0, 0, 0);

    glVertex3f(0, 100, 0);

    glVertex3f(100, 100, 0);

    glVertex3f(100, 0, 0);
    glEnd();
    glDisable(GL_TEXTURE_2D);
    writeText("S T O P E D", 40, 80, true);
    writeText("PRESS P TO BACK", 38, 70, false);

    drawImage(textureStop, 30, 5, 70, 55);
}
