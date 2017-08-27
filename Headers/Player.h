#pragma once
#include <SFML\Graphics.hpp>
#include "Animation.h"
#include "Collider.h"

class Player
{
public:
	Player(sf::Texture* txtr, sf::Vector2u imgCount, float switchTime, float speed);
	~Player();

	void Update(float deltaTime);
	void Draw(sf::RenderWindow& window);

	sf::Vector2f GetPos() { return body.getPosition(); }
	Collider GetCollider() { return Collider(body);  }

private:
	sf::RectangleShape body;
	Animation animatioff;
	unsigned int row;
	float speed;
	bool faceRight;
};
