#include <SDL2/SDL.h>

int main(int *argc, char *argv[])
{
    SDL_Window * window = NULL;
    SDL_Surface * screen = NULL;
    SDL_Surface * image = NULL;

    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow("hello", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_RESIZABLE);
    screen = SDL_GetWindowSurface(window);
    image = SDL_LoadBMP("hello.bmp");

    SDL_BlitSurface(image, NULL, screen, NULL);
    SDL_FreeSurface(image);

    SDL_UpdateWindowSurface(window);

    SDL_Delay(50000);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
