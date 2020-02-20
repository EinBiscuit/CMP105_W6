#pragma once
#include "Framework/GameObject.h"
#include "BauncyBaul.h"
class Ball3 :
	public GameObject, public BauncyBaul
{
public:
	sf::Window* window;



	Ball3();
	 void handleInput()

};

