#pragma once
#include "PageElement.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class TextElement : public PageElement
{
private:
	sf::Font pixelFont;
	sf::Text textObj;
public:
	TextElement(sf::String text);
	void Render(sf::RenderWindow& window);
};

