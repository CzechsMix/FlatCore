#ifndef GAME_ENGINE_CPP
#define GAME_ENGINE_CPP

#include "game_engine.h"

#include <iostream>
using namespace std;

namespace flatcore
{
    GameEngine::GameEngine()
    {
      display = NULL;
      event_queue = NULL;
      frame = 0;
    }

    GameEngine::~GameEngine()
    {
      //clean up display
      if(display)
      {
        al_destroy_display(display);
      }
      //clean up event_queue
      if(event_queue)
      {      
        al_destroy_event_queue(event_queue);
      }
    }

    void GameEngine::update()
    {
      ++frame;

      ALLEGRO_EVENT ev;
      ALLEGRO_TIMEOUT timeout;
      al_init_timeout(&timeout, 0.05);

      bool get_event = al_wait_for_event_until(event_queue, &ev, &timeout);
 
      if(get_event && ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
      {
        quit = true;
        return;
      }

      for (list<Sprite*>::iterator it = actors.begin(); it != actors.end(); ++it)
      {
        (*it)->update();
      }
    }

    void GameEngine::draw()
    {
      for (list<Drawable*>::iterator it = decor.begin(); it != decor.end(); ++it)
      {
        (*it)->draw();
      }

      for (list<Tangible*>::iterator it = environment.begin(); it != environment.end(); ++it)
      {
        (*it)->draw();
      }

      for (list<Sprite*>::iterator it = actors.begin(); it != actors.end(); ++it)
      {
        (*it)->draw();
      }

      
      al_clear_to_color(al_map_rgb(0,frame % 256,0));
      al_flip_display();
    }

    bool GameEngine::init()
    {
      if(!al_init())
      {
        cerr << "Error: Allegro failed to init!" << endl;
        return false;
      }

      //These dimensions need to be loaded out of a property file
      display = al_create_display(640, 480);
      if(!display)
      {
        cerr << "Error: failed to create display!" << endl;
        return false;
      }
     
      event_queue = al_create_event_queue();
      if(!event_queue) 
      {
        cerr << "Error: failed to create event_queue!" << endl;
        al_destroy_display(display);
        return false;
      }

      al_register_event_source(event_queue, al_get_display_event_source(display));
      return true;
    }

    bool GameEngine::shouldQuit()
    {
      return quit;
    }
}

#endif
