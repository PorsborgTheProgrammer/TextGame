#pragma once
#include "PageElement.h"
#include <SFML/Graphics.hpp>
class SpriteElement : public PageElement
{
private:
	sf::Sprite sprite = sf::Sprite();
	sf::Texture texture = sf::Texture();
public:
	void Render(sf::RenderWindow& window);
	SpriteElement(sf::String texturePath);
};

