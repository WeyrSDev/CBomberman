#pragma once
#include <SFML\Graphics.hpp>

#define MAX_NUMBER_OF_ITEMS 4
class Options
{
public:
	Options(float width, float height);
	~Options();

	void draw(sf::RenderWindow &window);
	void MoveUp();
	void MoveDn();
	int GetPressedItem() { return selectedItemIndex; }

private:
	int selectedItemIndex;
	sf::Font font;
	sf::Text options[MAX_NUMBER_OF_ITEMS];
};