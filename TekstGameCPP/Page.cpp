#include "Page.h"


Page::Page()
{
}

void Page::Render(sf::RenderWindow& window)
{
	for (PageElement* pageElement : pageElements)
	{
		pageElement->Render(window);
	}
}

Page::Page(std::vector<PageElement*> pageElements)
{
	this->pageElements = pageElements;
}


