#include "NewGameState.h"
#include "Page.h"
#include "SpriteElement.h"

NewGameState::NewGameState()
{
    std::vector<PageElement*> testElements;
    testElements.push_back(new SpriteElement("Assets/step1.png"));
    this->page = Page(testElements);
}

State NewGameState::HandleInput(sf::String playerInput)
{
    return State();
}
