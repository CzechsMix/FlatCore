#ifndef SPRITE_CPP
#define SPRITE_CPP

#include "sprite.h"

namespace flatcore
{
	Sprite::Sprite(ALLEGRO_BITMAP *abImage,
							int iZOrder,
							Vector vLocation,
							Vector vVelocity) : Drawable(abImage, iZOrder, vLocation)
	{
		//Call super?

		//set velocity
		m_vVelocity = vVelocity;
	}

	Sprite::~Sprite()
	{
		/* empty */
	}

	//Getters/Setters
	Vector					Sprite::getVelocity() { return m_vVelocity; }
	void						Sprite::setVelocity(Vector vVelocity) { m_vVelocity = vVelocity; }

	//Game Engine methods

	void Sprite::update() 
	{
		/* empty */ 
	}

	void Sprite::handleCollision(Sprite* spCollider)
	{
		/* empty */
	}
}

#endif
