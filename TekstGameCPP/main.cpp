#include <SFML/Graphics.hpp>
#include <vector>
#include <windows.h>
#include "main.h"
#include "Page.h"
#include "TextElement.h"
#include "State.h"
#include "IntroState.h"
#include "Timer.h"

using namespace std;


int main()
{ 
    // create the window
    sf::RenderWindow window(sf::VideoMode(511, 511), "My window");

    // players input text
    sf::Font pixelFont;
    pixelFont.loadFromFile("Assets/pixelFont.ttf");
    sf::String playerInput;
    int fontSize = 24;
    sf::Text playerText(playerInput, pixelFont, fontSize);
    sf::Text inputMarker(">", pixelFont, fontSize);

    //Testing Shit
    Timer timer;
    State* currentState = new IntroState();

    

    // run the program as long as the window is open
    while (window.isOpen())
    {
        HandleInput(window, playerInput, playerText, *currentState);
        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
        currentState->page.Render(window);

        playerText.setPosition(20, 511-(fontSize + 10));
        window.draw(playerText);
        inputMarker.setPosition(2, 511 - (fontSize + 10));
        window.draw(inputMarker);

        // end the current frame
        window.display();
    }

    return 0;
}

void HandleInput(sf::RenderWindow& window, sf::String& playerInput, sf::Text& playerText, State& currentState)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::TextEntered && event.key.code != sf::Keyboard::Backspace)
        {
            if (event.text.unicode != 8)
            {
                sf::String str = event.text.unicode;
                playerInput += str;
                playerText.setString(playerInput);
            }
            else if(playerInput.getSize() > 0)
            {
                playerInput.erase(playerInput.getSize() - 1, 2);
                playerText.setString(playerInput);
            }
        }

        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter)
        {
            State state = currentState.HandleInput(playerInput);
            currentState = currentState.HandleInput(playerInput);
            playerInput = "";
            playerText.setString(playerInput);
        }

        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed)
            window.close();
    }
}
