#pragma once
#include "State.h"
class LoserState : public State
{
public:
	LoserState();
	State HandleInput(sf::String playerInput);
};

