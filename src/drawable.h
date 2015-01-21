#ifndef DRAWABLE_H
#define DRAWABLE_H


#include "headers.h"

namespace flatcore
{
  class Drawable
  {
    protected:      
      ALLEGRO_BITMAP*     image;
      int                 z_order;
      Vector              location;
      Vector              size;

    public:
      Drawable(ALLEGRO_BITMAP* image,
                int z_order,
                Vector location);

      ~Drawable();
      
      //Image
      ALLEGRO_BITMAP*     getImage();
      void                setImage(ALLEGRO_BITMAP* image);
      //Z-Order
      int                 getZOrder();
      void                setZOrder(int z_order);
      //Location
      Vector              getLocation();
      void                setLocation(Vector location);
      //Size
      Vector              getSize();
      void                setSize(Vector size);

      //Game Engine Methods      
      virtual void        draw();
  };
}

#endif
