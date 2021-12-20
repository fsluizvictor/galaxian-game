#include "../entities/Constants.h"

#include "../services/MusicService.c"

void initializeGameMusic()
{
    inicializarMusica();
    carregarMusica();
    Mix_PlayMusic(intro_song, -1);
}