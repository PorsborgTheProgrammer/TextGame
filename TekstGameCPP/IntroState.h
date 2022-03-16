#pragma once
#include "State.h"
class IntroState : public State
{
public:
	IntroState();
	State* HandleInput(sf::String playerInput) override;
};

