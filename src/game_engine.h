#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "sprite.h"

using namespace std;

namespace flatcore
{
  class GameEngine
  {
    private:
      list<Drawable*>       decor;
      list<Tangible*>       environment;
      list<Sprite*>         actors;
      bool                  quit;
      ALLEGRO_DISPLAY*      display;
      ALLEGRO_EVENT_QUEUE*  event_queue;
      uint                  frame;
      int                   width;
      int                   height;
      
    public:
      //Ctor
      GameEngine();

      //Dtor
      ~GameEngine();

      bool                init();
      void                update();
      void                draw();
      bool                shouldQuit();
  };
}

#endif
