#pragma once
#include "manager.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <component/sprite.h>

struct SDL_Window;
struct SDL_Renderer;
struct SDL_Texture;
struct SDL_Rect;

struct Render_t : public Manager_t
{

    bool Start() override;
    bool Update(float dt) override;
    bool Clean() override;
    void DestroyComponentsByEntityId(uint16_t eid) override;

    //TODO: Too many parameters
    Sprite_t* CreateSprite(const std::string& name, uint16_t xR, uint16_t yR, uint16_t wR, uint16_t hR,
      float scale = 1.0f, uint8_t fps = 0, uint8_t frameCount = 0, uint8_t frameOffset = 0);

    SDL_Texture* LoadTexture(const std::string& name);
    void BlitTexture(SDL_Texture* tex, SDL_Rect& src, SDL_Rect& dst);
    
private:

  SDL_Window* window = nullptr;
  SDL_Renderer* renderer = nullptr;
  std::vector<Sprite_t> sprites;
  std::unordered_map<std::string, SDL_Texture*> textures;
};
