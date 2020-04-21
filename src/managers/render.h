#pragma once
#include "manager.h"
#include <string>
#include <vector>

struct SDL_Window;
struct SDL_Renderer;
class Sprite_t;

struct Render_t : public Manager_t
{

    bool Start() override;
    bool Update() override;
    bool Clean() override;

    void AddSprite(const std::string& name);
    
private:

  SDL_Window* window = nullptr;
  SDL_Renderer* renderer = nullptr;
  std::vector<Sprite_t*> sprites;
};
