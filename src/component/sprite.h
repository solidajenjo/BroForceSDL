#pragma once
#include "component.h"

struct SDL_Texture;

struct Sprite_t : public Component_t
{

    Sprite_t () = delete;
    Sprite_t (uint16_t xR, uint16_t yR, uint16_t wR, uint16_t hR, float scale = 1.f,
        uint8_t fps = 0, uint8_t frameCount = 0, uint8_t frameOffset = 0):
        frameTime( 1.f / fps), frameCount(frameCount), frameOffset(frameOffset), 
        rect({xR, yR, wR, hR}), scale(scale) {}

    inline void Reset() { elapsedFrameTime = 0.f; }

    float frameTime;
    uint8_t currentFrame = 0;
    uint8_t frameCount = 0;
    uint8_t frameOffset = 0;

    struct{
        uint16_t x, y;
        uint16_t w, h;
    } rect;

    float scale;
    SDL_Texture* texture = nullptr;
    float elapsedFrameTime = 0.f;
};
