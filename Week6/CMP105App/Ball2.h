#pragma once
#include "Framework/GameObject.h"
#include "Framework/Vector.h"
class Ball2 :
	public GameObject
{
public:
	float acceleration;
	sf::Vector2f direction;
	float speed;
	sf::Vector2f End;
	float scale;

	Ball2();
	void handleInput(float dt);
	void update(float dt);
};

