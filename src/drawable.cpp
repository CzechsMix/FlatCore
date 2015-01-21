#ifndef DRAWABLE_CPP
#define DRAWABLE_CPP

#include "drawable.h"

namespace flatcore
{
  Drawable::Drawable(ALLEGRO_BITMAP* image,
                      int z_order,
                      Vector location)
  {
    this->image = image;
    this->z_order = z_order;
    
    //Set size
    int sx = al_get_bitmap_height(this->image);
    int sy = al_get_bitmap_width(this->image);
    this->size = Vector((double)sx, (double)sy);

    this->location = location;
  }

  Drawable::~Drawable()
  {
    al_destroy_bitmap(this->image);
  }

  //Getters/Setters
  ALLEGRO_BITMAP* Drawable::getImage() { return this->image; }
  void            Drawable::setImage(ALLEGRO_BITMAP* image) { this->image = image;}
  
  int             Drawable::getZOrder() { return this->z_order; }
  void            Drawable::setZOrder(int z_order) { this->z_order = z_order; }

  Vector          Drawable::getLocation() { return this->location; }
  void            Drawable::setLocation(Vector location) { this->location = location; }

  Vector          Drawable::getSize() { return size; }
  void            Drawable::setSize(Vector vSize) { this->size = size; }

  //Game Engine methods
  void Drawable::draw()
  {
    al_draw_bitmap(this->image, this->size.X, this->size.Y, 0);
  }

}

#endif
