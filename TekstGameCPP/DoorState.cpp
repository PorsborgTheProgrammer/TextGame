#include "DoorState.h"
#include "SpriteElement.h"
#include "PantsState.h"

DoorState::DoorState()
{
    std::vector<PageElement*> testElements;
    testElements.push_back(new SpriteElement("Assets/step2.png"));
    this->page = Page(testElements);
}

State DoorState::HandleInput(sf::String playerInput)
{
    if (playerInput == "PULL DOOR" || "OPEN DOOR")
        return PantsState();
    return DoorState();
}
