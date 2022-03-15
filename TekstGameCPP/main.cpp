#include <SFML/Graphics.hpp>
#include <vector>
#include <windows.h>
#include "main.h"
#include "Page.h"
#include "TextElement.h"
#include "State.h"
#include "IntroState.h"
#include "Timer.h"
#include <string>

using namespace std;


int main()
{ 
    // create the window
    sf::RenderWindow window(sf::VideoMode(511, 511), "My window");

    #pragma region PlayerInputField
    // players input text field
    sf::Font pixelFont;
    pixelFont.loadFromFile("Assets/pixelFont.ttf");
    sf::String playerInput;
    int fontSize = 24;
    sf::Text playerText(playerInput, pixelFont, fontSize);
    playerText.setPosition(20, 511 - (fontSize + 10));
    sf::Text inputMarker(">", pixelFont, fontSize);
    inputMarker.setPosition(2, 511 - (fontSize + 10));
    #pragma endregion PlayerInputField

    //State
    State* currentState = new IntroState();

    //Testing Shit
    Timer timer;
    sf::String time = "YEEET";
    sf::Text timerText(time, pixelFont, fontSize);
    timerText.setPosition(0, 0);

    timer.start();
    // run the program as long as the window is open
    while (window.isOpen())
    {
        //Update Timer
        auto str = std::to_string((int)timer.elapsedSeconds());
        time = "Timer: " + str;
        timerText.setString(time);

        HandleInput(window, playerInput, playerText, *currentState);
        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...window.draw(...);
        window.draw(timerText);
        currentState->page.Render(window);
        window.draw(inputMarker);
        window.draw(playerText);

        // end the current frame
        window.display();
    }
    timer.stop();
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
            currentState = currentState.HandleInput(playerInput);
            playerInput = "";
            playerText.setString(playerInput);
        }

        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed)
            window.close();
    }
}
