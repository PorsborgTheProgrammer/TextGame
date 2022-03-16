#include "NewGameState.h"
#include "Page.h"
#include "SpriteElement.h"
#include "DoorState.h"

NewGameState::NewGameState()
{
    std::vector<PageElement*> newGameElement;
    newGameElement.push_back(new SpriteElement("Assets/step1.png"));
    this->page = Page(newGameElement);
}

State NewGameState::HandleInput(sf::String playerInput)
{
    if (playerInput == "PULL DOOR")
        return DoorState();
    return NewGameState();
}
