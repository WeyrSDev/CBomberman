#include "../Headers/Player.h"

Player::Player(sf::Texture* txtr, sf::Vector2u imgCount, float switchTime, float speed) :
	animatioff(txtr, imgCount, switchTime)
{
	this->speed = speed;
	row = 0;
	faceRight = true;

	body.setSize(sf::Vector2f(50.0f, 50.0f));
	body.setOrigin(body.getSize() / 2.0f);
	body.setPosition(0.0f, 220.0f);
	body.setTexture(txtr);
}


Player::~Player()
{
}

void Player::Update(float deltaTime)
{
	sf::Vector2f movemnt(0.0f, 0.0f);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		movemnt.x -= speed * deltaTime;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		movemnt.x += speed * deltaTime;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		movemnt.y -= speed * deltaTime;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		movemnt.y += speed * deltaTime;

	if (movemnt.x == 0.0f)
		row = 0;
	else
	{
		row = 1;

		if (movemnt.x > 0.0f)
			faceRight = true;
		else
			faceRight = false;
	}

	animatioff.Update(row, deltaTime, faceRight);
	body.setTextureRect(animatioff.uvRect);
	body.move(movemnt);
}

void Player::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}