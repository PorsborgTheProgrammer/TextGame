#pragma once
#include "State.h"

class DoorState : public State
{
public:
	DoorState();
	State* HandleInput(sf::String playerInput);
};

