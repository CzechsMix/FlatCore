#ifndef TANGIBLE_CPP
#define TANGIBLE_CPP

#include "tangible.h"

namespace flatcore
{
  Tangible::Tangible(ALLEGRO_BITMAP* image,
                    int z_order,
                    Vector location) : Drawable(image, z_order, location)
  { /* Empty Ctor */ }

  Tangible::~Tangible()
  {
    /* empty */
  }

  
  void Tangible::handleCollision(Tangible* collider)
  {
    /* empty */
  }

}

#endif
