#pragma once
#include <SFML/Graphics.hpp>
class PageElement
{
public: 
	virtual void Render(sf::RenderWindow& window) = 0;
};

