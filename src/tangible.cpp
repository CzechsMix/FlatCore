#ifndef TANGIBLE_CPP
#define TANGIBLE_CPP

#include "tangible.h"

namespace flatcore
{
  Tangible::Tangible(ALLEGRO_BITMAP *abImage,
                    int iZOrder,
                    Vector vLocation) : Drawable(abImage, iZOrder, vLocation)
  { /* Empty Ctor */ }

  Tangible::~Tangible()
  {
    /* empty */
  }

  
  void Tangible::handleCollision(Tangible* spCollider)
  {
    /* empty */
  }

}

#endif
