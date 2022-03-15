#include "ToiletState.h"
#include "SpriteElement.h"

ToiletState::ToiletState()
{
    std::vector<PageElement*> testElements;
    testElements.push_back(new SpriteElement("Assets/step4.png"));
    this->page = Page(testElements);
}

State ToiletState::HandleInput(sf::String playerInput)
{
    if (playerInput == "POO" || "SHIT")
        return WinnerState();
    return ToiletState();
}
