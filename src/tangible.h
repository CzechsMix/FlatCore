#ifndef TANGIBLE_H
#define TANGIBLE_H

#include "drawable.h"

namespace flatcore
{
  class Tangible: public Drawable
  {
    protected:
      //None

    public:
      //Ctor
      Tangible(ALLEGRO_BITMAP* image,
                int z_order,
                Vector location);

      //Dtor
      ~Tangible();
      
      //Game Engine Methods    
      virtual void        handleCollision(Tangible* collider);

  };
}

#endif
