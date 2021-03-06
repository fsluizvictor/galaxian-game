#include "../entities/Constants.h"

GLuint getTexture(const char *pathFile)
{
    GLuint idTexture = SOIL_load_OGL_texture(pathFile, SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);

    if (idTexture == 0)
    {
        printf("Erro do SOIL: '%s'\n", SOIL_last_result());
    }

    return idTexture;
}

void initializeTexture()
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    textureEnemy = getTexture(pathtextureEnemy);
    texturePerson = getTexture(pathtexturePerson);
    textureBackground = getTexture(pathtextureBackground);

    textureArrowsKeyboard = getTexture(pathtextureArrowsKeyboard);
    textureEnterKey = getTexture(pathtextureEnterKey);
    textureSpaceBar = getTexture(pathtextureSpaceBar);

    textureGameOver = getTexture(pathtextureGameOver);

    textureWinner1 = getTexture(pathtextureWinner1);
    textureWinner2 = getTexture(pathtextureWinner2);

    textureStop = getTexture(pathtextureStop);
}