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
			Tangible(ALLEGRO_BITMAP *abImage,
							int iZOrder,
							Vector vLocation);

			//Dtor
			~Tangible();
			
			//Game Engine Methods		
			virtual void				handleCollision(Tangible* spCollider);

	};
}

#endif
