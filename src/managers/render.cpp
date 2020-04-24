#include "render.h"
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

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

    sprites.reserve(100); //TODO:Magic number
    return true;
}

void Render_t::BlitTexture(SDL_Texture* tex, SDL_Rect& src, SDL_Rect& dst){
    SDL_RenderCopy( renderer, tex, &src, &dst );
}

bool Render_t::Update(float dt){
    for (auto& sprite : sprites) {

        SDL_Rect rect;
        rect.x = sprite.rect.x + sprite.currentFrame * sprite.frameOffset;
        rect.y = sprite.rect.y;
        rect.w = sprite.rect.w;
        rect.h = sprite.rect.h;

        SDL_Rect rect2;
        rect2.x = 0;
        rect2.y = 0;
        rect2.w = sprite.rect.w * sprite.scale;
        rect2.h = sprite.rect.h * sprite.scale;
        BlitTexture(sprite.texture, rect, rect2 );
        
        if (sprite.elapsedFrameTime > sprite.frameTime){
            ++sprite.currentFrame;
            sprite.elapsedFrameTime = 0.f;
        }
        else
            sprite.elapsedFrameTime += dt;

        if (sprite.currentFrame == sprite.frameCount)
            sprite.currentFrame = 0;
    }

    SDL_RenderPresent(renderer);
      
    SDL_RenderClear(renderer);
    return true;
}

bool Render_t::Clean(){
    for (auto& t : textures){
        SDL_DestroyTexture(t.second);
    }

    SDL_DestroyWindow(window);
    SDL_Quit(); 
    return true;
}

SDL_Texture* Render_t::LoadTexture(const std::string& name){

    auto it = textures.find(name); //Query if it's already loaded
    if (it != textures.end())
        return (*it).second;

    SDL_Texture* newTexture = NULL;

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( name.c_str() );
    if( loadedSurface == nullptr )
    {
        std::cout << "Unable to load image " << name.c_str() << "! SDL_image Error: " << IMG_GetError() << "\n";
        return nullptr;
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
        if( newTexture == nullptr )
        {
          std::cout << "Unable to create texture from " << name.c_str() << "! SDL Error: " << SDL_GetError() << "\n";
            return nullptr;
        }

        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }

    std::cout << name << " texture loaded.\n";
    textures.insert(std::make_pair(name, newTexture));
    return newTexture;
}

Sprite_t* Render_t::CreateSprite(const std::string& name, uint16_t xR, uint16_t yR, uint16_t wR, uint16_t hR,
    float scale, uint8_t fps, uint8_t frameCount, uint8_t frameOffset){

    auto tex = LoadTexture(name);
    if (tex){ 
        sprites.emplace_back(*this, tex, xR, yR, wR, hR, scale, fps, frameCount, frameOffset);
        return &(sprites.back());
    }
    return nullptr;
}

void Render_t::DestroyComponentsByEntityId(uint16_t eid){ //TODO: Can this be a generic method?
    for (auto it = sprites.begin(); it < sprites.end(); ++it){
        if ((*it).entityId == eid){
            std::iter_swap(it, sprites.end() - 1);
            sprites.pop_back();
        }
    }
}