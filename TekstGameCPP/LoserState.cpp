#include "LoserState.h"
#include "SpriteElement.h"
#include "NewGameState.h"
LoserState::LoserState()
{
    std::vector<PageElement*> testElements;
    testElements.push_back(new SpriteElement("Assets/lose.png"));
    this->page = Page(testElements);
}

State LoserState::HandleInput(sf::String playerInput)
{
    if (playerInput == "PLAY AGAIN" || "PLAY")
    {
        return NewGameState();
    }
    return LoserState();
}
