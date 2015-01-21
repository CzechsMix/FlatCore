#include "headers.h"
#include "flatcore.h"
 
#define ever (;;)

using namespace flatcore;

int main(int arc, char **argv)
{
  GameEngine* engine = new GameEngine();

  if(engine->init())
  {
    for ever
    {
      if(engine->shouldQuit())
      {
        break;
      }
  
      engine->update();
      engine->draw();
    }
  }

  delete engine;
  return 0;
}
