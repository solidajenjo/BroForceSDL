#include "managers/render.h"
#include "managers/input.h"
#include "managers/timeLogic.h"
#include "managers/entity.h"
#include "component/sprite.h"

int main (int argc, char **argv)
{
  TimeLogic_t time;
  Render_t render;
  Input_t input;
  render.Start();
  render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/bg.png", 
    0, 0, 800, 450);
  render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/bg.png", 
    0, 0, 800, 450);
  Entity_t player;
  auto sprite = render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/Brobocop.png", 
      18, 22, 15, 20, 3, 10, 4, 32);
  
  Sprite_t s2 = *sprite;

  player.AddComponent(sprite);
    
  auto s = player.GetComponent<Sprite_t>();

  while (!input.quit){

    time.Update();

    input.Update(time.deltaTime);
    render.Update(time.deltaTime);
  }
  input.Clean();
  render.Clean();
  return 0;

}