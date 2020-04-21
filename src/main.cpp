#include "managers/render.h"
#include "managers/input.h"

int main (int argc, char **argv)

{

  Render_t render;
  Input_t input;
  render.Start();
  render.AddSprite("/home/ruben/Projects/BroForceSDL/resources/img/Brobocop.png");

  while (!input.quit){
    input.Update();
    render.Update();
  }
  render.Clean();
  return 0;

}