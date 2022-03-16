#pragma once
#include "State.h"
class WinnerState : public State
{
public:
	WinnerState();
	State HandleInput(sf::String playerInput);
};

