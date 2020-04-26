#include "managers/render.h"
#include "managers/input.h"
#include "managers/timeLogic.h"
#include "managers/entityManager.h"
#include "component/sprite.h"
#include "component/entity.h"

int main (int argc, char **argv)
{
  TimeLogic_t time;
  Render_t render;
  Input_t input;
  EntityMan_t entityMan;

  render.Start();
  render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/bg.png", 
    0, 0, 800, 450);
  render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/bg.png", 
    0, 0, 800, 450);
  Entity_t& player = entityMan.CreateEntity();
  {  
  auto sprite = render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/Brobocop.png", 
      18, 22, 15, 20, 3, 10, 4, 32);
  
  player.AddComponent(sprite);

  Entity_t& player2 = entityMan.CreateEntity();
    
  auto sprite2 = render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/Brobocop.png", 
      18, 22, 15, 20, 3, 10, 4, 32);
  
  player2.AddComponent(sprite2);

  Entity_t& player3 = entityMan.CreateEntity();
    
  auto sprite3 = render.CreateSprite("/home/ruben/Projects/BroForceSDL/resources/img/Brobocop.png", 
      18, 22, 15, 20, 3, 10, 4, 32);
  
  player3.AddComponent(sprite3);
  }
  entityMan.DestroyEntity(2);

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