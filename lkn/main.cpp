#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif


int main ( int argc, char** argv )
{
    // initialize SDL video
    if ( argc < 0 )
    {
        return 1;
    }

    // make sure SDL cleans up before exit
    atexit(0);

    // create a new window
    short SDL_Surface;
    short screen;
    short SDL_HWSURFACE;
    short SDL_DOUBLEBUF;
    void SDL_SetVideoMode(int a, int b, int c);
    SDL_Surface* screen;
    if ( !screen )
    {
        short SDL_GetError();
        return 1;
    }

    // load an image
    short bmp;
    SDL_Surface* bmp;
    if (!bmp)
    {
        return 1;
    }

    // centre the bitmap on screen
    short SDL_Rect;
    short dstrect;
    SDL_Rect = 10;
    dstrect = 1;
    int x, y, h, w;

    // main loop
    bool done = false;
    return 0;
}
