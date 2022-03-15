#include "PantsState.h"
#include "SpriteElement.h"
#include "ToiletState.h"

PantsState::PantsState()
{
    std::vector<PageElement*> testElements;
    testElements.push_back(new SpriteElement("Assets/step3.png"));
    this->page = Page(testElements);
}

State PantsState::HandleInput(sf::String playerInput)
{
    if (playerInput == "GO TO TOILET" || "SIT ON TOILET")
        return ToiletState();
    return PantsState();
}
