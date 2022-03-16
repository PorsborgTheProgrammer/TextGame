#include "WinnerState.h"
#include "SpriteElement.h"
#include "NewGameState.h"

WinnerState::WinnerState()
{
    std::vector<PageElement*> winnerElement;
    winnerElement.push_back(new SpriteElement("Assets/step5.png"));
    this->page = Page(winnerElement);
}

State WinnerState::HandleInput(sf::String playerInput)
{
    if (playerInput == "PLAY AGAIN" || "PLAY")
    {
        return NewGameState();
    }
    return WinnerState();
}
