#include "PantsState.h"
#include "SpriteElement.h"
#include "ToiletState.h"

PantsState::PantsState()
{
    std::vector<PageElement*> pantsElement;
    pantsElement.push_back(new SpriteElement("Assets/step3.png"));
    this->page = Page(pantsElement);
    this->stateName = "PantsState";
}

State* PantsState::HandleInput(sf::String playerInput)
{
    if (playerInput == "GO TO TOILET" ) {

        return new ToiletState();
    }
    return new PantsState();
}
