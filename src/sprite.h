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
      Vector              m_vVelocity;

    public:
      //Ctor
      Sprite(ALLEGRO_BITMAP *abImage,
              int iZOrder,
              Vector vLocation,
              Vector vVelocity);
      
      //Dtor
      ~Sprite();

      //Getters/Setters
      //Velocity
      Vector              getVelocity();
      void                setVelocity(Vector vVelocity);


      //Game Engine Methods
      virtual void        update(int time = 20);

  };
}

#endif //SPRITE_H
