#include "../Headers/Animation.h"

Animation::Animation(sf::Texture* txtr, sf::Vector2u imgCount, float switchTime)
{
	this->switchTime = switchTime;
	this->imgCount = imgCount;
	totalTime = 0.0f;
	currentImg.x = 0;

	uvRect.width = txtr->getSize().x / float(imgCount.x);
	uvRect.height = txtr->getSize().y / float(imgCount.y);
}


Animation::~Animation()
{
}

void Animation::Update(int row, float deltaTime, bool faceRight)
{
	currentImg.y = row;
	totalTime += deltaTime;

	if (totalTime >= switchTime)
	{
		totalTime -= switchTime;
		currentImg.x++;

		if(currentImg.x >= imgCount.x)
		{
			currentImg.x = 0;
		}
	}
	uvRect.top = currentImg.y * uvRect.height;

	if (faceRight)
	{
		uvRect.left = currentImg.x * uvRect.width;
		uvRect.width = abs(uvRect.width);
	}
	else
	{
		uvRect.left = (currentImg.x + 1) * abs(uvRect.width);
		uvRect.width = -abs(uvRect.width);
	}

}