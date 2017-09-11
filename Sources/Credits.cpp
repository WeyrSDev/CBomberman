<<<<<<< HEAD
#include "../Headers/Credits.h"


Credits::Credits(float width, float height)
{
	if (!font.loadFromFile("resources/Lato-Regular.ttf"))
	{
		//DON'T REMOVE FONTS FILES!
	}
	credits[0].setFont(font);
	credits[0].setFillColor(sf::Color::White);
	credits[0].setString("CBomberman");
	credits[0].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

	credits[1].setFont(font);
	credits[1].setFillColor(sf::Color::White);
	credits[1].setString("Game by: kRkk");
	credits[1].setPosition(sf::Vector2f(width / 10, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	credits[2].setFont(font);
	credits[2].setFillColor(sf::Color::White);
	credits[2].setString("Special thnx to: dawidllx");
	credits[2].setPosition(sf::Vector2f(width / 10, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));
}


Credits::~Credits()
{
}

void Credits::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
		window.draw(credits[i]);
}
=======
#include "../Headers/Credits.h"


Credits::Credits(float width, float height)
{
	if (!font.loadFromFile("resources/Lato-Regular.ttf"))
	{
		//DON'T REMOVE FONTS FILES!
	}
	credits[0].setFont(font);
	credits[0].setFillColor(sf::Color::White);
	credits[0].setString("CBomberman");
	credits[0].setPosition(sf::Vector2f(width / 3, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

	credits[1].setFont(font);
	credits[1].setFillColor(sf::Color::White);
	credits[1].setString("Game by: kRkk");
	credits[1].setPosition(sf::Vector2f(width / 10, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

	credits[2].setFont(font);
	credits[2].setFillColor(sf::Color::White);
	credits[2].setString("Special thnx for: dawidllx");
	credits[2].setPosition(sf::Vector2f(width / 10, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));
}


Credits::~Credits()
{
}

void Credits::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
		window.draw(credits[i]);
}
>>>>>>> 6dd881ec013b7e2de24b78f01493a5bdb5a820d7
