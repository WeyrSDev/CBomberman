#pragma once
#include <SFML\Graphics.hpp>

class Animation
{
public:
	Animation(sf::Texture* txtr, sf::Vector2u imgCount, float switchTime);
	~Animation();

	void Update(int row, float deltaTime, bool faceRight);

public:
	sf::IntRect uvRect;

private:
	sf::Vector2u imgCount;
	sf::Vector2u currentImg;

	float totalTime;
	float switchTime;
};