#ifndef DRAWABLE_H
#define DRAWABLE_H


#include "headers.h"

namespace flatcore
{
	class Drawable
	{
		protected:			
			ALLEGRO_BITMAP* 		m_abImage;
			int 								m_iZOrder;
			Vector							m_vLocation;
			Vector							m_vSize;

		public:
			Drawable(ALLEGRO_BITMAP *abImage,
								int iZOrder,
								Vector vLocation);

			~Drawable();
			
			//Image
			ALLEGRO_BITMAP*			getImage();
			void								setImage(ALLEGRO_BITMAP *abImage);
			//Z-Order
			int									getZOrder();
			void								setZOrder(int iZOrder);
			//Location
			Vector							getLocation();
			void								setLocation(Vector vLocation);
			//Size
			Vector							getSize();
			void								setSize(Vector vSize);

			//Game Engine Methods			
			virtual void				draw();
	};
}

#endif
