#include "SDL2/SDL.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Surface *message = NULL;
SDL_Surface *background = NULL;
SDL_Surface *screen = NULL;
SDL_Window *window = NULL;

SDL_Surface * Load_image(const char filename[]);
void ApplySurface(int x, int y, SDL_Surface *source, SDL_Surface *destination);

int main(int *argc, char *argv[])
{
    if (SDL_Init(SDL_INIT_EVERYTHING) == -1)
    {
        throw(SDL_GetError());
    }

    window = SDL_CreateWindow("Hello", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_RESIZABLE);
    screen = SDL_GetWindowSurface(window);

    background = Load_image("background.bmp");
    message = Load_image("hello.bmp");

    ApplySurface(0, 0, background, screen);
    ApplySurface(0, 140, message, screen);
    SDL_Delay(5000);

    SDL_Quit();
    return 0;
}

SDL_Surface * Load_image(const char filename[])
{
    SDL_Surface *loadedImage = NULL;
    SDL_Surface * optimizedImage = NULL;

    loadedImage = SDL_LoadBMP(filename);

    if (loadedImage != NULL)
    {
        optimizedImage = SDL_ConvertSurfaceFormat(loadedImage, SDL_PIXELFORMAT_RGBA5551, 0);
        SDL_FreeSurface(loadedImage);
    }

    return optimizedImage;
}

void ApplySurface(int x, int y, SDL_Surface *source, SDL_Surface *destination)
{
    SDL_Rect offset;

    offset.x = x;
    offset.y = y;

    SDL_BlitSurface(source, NULL, destination, &offset);
    SDL_UpdateWindowSurface(window);
}

