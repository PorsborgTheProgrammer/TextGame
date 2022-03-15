#pragma once
#include <SFML/Graphics.hpp>
#include <windows.h>
#include <vector>
#include "PageElement.h"
class Page
{
private: 
    std::vector<PageElement*> pageElements;
public:
    Page();
	void Render(sf::RenderWindow& window);
    Page(std::vector<PageElement*> pageElements);
};

