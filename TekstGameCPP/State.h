#pragma once
#include "Page.h"
#include <SFML/Graphics.hpp>
	class State
	{
	public: 
		virtual State HandleInput(sf::String playerInput);
		Page page;
		State();
	};

