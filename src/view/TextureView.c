#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <SOIL/SOIL.h>
#include <GL/freeglut.h>

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
}