#include "NewGameState.h"
#include "Page.h"
#include "SpriteElement.h"
#include "IntroState.h"
#include "DoorState.h"

NewGameState::NewGameState()
{
	std::vector<PageElement*> testElements;
	testElements.push_back(new SpriteElement("Assets/step1.png"));
	this->page = Page(testElements);
	this->stateName = "NewGameState";
}

State* NewGameState::HandleInput(sf::String playerInput)
{
	if (playerInput == "PULL DOOR")
		return new DoorState();

	return new NewGameState();

}
