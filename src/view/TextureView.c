#include <SOIL/SOIL.h>
#include <stdio.h>
#include <stdbool.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

GLuint getTexture(const char *pathFile)
{
    return SOIL_load_OGL_texture(pathFile,
                                 SOIL_LOAD_AUTO,
                                 SOIL_CREATE_NEW_ID,
                                 SOIL_FLAG_INVERT_Y);
}