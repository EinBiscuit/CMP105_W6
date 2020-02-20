#pragma once
#include "Framework/GameObject.h"
class BauncyBaul :
	public GameObject
{
public:
	sf::Vector2f gravity;
	sf::Vector2f bounce = sf::Vector2f(0, -5.f);
	float scale;

	bool grounded = false;

	BauncyBaul();
	void handleInput(float dt);
	void update(float dt);
	void setWindow(sf::Window* W) { window = W; };
};

