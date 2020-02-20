#include "BauncyBaul.h"

BauncyBaul::BauncyBaul()
{
	// initialise gravity value (gravity 9.8, 200 scale, 200 p/s this will need to be uniform)
	scale = 200.0f;
	gravity = sf::Vector2f(0, 9.8f) * scale;
}

void BauncyBaul::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space)&&grounded)
	{
		velocity = bounce * scale;
		grounded = false;
	}

	if (input->isMouseRDown())
	{
		setPosition(input->getMouseX(), input->getMouseY());
		grounded = false;
	}
}

void BauncyBaul::update(float dt)
{
	// Apply gravity force, increasing velocity
	// Move shape by new velocity
	sf::Vector2f pos = velocity*dt+0.5f*gravity*dt*dt; //ut+ 1/2at^2
	velocity+=gravity *dt; // v = u + at  note the += is not =setPosition(getPosition() +pos);
	setPosition(getPosition() + pos);

	 // Check for collision with bottom of window
	if(getPosition().y >= 500)
	{
		setPosition(getPosition().x, 500);
		velocity= sf::Vector2f(velocity.x,-velocity.y)*0.6f;
		grounded = true;
	}
}
