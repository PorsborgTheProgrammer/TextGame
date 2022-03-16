#include "DoorState2.h"
#include "SpriteElement.h"
#include "PantsState.h"

DoorState2::DoorState2()
{
    std::vector<PageElement*> doorElement;
    doorElement.push_back(new SpriteElement("Assets/step2.png"));
    this->page = Page(doorElement);
}

State* DoorState2::HandleInput(sf::String playerInput)
{
    if (playerInput == "TAKE OFF PANTS" || "UNZIP PANTS")
        return new PantsState();
    return new DoorState2();
}