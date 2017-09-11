<<<<<<< HEAD
#include <SFML\Graphics.hpp>
#include <iostream>
#include "Headers\Player.h"
#include "Headers\Block.h"
#include "Headers\Menu.h"
#include "Headers\Credits.h"

static const float VIEW_HEIGHT = 750.0f;
float playtime = 120.0f;
int play = 0;
int esc = 0;
void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float aspectRatio = float(window.getSize().x) / float(window.getSize().y);
	view.setSize(VIEW_HEIGHT * aspectRatio, VIEW_HEIGHT);
}

int main()
{
	std::cout << "Loading..." << std::endl;
	sf::RenderWindow window(sf::VideoMode(750, 750), "C++Bomberman v0.2.1", sf::Style::Close | sf::Style::Resize);
	sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, 750.0f));

	sf::Texture playerTxtr;
	sf::Texture blockTxtr1;
	sf::Texture blockTxtr2;

	playerTxtr.loadFromFile("resources/images/player.png"); // by creek23 https://opengameart.org/content/tux-the-linux-mascot on licence CC-BB-SA
	blockTxtr1.loadFromFile("resources/images/block1.png");	// by dawidllx#1536
	blockTxtr2.loadFromFile("resources/images/block2.png");	// thnx dawidllx

	Menu menu(window.getSize().x, window.getSize().y);
	Credits credits(window.getSize().x, window.getSize().y);
	Block CornerTL(&blockTxtr2, sf::Vector2f(-50.0f, 170.0f));
	Block CornerT01(&blockTxtr2, sf::Vector2f(000.0f, 170.0f));
	Block CornerT02(&blockTxtr2, sf::Vector2f(050.0f, 170.0f));
	Block CornerT03(&blockTxtr2, sf::Vector2f(100.0f, 170.0f));
	Block CornerT04(&blockTxtr2, sf::Vector2f(150.0f, 170.0f));
	Block CornerT05(&blockTxtr2, sf::Vector2f(200.0f, 170.0f));
	Block CornerT06(&blockTxtr2, sf::Vector2f(250.0f, 170.0f));
	Block CornerT07(&blockTxtr2, sf::Vector2f(300.0f, 170.0f));
	Block CornerT08(&blockTxtr2, sf::Vector2f(350.0f, 170.0f));
	Block CornerT09(&blockTxtr2, sf::Vector2f(400.0f, 170.0f));
	Block CornerT10(&blockTxtr2, sf::Vector2f(450.0f, 170.0f));
	Block CornerT11(&blockTxtr2, sf::Vector2f(500.0f, 170.0f));
	Block CornerT12(&blockTxtr2, sf::Vector2f(550.0f, 170.0f));
	Block CornerT13(&blockTxtr2, sf::Vector2f(600.0f, 170.0f));
	Block CornerT14(&blockTxtr2, sf::Vector2f(650.0f, 170.0f));
	Block CornerT15(&blockTxtr2, sf::Vector2f(700.0f, 170.0f));
	Block CornerTR(&blockTxtr2, sf::Vector2f(750.0f, 170.0f));
	Block CornerR01(&blockTxtr2, sf::Vector2f(750.0f, 220.0f));
	Block CornerR02(&blockTxtr2, sf::Vector2f(750.0f, 270.0f)); //R2D2 here
	Block CornerR03(&blockTxtr2, sf::Vector2f(750.0f, 320.0f));
	Block CornerR04(&blockTxtr2, sf::Vector2f(750.0f, 370.0f));
	Block CornerR05(&blockTxtr2, sf::Vector2f(750.0f, 420.0f));
	Block CornerR06(&blockTxtr2, sf::Vector2f(750.0f, 470.0f));
	Block CornerR07(&blockTxtr2, sf::Vector2f(750.0f, 520.0f));
	Block CornerR08(&blockTxtr2, sf::Vector2f(750.0f, 570.0f));
	Block CornerR09(&blockTxtr2, sf::Vector2f(750.0f, 620.0f));
	Block CornerR10(&blockTxtr2, sf::Vector2f(750.0f, 670.0f));
	Block CornerR11(&blockTxtr2, sf::Vector2f(750.0f, 720.0f));
	Block CornerBR(&blockTxtr2, sf::Vector2f(750.0f, 770.0f));
	Block CornerB01(&blockTxtr2, sf::Vector2f(000.0f, 770.0f));
	Block CornerB02(&blockTxtr2, sf::Vector2f(050.0f, 770.0f));
	Block CornerB03(&blockTxtr2, sf::Vector2f(100.0f, 770.0f));
	Block CornerB04(&blockTxtr2, sf::Vector2f(150.0f, 770.0f));
	Block CornerB05(&blockTxtr2, sf::Vector2f(200.0f, 770.0f));
	Block CornerB06(&blockTxtr2, sf::Vector2f(250.0f, 770.0f));
	Block CornerB07(&blockTxtr2, sf::Vector2f(300.0f, 770.0f));
	Block CornerB08(&blockTxtr2, sf::Vector2f(350.0f, 770.0f));
	Block CornerB09(&blockTxtr2, sf::Vector2f(400.0f, 770.0f));
	Block CornerB10(&blockTxtr2, sf::Vector2f(450.0f, 770.0f));
	Block CornerB11(&blockTxtr2, sf::Vector2f(500.0f, 770.0f));
	Block CornerB12(&blockTxtr2, sf::Vector2f(550.0f, 770.0f));
	Block CornerB13(&blockTxtr2, sf::Vector2f(600.0f, 770.0f));
	Block CornerB14(&blockTxtr2, sf::Vector2f(650.0f, 770.0f));
	Block CornerB15(&blockTxtr2, sf::Vector2f(700.0f, 770.0f));
	Block CornerBL(&blockTxtr2, sf::Vector2f(-50.0f, 770.0f));
	Block CornerL01(&blockTxtr2, sf::Vector2f(-50.0f, 220.0f));
	Block CornerL02(&blockTxtr2, sf::Vector2f(-50.0f, 270.0f)); 
	Block CornerL03(&blockTxtr2, sf::Vector2f(-50.0f, 320.0f));
	Block CornerL04(&blockTxtr2, sf::Vector2f(-50.0f, 370.0f));
	Block CornerL05(&blockTxtr2, sf::Vector2f(-50.0f, 420.0f));
	Block CornerL06(&blockTxtr2, sf::Vector2f(-50.0f, 470.0f));
	Block CornerL07(&blockTxtr2, sf::Vector2f(-50.0f, 520.0f));
	Block CornerL08(&blockTxtr2, sf::Vector2f(-50.0f, 570.0f));
	Block CornerL09(&blockTxtr2, sf::Vector2f(-50.0f, 620.0f));
	Block CornerL10(&blockTxtr2, sf::Vector2f(-50.0f, 670.0f));
	Block CornerL11(&blockTxtr2, sf::Vector2f(-50.0f, 720.0f));

	Block block1a(&blockTxtr1, sf::Vector2f(000.f, 220.0f));
	Block block1b(&blockTxtr1, sf::Vector2f(050.f, 220.0f));
	Block block1c(&blockTxtr1, sf::Vector2f(100.f, 220.0f));
	Block block1d(&blockTxtr1, sf::Vector2f(150.f, 220.0f));
	Block block1e(&blockTxtr1, sf::Vector2f(200.f, 220.0f));
	Block block1f(&blockTxtr1, sf::Vector2f(250.f, 220.0f));
	Block block1g(&blockTxtr1, sf::Vector2f(300.f, 220.0f));
	Block block1h(&blockTxtr1, sf::Vector2f(350.f, 220.0f));
	Block block1i(&blockTxtr1, sf::Vector2f(400.f, 220.0f));
	Block block1j(&blockTxtr1, sf::Vector2f(450.f, 220.0f));
	Block block1k(&blockTxtr1, sf::Vector2f(500.f, 220.0f));
	Block block1l(&blockTxtr1, sf::Vector2f(550.f, 220.0f));
	Block block1m(&blockTxtr1, sf::Vector2f(600.f, 220.0f));
	Block block1n(&blockTxtr1, sf::Vector2f(650.f, 220.0f));
	Block block1o(&blockTxtr1, sf::Vector2f(700.f, 220.0f));

	Block block2a(&blockTxtr1, sf::Vector2f(000.f, 270.0f));
	Block block2b(&blockTxtr2, sf::Vector2f(050.f, 270.0f));
	Block block2c(&blockTxtr1, sf::Vector2f(100.f, 270.0f));
	Block block2d(&blockTxtr2, sf::Vector2f(150.f, 270.0f));
	Block block2e(&blockTxtr1, sf::Vector2f(200.f, 270.0f));
	Block block2f(&blockTxtr2, sf::Vector2f(250.f, 270.0f));
	Block block2g(&blockTxtr1, sf::Vector2f(300.f, 270.0f));
	Block block2h(&blockTxtr2, sf::Vector2f(350.f, 270.0f));
	Block block2i(&blockTxtr1, sf::Vector2f(400.f, 270.0f));
	Block block2j(&blockTxtr2, sf::Vector2f(450.f, 270.0f));
	Block block2k(&blockTxtr1, sf::Vector2f(500.f, 270.0f));
	Block block2l(&blockTxtr2, sf::Vector2f(550.f, 270.0f));
	Block block2m(&blockTxtr1, sf::Vector2f(600.f, 270.0f));
	Block block2n(&blockTxtr2, sf::Vector2f(650.f, 270.0f));
	Block block2o(&blockTxtr1, sf::Vector2f(700.f, 270.0f));

	Block block3a(&blockTxtr1, sf::Vector2f(000.f, 320.0f));
	Block block3b(&blockTxtr1, sf::Vector2f(050.f, 320.0f));
	Block block3c(&blockTxtr1, sf::Vector2f(100.f, 320.0f));
	Block block3d(&blockTxtr1, sf::Vector2f(150.f, 320.0f));
	Block block3e(&blockTxtr1, sf::Vector2f(200.f, 320.0f));
	Block block3f(&blockTxtr1, sf::Vector2f(250.f, 320.0f));
	Block block3g(&blockTxtr1, sf::Vector2f(300.f, 320.0f));
	Block block3h(&blockTxtr1, sf::Vector2f(350.f, 320.0f));
	Block block3i(&blockTxtr1, sf::Vector2f(400.f, 320.0f));
	Block block3j(&blockTxtr1, sf::Vector2f(450.f, 320.0f));
	Block block3k(&blockTxtr1, sf::Vector2f(500.f, 320.0f));
	Block block3l(&blockTxtr1, sf::Vector2f(550.f, 320.0f));
	Block block3m(&blockTxtr1, sf::Vector2f(600.f, 320.0f));
	Block block3n(&blockTxtr1, sf::Vector2f(650.f, 320.0f));
	Block block3o(&blockTxtr1, sf::Vector2f(700.f, 320.0f));

	Block block4a(&blockTxtr1, sf::Vector2f(000.f, 370.0f));
	Block block4b(&blockTxtr2, sf::Vector2f(050.f, 370.0f));
	Block block4c(&blockTxtr1, sf::Vector2f(100.f, 370.0f));
	Block block4d(&blockTxtr2, sf::Vector2f(150.f, 370.0f));
	Block block4e(&blockTxtr1, sf::Vector2f(200.f, 370.0f));
	Block block4f(&blockTxtr2, sf::Vector2f(250.f, 370.0f));
	Block block4g(&blockTxtr1, sf::Vector2f(300.f, 370.0f));
	Block block4h(&blockTxtr2, sf::Vector2f(350.f, 370.0f));
	Block block4i(&blockTxtr1, sf::Vector2f(400.f, 370.0f));
	Block block4j(&blockTxtr2, sf::Vector2f(450.f, 370.0f));
	Block block4k(&blockTxtr1, sf::Vector2f(500.f, 370.0f));
	Block block4l(&blockTxtr2, sf::Vector2f(550.f, 370.0f));
	Block block4m(&blockTxtr1, sf::Vector2f(600.f, 370.0f));
	Block block4n(&blockTxtr2, sf::Vector2f(650.f, 370.0f));
	Block block4o(&blockTxtr1, sf::Vector2f(700.f, 370.0f));

	Block block5a(&blockTxtr1, sf::Vector2f(000.f, 420.0f));
	Block block5b(&blockTxtr1, sf::Vector2f(050.f, 420.0f));
	Block block5c(&blockTxtr1, sf::Vector2f(100.f, 420.0f));
	Block block5d(&blockTxtr1, sf::Vector2f(150.f, 420.0f));
	Block block5e(&blockTxtr1, sf::Vector2f(200.f, 420.0f));
	Block block5f(&blockTxtr1, sf::Vector2f(250.f, 420.0f));
	Block block5g(&blockTxtr1, sf::Vector2f(300.f, 420.0f));
	Block block5h(&blockTxtr1, sf::Vector2f(350.f, 420.0f));
	Block block5i(&blockTxtr1, sf::Vector2f(400.f, 420.0f));
	Block block5j(&blockTxtr1, sf::Vector2f(450.f, 420.0f));
	Block block5k(&blockTxtr1, sf::Vector2f(500.f, 420.0f));
	Block block5l(&blockTxtr1, sf::Vector2f(550.f, 420.0f));
	Block block5m(&blockTxtr1, sf::Vector2f(600.f, 420.0f));
	Block block5n(&blockTxtr1, sf::Vector2f(650.f, 420.0f));
	Block block5o(&blockTxtr1, sf::Vector2f(700.f, 420.0f));

	Block block6a(&blockTxtr1, sf::Vector2f(000.f, 470.0f));
	Block block6b(&blockTxtr2, sf::Vector2f(050.f, 470.0f));
	Block block6c(&blockTxtr1, sf::Vector2f(100.f, 470.0f));
	Block block6d(&blockTxtr2, sf::Vector2f(150.f, 470.0f));
	Block block6e(&blockTxtr1, sf::Vector2f(200.f, 470.0f));
	Block block6f(&blockTxtr2, sf::Vector2f(250.f, 470.0f));
	Block block6g(&blockTxtr1, sf::Vector2f(300.f, 470.0f));
	Block block6h(&blockTxtr2, sf::Vector2f(350.f, 470.0f));
	Block block6i(&blockTxtr1, sf::Vector2f(400.f, 470.0f));
	Block block6j(&blockTxtr2, sf::Vector2f(450.f, 470.0f));
	Block block6k(&blockTxtr1, sf::Vector2f(500.f, 470.0f));
	Block block6l(&blockTxtr2, sf::Vector2f(550.f, 470.0f));
	Block block6m(&blockTxtr1, sf::Vector2f(600.f, 470.0f));
	Block block6n(&blockTxtr2, sf::Vector2f(650.f, 470.0f));
	Block block6o(&blockTxtr1, sf::Vector2f(700.f, 470.0f));

	Block block7a(&blockTxtr1, sf::Vector2f(000.f, 520.0f));
	Block block7b(&blockTxtr1, sf::Vector2f(050.f, 520.0f));
	Block block7c(&blockTxtr1, sf::Vector2f(100.f, 520.0f));
	Block block7d(&blockTxtr1, sf::Vector2f(150.f, 520.0f));
	Block block7e(&blockTxtr1, sf::Vector2f(200.f, 520.0f));
	Block block7f(&blockTxtr1, sf::Vector2f(250.f, 520.0f));
	Block block7g(&blockTxtr1, sf::Vector2f(300.f, 520.0f));
	Block block7h(&blockTxtr1, sf::Vector2f(350.f, 520.0f));
	Block block7i(&blockTxtr1, sf::Vector2f(400.f, 520.0f));
	Block block7j(&blockTxtr1, sf::Vector2f(450.f, 520.0f));
	Block block7k(&blockTxtr1, sf::Vector2f(500.f, 520.0f));
	Block block7l(&blockTxtr1, sf::Vector2f(550.f, 520.0f));
	Block block7m(&blockTxtr1, sf::Vector2f(600.f, 520.0f));
	Block block7n(&blockTxtr1, sf::Vector2f(650.f, 520.0f));
	Block block7o(&blockTxtr1, sf::Vector2f(700.f, 520.0f));

	Block block8a(&blockTxtr1, sf::Vector2f(000.f, 570.0f));
	Block block8b(&blockTxtr2, sf::Vector2f(050.f, 570.0f));
	Block block8c(&blockTxtr1, sf::Vector2f(100.f, 570.0f));
	Block block8d(&blockTxtr2, sf::Vector2f(150.f, 570.0f));
	Block block8e(&blockTxtr1, sf::Vector2f(200.f, 570.0f));
	Block block8f(&blockTxtr2, sf::Vector2f(250.f, 570.0f));
	Block block8g(&blockTxtr1, sf::Vector2f(300.f, 570.0f));
	Block block8h(&blockTxtr2, sf::Vector2f(350.f, 570.0f));
	Block block8i(&blockTxtr1, sf::Vector2f(400.f, 570.0f));
	Block block8j(&blockTxtr2, sf::Vector2f(450.f, 570.0f));
	Block block8k(&blockTxtr1, sf::Vector2f(500.f, 570.0f));
	Block block8l(&blockTxtr2, sf::Vector2f(550.f, 570.0f));
	Block block8m(&blockTxtr1, sf::Vector2f(600.f, 570.0f));
	Block block8n(&blockTxtr2, sf::Vector2f(650.f, 570.0f));
	Block block8o(&blockTxtr1, sf::Vector2f(700.f, 570.0f));

	Block block9a(&blockTxtr1, sf::Vector2f(000.f, 620.0f));
	Block block9b(&blockTxtr1, sf::Vector2f(050.f, 620.0f));
	Block block9c(&blockTxtr1, sf::Vector2f(100.f, 620.0f));
	Block block9d(&blockTxtr1, sf::Vector2f(150.f, 620.0f));
	Block block9e(&blockTxtr1, sf::Vector2f(200.f, 620.0f));
	Block block9f(&blockTxtr1, sf::Vector2f(250.f, 620.0f));
	Block block9g(&blockTxtr1, sf::Vector2f(300.f, 620.0f));	//too much coopy + paste, sorry
	Block block9h(&blockTxtr1, sf::Vector2f(350.f, 620.0f));
	Block block9i(&blockTxtr1, sf::Vector2f(400.f, 620.0f));
	Block block9j(&blockTxtr1, sf::Vector2f(450.f, 620.0f));
	Block block9k(&blockTxtr1, sf::Vector2f(500.f, 620.0f));
	Block block9l(&blockTxtr1, sf::Vector2f(550.f, 620.0f));
	Block block9m(&blockTxtr1, sf::Vector2f(600.f, 620.0f));
	Block block9n(&blockTxtr1, sf::Vector2f(650.f, 620.0f));
	Block block9o(&blockTxtr1, sf::Vector2f(700.f, 620.0f));

	Block block10a(&blockTxtr1, sf::Vector2f(000.f, 670.0f));
	Block block10b(&blockTxtr2, sf::Vector2f(050.f, 670.0f));
	Block block10c(&blockTxtr1, sf::Vector2f(100.f, 670.0f));
	Block block10d(&blockTxtr2, sf::Vector2f(150.f, 670.0f));
	Block block10e(&blockTxtr1, sf::Vector2f(200.f, 670.0f));
	Block block10f(&blockTxtr2, sf::Vector2f(250.f, 670.0f));
	Block block10g(&blockTxtr1, sf::Vector2f(300.f, 670.0f));
	Block block10h(&blockTxtr2, sf::Vector2f(350.f, 670.0f));
	Block block10i(&blockTxtr1, sf::Vector2f(400.f, 670.0f));
	Block block10j(&blockTxtr2, sf::Vector2f(450.f, 670.0f));
	Block block10k(&blockTxtr1, sf::Vector2f(500.f, 670.0f));
	Block block10l(&blockTxtr2, sf::Vector2f(550.f, 670.0f));
	Block block10m(&blockTxtr1, sf::Vector2f(600.f, 670.0f));
	Block block10n(&blockTxtr2, sf::Vector2f(650.f, 670.0f));
	Block block10o(&blockTxtr1, sf::Vector2f(700.f, 670.0f));

	Block block11a(&blockTxtr1, sf::Vector2f(000.f, 720.0f));
	Block block11b(&blockTxtr1, sf::Vector2f(050.f, 720.0f));
	Block block11c(&blockTxtr1, sf::Vector2f(100.f, 720.0f));
	Block block11d(&blockTxtr1, sf::Vector2f(150.f, 720.0f));
	Block block11e(&blockTxtr1, sf::Vector2f(200.f, 720.0f));
	Block block11f(&blockTxtr1, sf::Vector2f(250.f, 720.0f));
	Block block11g(&blockTxtr1, sf::Vector2f(300.f, 720.0f));
	Block block11h(&blockTxtr1, sf::Vector2f(350.f, 720.0f));
	Block block11i(&blockTxtr1, sf::Vector2f(400.f, 720.0f));
	Block block11j(&blockTxtr1, sf::Vector2f(450.f, 720.0f));
	Block block11k(&blockTxtr1, sf::Vector2f(500.f, 720.0f));
	Block block11l(&blockTxtr1, sf::Vector2f(550.f, 720.0f));
	Block block11m(&blockTxtr1, sf::Vector2f(600.f, 720.0f));
	Block block11n(&blockTxtr1, sf::Vector2f(650.f, 720.0f));
	Block block11o(&blockTxtr1, sf::Vector2f(700.f, 720.0f));
	Player player(&playerTxtr, sf::Vector2u(3, 3), 0.3f, 100.0f);

	float deltaTime = 0.0f;
	sf::Clock clock;

	std::cout << "All loaded!" << std::endl;

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (play == 0)
			{
				switch (event.type)
				{
				 case sf::Event::KeyReleased:
					switch (event.key.code)
					{
					case sf::Keyboard::Up:
						menu.MoveUp();
						break;

					case sf::Keyboard::W:
						menu.MoveUp();
						break;

					case sf::Keyboard::S:
						menu.MoveDn();
						break;

					case sf::Keyboard::Down:
						menu.MoveDn();
						break;

					case sf::Keyboard::Return:
						switch (menu.GetPressedItem())
						{
						case 0:
							play = 1;
							break;
						case 1:
							play = 2;
							break;
						case 2:
							play = 3;
							break;
						case 3:
							window.close();
							break;
						}
						break;
					}
				} 
			}

			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::Resized)
				ResizeView(window, view);
		}
		if (play == 1)
		{
			player.Update(deltaTime);

			CornerTL.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT12.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT13.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT14.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerT15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerTR.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerR11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerBR.GetCollider().ChckCollision(player.GetCollider(), 1.0f); //WHO'S FROM ESPANOL?
			CornerB01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB12.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB13.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB14.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerB15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerBL.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			CornerL11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block1c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block1o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block2b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block2o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block3b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block3o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block4b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block4o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block5b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block5o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block6b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block6o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block7b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block7o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block8b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block8o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

			block10b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block10d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block10f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block10h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block10j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block10l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
			block10n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		}
		view.setCenter(block5h.GetPos());
		window.clear(sf::Color(30, 30, 30));
		window.setView(view);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			play = 0;
		}
		if (play == 1)
		{
			window.setMouseCursorVisible(false);
			esc = 1;
			player.Draw(window);

			CornerTL.Draw(window);
			CornerT01.Draw(window);
			CornerT02.Draw(window);
			CornerT03.Draw(window);
			CornerT04.Draw(window);
			CornerT05.Draw(window);
			CornerT06.Draw(window);
			CornerT07.Draw(window);
			CornerT08.Draw(window);
			CornerT09.Draw(window);
			CornerT10.Draw(window);
			CornerT11.Draw(window);
			CornerT12.Draw(window);
			CornerT13.Draw(window);
			CornerT14.Draw(window);
			CornerT15.Draw(window);
			CornerTR.Draw(window);
			CornerR01.Draw(window);
			CornerR02.Draw(window);
			CornerR03.Draw(window);
			CornerR04.Draw(window);
			CornerR05.Draw(window);
			CornerR06.Draw(window);
			CornerR07.Draw(window);
			CornerR08.Draw(window);
			CornerR09.Draw(window);
			CornerR10.Draw(window);
			CornerR11.Draw(window);
			CornerBR.Draw(window);
			CornerBL.Draw(window);
			CornerB01.Draw(window);
			CornerB02.Draw(window);
			CornerB03.Draw(window);
			CornerB04.Draw(window);
			CornerB05.Draw(window);
			CornerB06.Draw(window);
			CornerB07.Draw(window);
			CornerB08.Draw(window);
			CornerB09.Draw(window);
			CornerB10.Draw(window);
			CornerB11.Draw(window);
			CornerB12.Draw(window);
			CornerB13.Draw(window);
			CornerB14.Draw(window);
			CornerB15.Draw(window);
			CornerL01.Draw(window);
			CornerL02.Draw(window);
			CornerL03.Draw(window);
			CornerL04.Draw(window);
			CornerL05.Draw(window);
			CornerL06.Draw(window);
			CornerL07.Draw(window);
			CornerL08.Draw(window);
			CornerL09.Draw(window);
			CornerL10.Draw(window);
			CornerL11.Draw(window);

			block1c.Draw(window);
			block1d.Draw(window);
			block1e.Draw(window);
			block1f.Draw(window);
			block1g.Draw(window);
			block1h.Draw(window);
			block1i.Draw(window);
			block1j.Draw(window);
			block1k.Draw(window);
			block1l.Draw(window);
			block1m.Draw(window);
			block1n.Draw(window);
			block1o.Draw(window);

			block2b.Draw(window);
			block2c.Draw(window);
			block2d.Draw(window);
			block2e.Draw(window);
			block2f.Draw(window);
			block2g.Draw(window);
			block2h.Draw(window);
			block2i.Draw(window);
			block2j.Draw(window);
			block2k.Draw(window);
			block2l.Draw(window);
			block2m.Draw(window);
			block2n.Draw(window);
			block2o.Draw(window);

			block3b.Draw(window);
			block3c.Draw(window);
			block3d.Draw(window);
			block3e.Draw(window);
			block3f.Draw(window);
			block3g.Draw(window);
			block3h.Draw(window);
			block3i.Draw(window);
			block3j.Draw(window);
			block3k.Draw(window);
			block3l.Draw(window);
			block3m.Draw(window);
			block3n.Draw(window);
			block3o.Draw(window);

			block4b.Draw(window);
			block4c.Draw(window);
			block4d.Draw(window);
			block4e.Draw(window);
			block4f.Draw(window);
			block4g.Draw(window);
			block4h.Draw(window);
			block4i.Draw(window);
			block4j.Draw(window);
			block4k.Draw(window);
			block4l.Draw(window);
			block4m.Draw(window);
			block4n.Draw(window);
			block4o.Draw(window);

			block5b.Draw(window);
			block5c.Draw(window);
			block5d.Draw(window);
			block5e.Draw(window);
			block5f.Draw(window);
			block5g.Draw(window);
			block5h.Draw(window);
			block5i.Draw(window);
			block5j.Draw(window);
			block5k.Draw(window);
			block5l.Draw(window);
			block5m.Draw(window);
			block5n.Draw(window);
			block5o.Draw(window);

			block6b.Draw(window);
			block6c.Draw(window);
			block6d.Draw(window);
			block6e.Draw(window);
			block6f.Draw(window);
			block6g.Draw(window);
			block6h.Draw(window);
			block6i.Draw(window);
			block6j.Draw(window);
			block6k.Draw(window);
			block6l.Draw(window);
			block6m.Draw(window);
			block6n.Draw(window);
			block6o.Draw(window);

			block7b.Draw(window);
			block7c.Draw(window);
			block7d.Draw(window);
			block7e.Draw(window);
			block7f.Draw(window);
			block7g.Draw(window);
			block7h.Draw(window);
			block7i.Draw(window);
			block7j.Draw(window);
			block7k.Draw(window);
			block7l.Draw(window);
			block7m.Draw(window);
			block7n.Draw(window);
			block7o.Draw(window);

			block8b.Draw(window);
			block8c.Draw(window);
			block8d.Draw(window);
			block8e.Draw(window);
			block8f.Draw(window);
			block8g.Draw(window);
			block8h.Draw(window);
			block8i.Draw(window);
			block8j.Draw(window);
			block8k.Draw(window);
			block8l.Draw(window);
			block8m.Draw(window);
			block8n.Draw(window);
			block8o.Draw(window);

			block10b.Draw(window);
			block10d.Draw(window);
			block10f.Draw(window);
			block10h.Draw(window);
			block10j.Draw(window);
			block10l.Draw(window);
			block10n.Draw(window);
		}
		else
		{
			if (play == 2)
			{
				//menu.draw 
			}
			else
			{
				if (play == 3)
				{
					credits.draw(window);
				}
				else
				{
					menu.draw(window);
					window.setMouseCursorVisible(true);
				}
			}
		}
		window.display();
	}
	return 0;
