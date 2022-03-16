#include "SpriteElement.h"

void SpriteElement::Render(sf::RenderWindow& window)
{
	this->sprite.setPosition(0, 30);
	window.draw(this->sprite);
}


SpriteElement::SpriteElement(sf::String texturePath)
{
	this->texture.loadFromFile(texturePath);
	this->sprite.setTexture(texture);
}
