#include "IntroState.h"
#include "Page.h"
#include "TextElement.h"
#include "NewGameState.h"


IntroState::IntroState()
{
    sf::String intro = "     DONT SHIT YOUR PANTS!\nA SURVIVAL HORROR ADVENTURE\n\n"
        "INSTRUCTIONS:\n- TO START TYPE 'PLAY'\n- TYPE THE ACTIONS YOU WANT\n- TYPE IN ALL CAPS ONLY\n\nGOAL:\n- DONT SHIT YOUR PANTS ";
    std::vector<PageElement*> testElements;
    testElements.push_back(new TextElement(intro));
    this->page = Page(testElements);
    this->stateName = "IntroState";
}

State* IntroState::HandleInput(sf::String playerInput)
{
    std::string str = playerInput;
    if (playerInput == "PLAY")
        return new NewGameState();

    if (playerInput == "YEET")
        return new NewGameState();

    return new IntroState();
}

