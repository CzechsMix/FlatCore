#ifndef SPRITE_H
#define SPRITE_H

#include "headers.h"

//for std::string
using namespace std;

namespace flatcore
{
	class Sprite
	{
		//member variables
		protected:
			ALLEGRO_BITMAP* 		m_abImage;
			int 								m_iZOrder;
			Vector							m_iLocation;
			Vector							m_iSize;
			Vector							m_iVelocity;

		public:
			//Ctor
			Sprite(string szImageFilename, int iZorder, Vector vLocation, Vector vVelocity);
			
			//Dtor
			~Sprite();

			//Getters/Setters
			//Image
			ALLEGRO_BITMAP*			getImage();
			void								setImage(ALLEGRO_BITMAP* abImage);
			//Z-Order
			int									getZOrder();
			void								setZOrder(int iZorder);
			//Location
			Vector							getLocation();
			void								setLocation(Vector vLocation)
			//Size
			Vector							getSize();
			void								setSize(Vector vSize);
			//Velocity
			Vector							getVelocity();
			void								setVelocity(Vector vVelocity);


			//Game Engine Methods
			void								update();
			void								draw();

	};
}
#endif //SPRITE_H
