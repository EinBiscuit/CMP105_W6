#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	baul.loadFromFile("gfx/Beach_Ball.png");

	bauncy.setInput(input);
	bauncy.setSize(sf::Vector2f(100, 100));
	bauncy.setPosition(300,100);
	bauncy.setTexture(&baul);

	tailball.setInput(input);
	tailball.setSize(sf::Vector2f(100, 100));
	tailball.setOrigin(50, 50);
	tailball.setPosition(300, 100);
	tailball.setTexture(&baul);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	bauncy.handleInput(dt);
	tailball.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	bauncy.update(dt);
	tailball.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(bauncy);
	window->draw(tailball);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}