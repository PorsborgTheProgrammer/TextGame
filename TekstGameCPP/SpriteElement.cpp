#include "SpriteElement.h"

void SpriteElement::Render(sf::RenderWindow& window)
{
	window.draw(this->sprite);
}


SpriteElement::SpriteElement(sf::String texturePath)
{
	this->texture.loadFromFile(texturePath);
	this->sprite.setTexture(texture);
}
