#pragma once
#include "State.h"
#include "TextElement.h"
class NewGameState : public State
{
public:
	NewGameState();
	State* HandleInput(sf::String playerInput) override;
};

