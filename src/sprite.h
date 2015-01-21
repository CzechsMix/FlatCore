#ifndef SPRITE_H
#define SPRITE_H

#include "headers.h"
#include "tangible.h"

//for std::string
using namespace std;

namespace flatcore
{
  class Sprite: public Tangible
  {
    //member variables
    protected:
      Vector              velocity;

    public:
      //Ctor
      Sprite(ALLEGRO_BITMAP* image,
              int z_order,
              Vector location,
              Vector velocity);
      
      //Dtor
      ~Sprite();

      //Getters/Setters
      //Velocity
      Vector              getVelocity();
      void                setVelocity(Vector velocity);


      //Game Engine Methods
      virtual void        update(int time = 20);

  };
}

#endif //SPRITE_H
