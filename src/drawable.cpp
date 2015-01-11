#ifndef DRAWABLE_CPP
#define DRAWABLE_CPP

#include "drawable.h"

namespace flatcore
{
	Drawable::Drawable(ALLEGRO_BITMAP *abImage,
											int iZOrder,
											Vector vLocation)
	{
		m_abImage = abImage;
		m_iZOrder = iZOrder;
		
		//Set size
		int sx = al_get_bitmap_height(m_abImage);
		int sy = al_get_bitmap_width(m_abImage);
		m_vSize = Vector((double)sx, (double)sy);

		m_vLocation = vLocation;
	}

	Drawable::~Drawable()
	{
		al_destroy_bitmap(m_abImage);
	}

	//Getters/Setters
	ALLEGRO_BITMAP* Drawable::getImage() { return m_abImage; }
	void						Drawable::setImage(ALLEGRO_BITMAP *abImage) { m_abImage = abImage;}
	
	int							Drawable::getZOrder() { return m_iZOrder; }
	void						Drawable::setZOrder(int iZOrder) { m_iZOrder = iZOrder; }

	Vector					Drawable::getLocation() { return m_vLocation; }
	void						Drawable::setLocation(Vector vLocation) { m_vLocation = vLocation; }

	Vector					Drawable::getSize() { return m_vSize; }
	void						Drawable::setSize(Vector vSize) { m_vSize = vSize; }

	//Game Engine methods
	void Drawable::draw()
	{
		al_draw_bitmap(m_abImage, (int)m_vSize.X, (int)m_vSize.Y, 0);
	}

}

#endif
