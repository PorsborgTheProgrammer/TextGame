#pragma once
#include "State.h"
class DoorState2 : public State
{
public:
	DoorState2();
	State* HandleInput(sf::String playerInput);
};

