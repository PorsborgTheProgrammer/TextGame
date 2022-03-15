#pragma once
#include "State.h"
class PantsState : public State
{
public:
	PantsState();
	State HandleInput(sf::String playerInput);
};

