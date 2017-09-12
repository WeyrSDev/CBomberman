#pragma once
#include <SFML\Graphics.hpp>

#define MAX_NUMBER_OF_ITEMS 3
class Credits
{
public:
	Credits(float width, float height);
	~Credits();

	void draw(sf::RenderWindow &window);

private:
	sf::Font font;
	sf::Text credits[MAX_NUMBER_OF_ITEMS];
};