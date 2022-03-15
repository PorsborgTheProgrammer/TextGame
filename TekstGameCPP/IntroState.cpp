#include "IntroState.h"
#include "Page.h"
#include "TextElement.h"
#include "NewGameState.h"


IntroState::IntroState()
{
    sf::String intro = "     DONT SHIT YOUR PANTS!\nA SURVIVAL HORROR ADVENTURE\n\n"
        "INSTRUCTIONS:\n- TO START TYPE 'PLAY'\n- TYPE THE ACTIONS YOU WANT\n- TYPE IN ALL CAPS ONLY\n\nGOAL:\n- DONT SHIT YOUR PANTS ";
    std::vector<PageElement*> introElement;
    introElement.push_back(new TextElement(intro));
    this->page = Page(introElement);
}

State IntroState::HandleInput(sf::String playerInput)
{
    if (playerInput == "PLAY")
        return NewGameState();

    return IntroState();
}

