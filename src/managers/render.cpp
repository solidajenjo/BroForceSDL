#include "render.h"
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>
#include "component/sprite.h"

#define WIDTH 800

#define HEIGHT 450

bool Render_t::Start(){
    
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {

        std::cout << "SDL failed to initialise: " << SDL_GetError() << "\n";
        return false;

    }

    window = SDL_CreateWindow("Dot Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);

    if (window == nullptr) {
        fprintf(stderr, "SDL window failed to initialise: %s\n", SDL_GetError());
        std::cout << "SDL window failed to initialise: " << SDL_GetError() << "\n";
        return false;

    }

    //Initialize PNG loading
    int imgFlags = IMG_INIT_PNG;
    if( !( IMG_Init( imgFlags ) & imgFlags ) )
    {
        std::cout << "SDL_image could not initialize! SDL_image Error: " << IMG_GetError() << "\n";
        return false;
    }

    SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF );

    return true;
}

bool Render_t::Update(){
    SDL_Rect rect;
    rect.x = sprites[0]->rect.x + sprites[0]->currentFrame * sprites[0]->frameOffset;
    rect.y = sprites[0]->rect.y;
    rect.w = sprites[0]->rect.w;
    rect.h = sprites[0]->rect.h;

    SDL_Rect rect2;
    rect2.x = 100;
    rect2.y = 100;
    rect2.w = sprites[0]->rect.w * 3;
    rect2.h = sprites[0]->rect.h * 3;
    SDL_RenderCopy( renderer, sprites[0]->texture, &rect, &rect2 );

    SDL_RenderPresent(renderer);
      
    SDL_RenderClear(renderer);
    ++sprites[0]->currentFrame;
    if (sprites[0]->currentFrame == sprites[0]->frameCount)
        sprites[0]->currentFrame = 0;

    SDL_Delay(100);
    return true;
}

bool Render_t::Clean(){
  SDL_DestroyWindow(window);
  SDL_Quit(); 
  return true;
}

void Render_t::AddSprite(const std::string& name){

    SDL_Texture* newTexture = NULL;

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( name.c_str() );
    if( loadedSurface == nullptr )
    {
        std::cout << "Unable to load image " << name.c_str() << "! SDL_image Error: " << IMG_GetError() << "\n";
        return;
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
        if( newTexture == nullptr )
        {
          std::cout << "Unable to create texture from " << name.c_str() << "! SDL Error: " << SDL_GetError() << "\n";
        }

        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }

    std::cout << name << " texture loaded.\n";

    Sprite_t* s = new Sprite_t();
    s->texture = newTexture;
    s->rect.x = 18;
    s->rect.y = 22;
    s->rect.w = 15;
    s->rect.h = 20;
    s->frameOffset = 32;
    s->frameCount = 4;
    sprites.push_back(s);
}