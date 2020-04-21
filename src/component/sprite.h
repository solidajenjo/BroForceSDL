#pragma once
#include "component.h"

struct SDL_Texture;

struct Sprite_t : public Component_t
{
    uint8_t currentFrame = 0;
    uint8_t frameCount = 0;
    uint8_t frameOffset = 0;
    
    struct{
        uint16_t x, y;
        uint16_t w, h;
    } rect;

    SDL_Texture* texture;
};
