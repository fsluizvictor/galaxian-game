#include "../entities/Constants.h"

void inicializarMusica()
{
    SDL_Init(SDL_INIT_AUDIO);
    Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 1024); //- inicializa SDL_Mixer
    atexit(Mix_CloseAudio);
}

void carregarMusica()
{
    intro_song = Mix_LoadMUS(pathmusicIntro);
}
