#pragma once
#include <SFML\Graphics.hpp>
#include "Collider.h"

class Block
{
public:
	Block(sf::Texture* txtr, sf::Vector2f pos);
	~Block();

	void Draw(sf::RenderWindow& window);

	sf::Vector2f GetPos() { return body.getPosition(); }
	Collider GetCollider() { return Collider(body); }

private:
	sf::RectangleShape body;
};