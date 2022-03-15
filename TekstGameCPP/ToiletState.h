#pragma once
#include "State.h"
class ToiletState : public State
{
public:
	ToiletState();
	State HandleInput(sf::String playerInput);
};

