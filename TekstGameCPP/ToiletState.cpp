#include "ToiletState.h"
#include "SpriteElement.h"
#include "WinnerState.h"

ToiletState::ToiletState()
{
    std::vector<PageElement*> toiletElement;
    toiletElement.push_back(new SpriteElement("Assets/step4.png"));
    this->page = Page(toiletElement);
}

State* ToiletState::HandleInput(sf::String playerInput)
{
    if (playerInput == "POO" || "SHIT")
        return new WinnerState();
    return new ToiletState();
}