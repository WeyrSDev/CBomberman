#include "../Headers/Block.h"


Block::Block(sf::Texture* txtr, sf::Vector2f pos)
{
	body.setSize(sf::Vector2f(50.0f, 50.0f));
	body.setOrigin(body.getSize() / 2.0f);
	body.setTexture(txtr);
	body.setPosition(pos);
}

Block::~Block()
{
}

void Block::Draw(sf::RenderWindow & window)
{
	window.draw(body);
}
