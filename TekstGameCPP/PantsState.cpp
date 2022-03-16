#include "PantsState.h"
#include "SpriteElement.h"
#include "ToiletState.h"

PantsState::PantsState()
{
    std::vector<PageElement*> pantsElement;
    pantsElement.push_back(new SpriteElement("Assets/step3.png"));
    this->page = Page(pantsElement);
}

State* PantsState::HandleInput(sf::String playerInput)
{
    if (playerInput == "GO TO TOILET" || "SIT ON TOILET")
        return new ToiletState();
    return new PantsState();
}
