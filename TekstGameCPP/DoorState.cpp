#include "DoorState.h"
#include "SpriteElement.h"
#include "PantsState.h"

DoorState::DoorState()
{
    std::vector<PageElement*> doorElement;
    doorElement.push_back(new SpriteElement("Assets/step2.png"));
    this->page = Page(doorElement);
}

State DoorState::HandleInput(sf::String playerInput)
{
    if (playerInput == "TAKE OFF PANTS" || "UNZIP PANTS")
        return PantsState();
    return DoorState();
}
