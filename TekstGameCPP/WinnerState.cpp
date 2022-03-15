#include "WinnerState.h"
#include "SpriteElement.h"
#include "NewGameState.h"

WinnerState::WinnerState()
{
    std::vector<PageElement*> testElements;
    testElements.push_back(new SpriteElement("Assets/step5.png"));
    this->page = Page(testElements);
}

State WinnerState::HandleInput(sf::String playerInput)
{
    if (playerInput == "PLAY AGAIN" || "PLAY")
    {
        return NewGameState();
    }
    return WinnerState();
}
