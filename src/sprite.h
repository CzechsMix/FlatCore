#ifndef SPRITE_H
#define SPRITE_H

#include "headers.h"
#include "drawable.h"

//for std::string
using namespace std;

namespace flatcore
{
	class Sprite: public Drawable
	{
		//member variables
		protected:
			Vector							m_vVelocity;

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
			Vector							getVelocity();
			void								setVelocity(Vector vVelocity);


			//Game Engine Methods
			virtual void				update();
			virtual void				handleCollision(Sprite* spCollider);

	};
}

#endif //SPRITE_H
