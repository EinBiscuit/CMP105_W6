#include "Ball2.h"

Ball2::Ball2()
{
	scale = 200.0f;
	acceleration = 5.0f * scale;
	speed = 0;
}

void Ball2::handleInput(float dt)
{
	End = sf::Vector2f(input->getMouseX(), input->getMouseY());
}

void Ball2::update(float dt)
{
	speed += acceleration*dt; // v = u + at  note the += is not =setPosition(getPosition() +pos);

	// calculate direction and move
	direction = End - getPosition();
	direction = Vector::normalise(direction);
	velocity = (direction * speed); 

	move(velocity * dt);

	// if object is close enough to target
	if(Vector::magnitude(End -getPosition()) < 10.f)
	{
		setPosition(End);
		speed = 0;
	}

	//// calculate direction and move
	//direction =End -getPosition();
	//direction =Vector::normalise(direction);
	//velocity =(direction *speed);
	//setPosition(getPosition() + (velocity*dt));
	//// if object is close enough to target
	//if(Vector::magnitude(End -getPosition()) < 10.f){setPosition(End);}
	
}
