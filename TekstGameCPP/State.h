#pragma once
#include "Page.h"
#include <SFML/Graphics.hpp>
#include <String>
	class State
	{
	public: 
		virtual State* HandleInput(sf::String playerInput) = 0;
		Page page;
		std::string stateName;
		State();
	};