=======
#include <SFML\Graphics.hpp>
#include "Headers\Player.h"
#include "Headers\Block.h"
#include "Headers\Menu.h"
#include "Headers\Credits.h"

static const float VIEW_HEIGHT = 750.0f;
int play = 0;
void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float aspectRatio = float(window.getSize().x) / float(window.getSize().y);
	view.setSize(VIEW_HEIGHT * aspectRatio, VIEW_HEIGHT);
}

int main()
{
	sf::RenderWindow window(sf::VideoMode(750, 750), "C++Bomberman v0.2", sf::Style::Close | sf::Style::Resize);
	sf::View view(sf::Vector2f(0.0f, 0.0f), sf::Vector2f(VIEW_HEIGHT, 750.0f));

	sf::Texture playerTxtr;
	sf::Texture blockTxtr1;
	sf::Texture blockTxtr2;

	playerTxtr.loadFromFile("resources/images/player.png"); // by creek23 https://opengameart.org/content/tux-the-linux-mascot on licence CC-BB-SA
	blockTxtr1.loadFromFile("resources/images/block1.png");	// by dawidllx#1536
	blockTxtr2.loadFromFile("resources/images/block2.png");	// thnx dawidllx

	Menu menu(window.getSize().x, window.getSize().y);
	Credits credits(window.getSize().x, window.getSize().y);
	Player player(&playerTxtr, sf::Vector2u(3, 3), 0.3f, 100.0f);
	Block CornerTL(&blockTxtr2, sf::Vector2f(-50.0f, 170.0f));
	Block CornerT01(&blockTxtr2, sf::Vector2f(000.0f, 170.0f));
	Block CornerT02(&blockTxtr2, sf::Vector2f(050.0f, 170.0f));
	Block CornerT03(&blockTxtr2, sf::Vector2f(100.0f, 170.0f));
	Block CornerT04(&blockTxtr2, sf::Vector2f(150.0f, 170.0f));
	Block CornerT05(&blockTxtr2, sf::Vector2f(200.0f, 170.0f));
	Block CornerT06(&blockTxtr2, sf::Vector2f(250.0f, 170.0f));
	Block CornerT07(&blockTxtr2, sf::Vector2f(300.0f, 170.0f));
	Block CornerT08(&blockTxtr2, sf::Vector2f(350.0f, 170.0f));
	Block CornerT09(&blockTxtr2, sf::Vector2f(400.0f, 170.0f));
	Block CornerT10(&blockTxtr2, sf::Vector2f(450.0f, 170.0f));
	Block CornerT11(&blockTxtr2, sf::Vector2f(500.0f, 170.0f));
	Block CornerT12(&blockTxtr2, sf::Vector2f(550.0f, 170.0f));
	Block CornerT13(&blockTxtr2, sf::Vector2f(600.0f, 170.0f));
	Block CornerT14(&blockTxtr2, sf::Vector2f(650.0f, 170.0f));
	Block CornerT15(&blockTxtr2, sf::Vector2f(700.0f, 170.0f));
	Block CornerTR(&blockTxtr2, sf::Vector2f(750.0f, 170.0f));
	Block CornerR01(&blockTxtr2, sf::Vector2f(750.0f, 220.0f));
	Block CornerR02(&blockTxtr2, sf::Vector2f(750.0f, 270.0f)); //R2D2 here
	Block CornerR03(&blockTxtr2, sf::Vector2f(750.0f, 320.0f));
	Block CornerR04(&blockTxtr2, sf::Vector2f(750.0f, 370.0f));
	Block CornerR05(&blockTxtr2, sf::Vector2f(750.0f, 420.0f));
	Block CornerR06(&blockTxtr2, sf::Vector2f(750.0f, 470.0f));
	Block CornerR07(&blockTxtr2, sf::Vector2f(750.0f, 520.0f));
	Block CornerR08(&blockTxtr2, sf::Vector2f(750.0f, 570.0f));
	Block CornerR09(&blockTxtr2, sf::Vector2f(750.0f, 620.0f));
	Block CornerR10(&blockTxtr2, sf::Vector2f(750.0f, 670.0f));
	Block CornerR11(&blockTxtr2, sf::Vector2f(750.0f, 720.0f));
	Block CornerBR(&blockTxtr2, sf::Vector2f(750.0f, 770.0f));
	Block CornerB01(&blockTxtr2, sf::Vector2f(000.0f, 770.0f));
	Block CornerB02(&blockTxtr2, sf::Vector2f(050.0f, 770.0f));
	Block CornerB03(&blockTxtr2, sf::Vector2f(100.0f, 770.0f));
	Block CornerB04(&blockTxtr2, sf::Vector2f(150.0f, 770.0f));
	Block CornerB05(&blockTxtr2, sf::Vector2f(200.0f, 770.0f));
	Block CornerB06(&blockTxtr2, sf::Vector2f(250.0f, 770.0f));
	Block CornerB07(&blockTxtr2, sf::Vector2f(300.0f, 770.0f));
	Block CornerB08(&blockTxtr2, sf::Vector2f(350.0f, 770.0f));
	Block CornerB09(&blockTxtr2, sf::Vector2f(400.0f, 770.0f));
	Block CornerB10(&blockTxtr2, sf::Vector2f(450.0f, 770.0f));
	Block CornerB11(&blockTxtr2, sf::Vector2f(500.0f, 770.0f));
	Block CornerB12(&blockTxtr2, sf::Vector2f(550.0f, 770.0f));
	Block CornerB13(&blockTxtr2, sf::Vector2f(600.0f, 770.0f));
	Block CornerB14(&blockTxtr2, sf::Vector2f(650.0f, 770.0f));
	Block CornerB15(&blockTxtr2, sf::Vector2f(700.0f, 770.0f));
	Block CornerBL(&blockTxtr2, sf::Vector2f(-50.0f, 770.0f));
	Block CornerL01(&blockTxtr2, sf::Vector2f(-50.0f, 220.0f));
	Block CornerL02(&blockTxtr2, sf::Vector2f(-50.0f, 270.0f)); 
	Block CornerL03(&blockTxtr2, sf::Vector2f(-50.0f, 320.0f));
	Block CornerL04(&blockTxtr2, sf::Vector2f(-50.0f, 370.0f));
	Block CornerL05(&blockTxtr2, sf::Vector2f(-50.0f, 420.0f));
	Block CornerL06(&blockTxtr2, sf::Vector2f(-50.0f, 470.0f));
	Block CornerL07(&blockTxtr2, sf::Vector2f(-50.0f, 520.0f));
	Block CornerL08(&blockTxtr2, sf::Vector2f(-50.0f, 570.0f));
	Block CornerL09(&blockTxtr2, sf::Vector2f(-50.0f, 620.0f));
	Block CornerL10(&blockTxtr2, sf::Vector2f(-50.0f, 670.0f));
	Block CornerL11(&blockTxtr2, sf::Vector2f(-50.0f, 720.0f));

	Block block1a(&blockTxtr1, sf::Vector2f(000.f, 220.0f));
	Block block1b(&blockTxtr1, sf::Vector2f(050.f, 220.0f));
	Block block1c(&blockTxtr1, sf::Vector2f(100.f, 220.0f));
	Block block1d(&blockTxtr1, sf::Vector2f(150.f, 220.0f));
	Block block1e(&blockTxtr1, sf::Vector2f(200.f, 220.0f));
	Block block1f(&blockTxtr1, sf::Vector2f(250.f, 220.0f));
	Block block1g(&blockTxtr1, sf::Vector2f(300.f, 220.0f));
	Block block1h(&blockTxtr1, sf::Vector2f(350.f, 220.0f));
	Block block1i(&blockTxtr1, sf::Vector2f(400.f, 220.0f));
	Block block1j(&blockTxtr1, sf::Vector2f(450.f, 220.0f));
	Block block1k(&blockTxtr1, sf::Vector2f(500.f, 220.0f));
	Block block1l(&blockTxtr1, sf::Vector2f(550.f, 220.0f));
	Block block1m(&blockTxtr1, sf::Vector2f(600.f, 220.0f));
	Block block1n(&blockTxtr1, sf::Vector2f(650.f, 220.0f));
	Block block1o(&blockTxtr1, sf::Vector2f(700.f, 220.0f));

	Block block2a(&blockTxtr1, sf::Vector2f(000.f, 270.0f));
	Block block2b(&blockTxtr2, sf::Vector2f(050.f, 270.0f));
	Block block2c(&blockTxtr1, sf::Vector2f(100.f, 270.0f));
	Block block2d(&blockTxtr2, sf::Vector2f(150.f, 270.0f));
	Block block2e(&blockTxtr1, sf::Vector2f(200.f, 270.0f));
	Block block2f(&blockTxtr2, sf::Vector2f(250.f, 270.0f));
	Block block2g(&blockTxtr1, sf::Vector2f(300.f, 270.0f));
	Block block2h(&blockTxtr2, sf::Vector2f(350.f, 270.0f));
	Block block2i(&blockTxtr1, sf::Vector2f(400.f, 270.0f));
	Block block2j(&blockTxtr2, sf::Vector2f(450.f, 270.0f));
	Block block2k(&blockTxtr1, sf::Vector2f(500.f, 270.0f));
	Block block2l(&blockTxtr2, sf::Vector2f(550.f, 270.0f));
	Block block2m(&blockTxtr1, sf::Vector2f(600.f, 270.0f));
	Block block2n(&blockTxtr2, sf::Vector2f(650.f, 270.0f));
	Block block2o(&blockTxtr1, sf::Vector2f(700.f, 270.0f));

	Block block3a(&blockTxtr1, sf::Vector2f(000.f, 320.0f));
	Block block3b(&blockTxtr1, sf::Vector2f(050.f, 320.0f));
	Block block3c(&blockTxtr1, sf::Vector2f(100.f, 320.0f));
	Block block3d(&blockTxtr1, sf::Vector2f(150.f, 320.0f));
	Block block3e(&blockTxtr1, sf::Vector2f(200.f, 320.0f));
	Block block3f(&blockTxtr1, sf::Vector2f(250.f, 320.0f));
	Block block3g(&blockTxtr1, sf::Vector2f(300.f, 320.0f));
	Block block3h(&blockTxtr1, sf::Vector2f(350.f, 320.0f));
	Block block3i(&blockTxtr1, sf::Vector2f(400.f, 320.0f));
	Block block3j(&blockTxtr1, sf::Vector2f(450.f, 320.0f));
	Block block3k(&blockTxtr1, sf::Vector2f(500.f, 320.0f));
	Block block3l(&blockTxtr1, sf::Vector2f(550.f, 320.0f));
	Block block3m(&blockTxtr1, sf::Vector2f(600.f, 320.0f));
	Block block3n(&blockTxtr1, sf::Vector2f(650.f, 320.0f));
	Block block3o(&blockTxtr1, sf::Vector2f(700.f, 320.0f));

	Block block4a(&blockTxtr1, sf::Vector2f(000.f, 370.0f));
	Block block4b(&blockTxtr2, sf::Vector2f(050.f, 370.0f));
	Block block4c(&blockTxtr1, sf::Vector2f(100.f, 370.0f));
	Block block4d(&blockTxtr2, sf::Vector2f(150.f, 370.0f));
	Block block4e(&blockTxtr1, sf::Vector2f(200.f, 370.0f));
	Block block4f(&blockTxtr2, sf::Vector2f(250.f, 370.0f));
	Block block4g(&blockTxtr1, sf::Vector2f(300.f, 370.0f));
	Block block4h(&blockTxtr2, sf::Vector2f(350.f, 370.0f));
	Block block4i(&blockTxtr1, sf::Vector2f(400.f, 370.0f));
	Block block4j(&blockTxtr2, sf::Vector2f(450.f, 370.0f));
	Block block4k(&blockTxtr1, sf::Vector2f(500.f, 370.0f));
	Block block4l(&blockTxtr2, sf::Vector2f(550.f, 370.0f));
	Block block4m(&blockTxtr1, sf::Vector2f(600.f, 370.0f));
	Block block4n(&blockTxtr2, sf::Vector2f(650.f, 370.0f));
	Block block4o(&blockTxtr1, sf::Vector2f(700.f, 370.0f));

	Block block5a(&blockTxtr1, sf::Vector2f(000.f, 420.0f));
	Block block5b(&blockTxtr1, sf::Vector2f(050.f, 420.0f));
	Block block5c(&blockTxtr1, sf::Vector2f(100.f, 420.0f));
	Block block5d(&blockTxtr1, sf::Vector2f(150.f, 420.0f));
	Block block5e(&blockTxtr1, sf::Vector2f(200.f, 420.0f));
	Block block5f(&blockTxtr1, sf::Vector2f(250.f, 420.0f));
	Block block5g(&blockTxtr1, sf::Vector2f(300.f, 420.0f));
	Block block5h(&blockTxtr1, sf::Vector2f(350.f, 420.0f));
	Block block5i(&blockTxtr1, sf::Vector2f(400.f, 420.0f));
	Block block5j(&blockTxtr1, sf::Vector2f(450.f, 420.0f));
	Block block5k(&blockTxtr1, sf::Vector2f(500.f, 420.0f));
	Block block5l(&blockTxtr1, sf::Vector2f(550.f, 420.0f));
	Block block5m(&blockTxtr1, sf::Vector2f(600.f, 420.0f));
	Block block5n(&blockTxtr1, sf::Vector2f(650.f, 420.0f));
	Block block5o(&blockTxtr1, sf::Vector2f(700.f, 420.0f));

	Block block6a(&blockTxtr1, sf::Vector2f(000.f, 470.0f));
	Block block6b(&blockTxtr2, sf::Vector2f(050.f, 470.0f));
	Block block6c(&blockTxtr1, sf::Vector2f(100.f, 470.0f));
	Block block6d(&blockTxtr2, sf::Vector2f(150.f, 470.0f));
	Block block6e(&blockTxtr1, sf::Vector2f(200.f, 470.0f));
	Block block6f(&blockTxtr2, sf::Vector2f(250.f, 470.0f));
	Block block6g(&blockTxtr1, sf::Vector2f(300.f, 470.0f));
	Block block6h(&blockTxtr2, sf::Vector2f(350.f, 470.0f));
	Block block6i(&blockTxtr1, sf::Vector2f(400.f, 470.0f));
	Block block6j(&blockTxtr2, sf::Vector2f(450.f, 470.0f));
	Block block6k(&blockTxtr1, sf::Vector2f(500.f, 470.0f));
	Block block6l(&blockTxtr2, sf::Vector2f(550.f, 470.0f));
	Block block6m(&blockTxtr1, sf::Vector2f(600.f, 470.0f));
	Block block6n(&blockTxtr2, sf::Vector2f(650.f, 470.0f));
	Block block6o(&blockTxtr1, sf::Vector2f(700.f, 470.0f));

	Block block7a(&blockTxtr1, sf::Vector2f(000.f, 520.0f));
	Block block7b(&blockTxtr1, sf::Vector2f(050.f, 520.0f));
	Block block7c(&blockTxtr1, sf::Vector2f(100.f, 520.0f));
	Block block7d(&blockTxtr1, sf::Vector2f(150.f, 520.0f));
	Block block7e(&blockTxtr1, sf::Vector2f(200.f, 520.0f));
	Block block7f(&blockTxtr1, sf::Vector2f(250.f, 520.0f));
	Block block7g(&blockTxtr1, sf::Vector2f(300.f, 520.0f));
	Block block7h(&blockTxtr1, sf::Vector2f(350.f, 520.0f));
	Block block7i(&blockTxtr1, sf::Vector2f(400.f, 520.0f));
	Block block7j(&blockTxtr1, sf::Vector2f(450.f, 520.0f));
	Block block7k(&blockTxtr1, sf::Vector2f(500.f, 520.0f));
	Block block7l(&blockTxtr1, sf::Vector2f(550.f, 520.0f));
	Block block7m(&blockTxtr1, sf::Vector2f(600.f, 520.0f));
	Block block7n(&blockTxtr1, sf::Vector2f(650.f, 520.0f));
	Block block7o(&blockTxtr1, sf::Vector2f(700.f, 520.0f));

	Block block8a(&blockTxtr1, sf::Vector2f(000.f, 570.0f));
	Block block8b(&blockTxtr2, sf::Vector2f(050.f, 570.0f));
	Block block8c(&blockTxtr1, sf::Vector2f(100.f, 570.0f));
	Block block8d(&blockTxtr2, sf::Vector2f(150.f, 570.0f));
	Block block8e(&blockTxtr1, sf::Vector2f(200.f, 570.0f));
	Block block8f(&blockTxtr2, sf::Vector2f(250.f, 570.0f));
	Block block8g(&blockTxtr1, sf::Vector2f(300.f, 570.0f));
	Block block8h(&blockTxtr2, sf::Vector2f(350.f, 570.0f));
	Block block8i(&blockTxtr1, sf::Vector2f(400.f, 570.0f));
	Block block8j(&blockTxtr2, sf::Vector2f(450.f, 570.0f));
	Block block8k(&blockTxtr1, sf::Vector2f(500.f, 570.0f));
	Block block8l(&blockTxtr2, sf::Vector2f(550.f, 570.0f));
	Block block8m(&blockTxtr1, sf::Vector2f(600.f, 570.0f));
	Block block8n(&blockTxtr2, sf::Vector2f(650.f, 570.0f));
	Block block8o(&blockTxtr1, sf::Vector2f(700.f, 570.0f));

	Block block9a(&blockTxtr1, sf::Vector2f(000.f, 620.0f));
	Block block9b(&blockTxtr1, sf::Vector2f(050.f, 620.0f));
	Block block9c(&blockTxtr1, sf::Vector2f(100.f, 620.0f));
	Block block9d(&blockTxtr1, sf::Vector2f(150.f, 620.0f));
	Block block9e(&blockTxtr1, sf::Vector2f(200.f, 620.0f));
	Block block9f(&blockTxtr1, sf::Vector2f(250.f, 620.0f));
	Block block9g(&blockTxtr1, sf::Vector2f(300.f, 620.0f));	//too much coopy + paste, sorry
	Block block9h(&blockTxtr1, sf::Vector2f(350.f, 620.0f));
	Block block9i(&blockTxtr1, sf::Vector2f(400.f, 620.0f));
	Block block9j(&blockTxtr1, sf::Vector2f(450.f, 620.0f));
	Block block9k(&blockTxtr1, sf::Vector2f(500.f, 620.0f));
	Block block9l(&blockTxtr1, sf::Vector2f(550.f, 620.0f));
	Block block9m(&blockTxtr1, sf::Vector2f(600.f, 620.0f));
	Block block9n(&blockTxtr1, sf::Vector2f(650.f, 620.0f));
	Block block9o(&blockTxtr1, sf::Vector2f(700.f, 620.0f));

	Block block10a(&blockTxtr1, sf::Vector2f(000.f, 670.0f));
	Block block10b(&blockTxtr2, sf::Vector2f(050.f, 670.0f));
	Block block10c(&blockTxtr1, sf::Vector2f(100.f, 670.0f));
	Block block10d(&blockTxtr2, sf::Vector2f(150.f, 670.0f));
	Block block10e(&blockTxtr1, sf::Vector2f(200.f, 670.0f));
	Block block10f(&blockTxtr2, sf::Vector2f(250.f, 670.0f));
	Block block10g(&blockTxtr1, sf::Vector2f(300.f, 670.0f));
	Block block10h(&blockTxtr2, sf::Vector2f(350.f, 670.0f));
	Block block10i(&blockTxtr1, sf::Vector2f(400.f, 670.0f));
	Block block10j(&blockTxtr2, sf::Vector2f(450.f, 670.0f));
	Block block10k(&blockTxtr1, sf::Vector2f(500.f, 670.0f));
	Block block10l(&blockTxtr2, sf::Vector2f(550.f, 670.0f));
	Block block10m(&blockTxtr1, sf::Vector2f(600.f, 670.0f));
	Block block10n(&blockTxtr2, sf::Vector2f(650.f, 670.0f));
	Block block10o(&blockTxtr1, sf::Vector2f(700.f, 670.0f));

	Block block11a(&blockTxtr1, sf::Vector2f(000.f, 720.0f));
	Block block11b(&blockTxtr1, sf::Vector2f(050.f, 720.0f));
	Block block11c(&blockTxtr1, sf::Vector2f(100.f, 720.0f));
	Block block11d(&blockTxtr1, sf::Vector2f(150.f, 720.0f));
	Block block11e(&blockTxtr1, sf::Vector2f(200.f, 720.0f));
	Block block11f(&blockTxtr1, sf::Vector2f(250.f, 720.0f));
	Block block11g(&blockTxtr1, sf::Vector2f(300.f, 720.0f));
	Block block11h(&blockTxtr1, sf::Vector2f(350.f, 720.0f));
	Block block11i(&blockTxtr1, sf::Vector2f(400.f, 720.0f));
	Block block11j(&blockTxtr1, sf::Vector2f(450.f, 720.0f));
	Block block11k(&blockTxtr1, sf::Vector2f(500.f, 720.0f));
	Block block11l(&blockTxtr1, sf::Vector2f(550.f, 720.0f));
	Block block11m(&blockTxtr1, sf::Vector2f(600.f, 720.0f));
	Block block11n(&blockTxtr1, sf::Vector2f(650.f, 720.0f));
	Block block11o(&blockTxtr1, sf::Vector2f(700.f, 720.0f));


	float deltaTime = 0.0f;
	sf::Clock clock;

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds() * 2.5;

		sf::Event event;
		while (window.pollEvent(event))
		{

			switch (event.type)
			{
			 case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.MoveUp();
					break;

				case sf::Keyboard::Down:
					menu.MoveDn();
					break;

				case sf::Keyboard::Return:
					switch (menu.GetPressedItem())
					{
					case 0:
						play = 1;
						break;
					case 1:
						play = 2;
						break;
					case 2:
						play = 3;
						break;
					case 3:
						window.close();
						break;
					}
					break;
				} 
			}

			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::Resized)
				ResizeView(window, view);
		}

		player.Update(deltaTime);
		CornerTL.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT12.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT13.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT14.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerT15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerTR.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerR11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerBR.GetCollider().ChckCollision(player.GetCollider(), 1.0f); //WHO'S FROM ESPANOL?
		CornerB01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB12.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB13.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB14.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerB15.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerBL.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL01.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL02.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL03.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL04.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL05.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL06.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL07.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL08.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL09.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL10.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		CornerL11.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block1c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block1o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block2b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block2o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block3b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block3o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block4b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block4o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block5b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block5o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block6b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block6o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block7b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block7o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block8b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8c.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8e.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8g.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8i.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8k.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8m.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block8o.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		block10b.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block10d.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block10f.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block10h.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block10j.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block10l.GetCollider().ChckCollision(player.GetCollider(), 1.0f);
		block10n.GetCollider().ChckCollision(player.GetCollider(), 1.0f);

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			play = 0;

		view.setCenter(block5h.GetPos());
		window.clear(sf::Color(30, 30, 30));
		window.setView(view);

		if (play == 1)
		{
			window.setMouseCursorVisible(false);
			player.Draw(window);

			CornerTL.Draw(window);
			CornerT01.Draw(window);
			CornerT02.Draw(window);
			CornerT03.Draw(window);
			CornerT04.Draw(window);
			CornerT05.Draw(window);
			CornerT06.Draw(window);
			CornerT07.Draw(window);
			CornerT08.Draw(window);
			CornerT09.Draw(window);
			CornerT10.Draw(window);
			CornerT11.Draw(window);
			CornerT12.Draw(window);
			CornerT13.Draw(window);
			CornerT14.Draw(window);
			CornerT15.Draw(window);
			CornerTR.Draw(window);
			CornerR01.Draw(window);
			CornerR02.Draw(window);
			CornerR03.Draw(window);
			CornerR04.Draw(window);
			CornerR05.Draw(window);
			CornerR06.Draw(window);
			CornerR07.Draw(window);
			CornerR08.Draw(window);
			CornerR09.Draw(window);
			CornerR10.Draw(window);
			CornerR11.Draw(window);
			CornerBR.Draw(window);
			CornerBL.Draw(window);
			CornerB01.Draw(window);
			CornerB02.Draw(window);
			CornerB03.Draw(window);
			CornerB04.Draw(window);
			CornerB05.Draw(window);
			CornerB06.Draw(window);
			CornerB07.Draw(window);
			CornerB08.Draw(window);
			CornerB09.Draw(window);
			CornerB10.Draw(window);
			CornerB11.Draw(window);
			CornerB12.Draw(window);
			CornerB13.Draw(window);
			CornerB14.Draw(window);
			CornerB15.Draw(window);
			CornerL01.Draw(window);
			CornerL02.Draw(window);
			CornerL03.Draw(window);
			CornerL04.Draw(window);
			CornerL05.Draw(window);
			CornerL06.Draw(window);
			CornerL07.Draw(window);
			CornerL08.Draw(window);
			CornerL09.Draw(window);
			CornerL10.Draw(window);
			CornerL11.Draw(window);

			block1c.Draw(window);
			block1d.Draw(window);
			block1e.Draw(window);
			block1f.Draw(window);
			block1g.Draw(window);
			block1h.Draw(window);
			block1i.Draw(window);
			block1j.Draw(window);
			block1k.Draw(window);
			block1l.Draw(window);
			block1m.Draw(window);
			block1n.Draw(window);
			block1o.Draw(window);

			block2b.Draw(window);
			block2c.Draw(window);
			block2d.Draw(window);
			block2e.Draw(window);
			block2f.Draw(window);
			block2g.Draw(window);
			block2h.Draw(window);
			block2i.Draw(window);
			block2j.Draw(window);
			block2k.Draw(window);
			block2l.Draw(window);
			block2m.Draw(window);
			block2n.Draw(window);
			block2o.Draw(window);

			block3b.Draw(window);
			block3c.Draw(window);
			block3d.Draw(window);
			block3e.Draw(window);
			block3f.Draw(window);
			block3g.Draw(window);
			block3h.Draw(window);
			block3i.Draw(window);
			block3j.Draw(window);
			block3k.Draw(window);
			block3l.Draw(window);
			block3m.Draw(window);
			block3n.Draw(window);
			block3o.Draw(window);

			block4b.Draw(window);
			block4c.Draw(window);
			block4d.Draw(window);
			block4e.Draw(window);
			block4f.Draw(window);
			block4g.Draw(window);
			block4h.Draw(window);
			block4i.Draw(window);
			block4j.Draw(window);
			block4k.Draw(window);
			block4l.Draw(window);
			block4m.Draw(window);
			block4n.Draw(window);
			block4o.Draw(window);

			block5b.Draw(window);
			block5c.Draw(window);
			block5d.Draw(window);
			block5e.Draw(window);
			block5f.Draw(window);
			block5g.Draw(window);
			block5h.Draw(window);
			block5i.Draw(window);
			block5j.Draw(window);
			block5k.Draw(window);
			block5l.Draw(window);
			block5m.Draw(window);
			block5n.Draw(window);
			block5o.Draw(window);

			block6b.Draw(window);
			block6c.Draw(window);
			block6d.Draw(window);
			block6e.Draw(window);
			block6f.Draw(window);
			block6g.Draw(window);
			block6h.Draw(window);
			block6i.Draw(window);
			block6j.Draw(window);
			block6k.Draw(window);
			block6l.Draw(window);
			block6m.Draw(window);
			block6n.Draw(window);
			block6o.Draw(window);

			block7b.Draw(window);
			block7c.Draw(window);
			block7d.Draw(window);
			block7e.Draw(window);
			block7f.Draw(window);
			block7g.Draw(window);
			block7h.Draw(window);
			block7i.Draw(window);
			block7j.Draw(window);
			block7k.Draw(window);
			block7l.Draw(window);
			block7m.Draw(window);
			block7n.Draw(window);
			block7o.Draw(window);

			block8b.Draw(window);
			block8c.Draw(window);
			block8d.Draw(window);
			block8e.Draw(window);
			block8f.Draw(window);
			block8g.Draw(window);
			block8h.Draw(window);
			block8i.Draw(window);
			block8j.Draw(window);
			block8k.Draw(window);
			block8l.Draw(window);
			block8m.Draw(window);
			block8n.Draw(window);
			block8o.Draw(window);

			block10b.Draw(window);
			block10d.Draw(window);
			block10f.Draw(window);
			block10h.Draw(window);
			block10j.Draw(window);
			block10l.Draw(window);
			block10n.Draw(window);
		}
		else
		{
			if (play == 2)
			{
				//menu.draw 
			}
			else
			{
				if (play == 3)
				{
					credits.draw(window);
				}
				else
					menu.draw(window);
					window.setMouseCursorVisible(true);
			}
		}


		window.display();
	}
	return 0;
>>>>>>> 6dd881ec013b7e2de24b78f01493a5bdb5a820d7
}