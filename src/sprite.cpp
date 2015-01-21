#ifndef SPRITE_CPP
#define SPRITE_CPP

#include "sprite.h"

namespace flatcore
{
  Sprite::Sprite(ALLEGRO_BITMAP* image,
                int z_order,
                Vector location,
                Vector velocity) : Tangible(image, z_order, location)
  {
    //Call super?

    //set velocity
    this->velocity = velocity;
  }

  Sprite::~Sprite()
  {
    /* empty */
  }

  //Getters/Setters
  Vector          Sprite::getVelocity() { return this->velocity; }
  void            Sprite::setVelocity(Vector vVelocity) { this->velocity = velocity; }

  //Game Engine methods

  void Sprite::update(int time) 
  {
    /* empty */ 
  }

}

#endif
