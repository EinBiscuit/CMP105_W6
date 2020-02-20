#pragma once

#include "BauncyBaul.h"

class Ball3 :
   public BauncyBaul
{
public:
	sf::Window* window;
	sf::Vector2f direction;
	bool hold = false;

	Ball3();
	void handleInput(float dt);
	
};

