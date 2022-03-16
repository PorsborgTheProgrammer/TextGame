#include "LoserState.h"
#include "SpriteElement.h"
#include "NewGameState.h"
LoserState::LoserState()
{
    std::vector<PageElement*> loserElement;
    loserElement.push_back(new SpriteElement("Assets/lose.png"));
    this->page = Page(loserElement);
}

State* LoserState::HandleInput(sf::String playerInput)
{
    if (playerInput == "PLAY AGAIN" || "PLAY")
    {
        return new NewGameState();
    }
    return new LoserState();
}
