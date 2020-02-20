#include "Ball3.h"

Ball3::Ball3()
{
	direction = { 0,0 };
}

void Ball3::handleInput(float dt)
{
	if (input->isMouseLDown())
	{
		if (!hold)
		{
			direction = sf::Vector2f(input->getMouseX(), input->getMouseY());
			hold = true;
		};
	}
	else if (hold)
	{
		direction = sf::Vector2f( input->getMouseX() - direction.x, input->getMouseY() - direction.y );
		hold = false;
		velocity = direction*0.2f*scale;
	}
		
		
		



}