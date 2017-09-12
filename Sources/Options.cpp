#include "..\Headers\Options.h"

Options::Options(float width, float height)
{
	if (!font.loadFromFile("resources/Lato-Regular.ttf"))
	{
		//DON'T REMOVE FONTS FILES!
	}
	options[0].setFont(font);
	options[0].setFillColor(sf::Color::White);
	options[0].setString("Options");
	options[0].setPosition(sf::Vector2f(width / 2.5, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

	options[1].setFont(font);
	options[1].setFillColor(sf::Color::Red);
	options[1].setString("Resolution");
	options[1].setPosition(sf::Vector2f(width / 10, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	options[2].setFont(font);
	options[2].setFillColor(sf::Color::White);
	options[2].setString("SOON");
	options[2].setPosition(sf::Vector2f(width / 10, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

	options[3].setFont(font);
	options[3].setFillColor(sf::Color::White);
	options[3].setString("Custom");
	options[3].setPosition(sf::Vector2f(width / 1.75, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	selectedItemIndex = 1;
}


Options::~Options()
{
}

void Options::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
		window.draw(options[i]);
}

void Options::MoveUp()
{
	if (selectedItemIndex - 1 >= 1)
	{
		options[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		options[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}

void Options::MoveDn()
{
	if (selectedItemIndex + 1 < (MAX_NUMBER_OF_ITEMS - 1))
	{
		options[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		options[selectedItemIndex].setFillColor(sf::Color::Red);
	}
}