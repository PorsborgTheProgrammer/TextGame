#include "TextElement.h"

TextElement::TextElement(sf::String text)
{
	this->pixelFont.loadFromFile("Assets/pixelFont.ttf");
	this->textObj = sf::Text(text, pixelFont, 24);
}

void TextElement::Render(sf::RenderWindow& window)
{
	this->textObj.setPosition(40, 0);
	window.draw(this->textObj);
}


