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
#include "LoserState.h"

using namespace std;

State* currentState = new IntroState();

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

    //Testing Shit
    int TimeToShit = 30;
    bool isTimerOn = false;
    Timer timer;
    sf::String time = "";
    sf::Text timerText(time, pixelFont, fontSize);
    timerText.setPosition(0, 0);

    // run the program as long as the window is open
    while (window.isOpen())
    {
        //Update Timer
        if (typeid(*currentState) != typeid(IntroState))
        {
            isTimerOn = true;
        }
        if (isTimerOn == true && !timer.isRunning)
        {
            timer.start();
        }
        else if(isTimerOn == true)
        {
            auto str = std::to_string(TimeToShit - (int)timer.elapsedSeconds());
            time = "Timer: " + str;
            timerText.setString(time);
        }
        else if(timer.isRunning)
        {
            timer.stop();
            time = "";
            timerText.setString("");
        }

        //see if shit pants
        if (TimeToShit - (int)timer.elapsedSeconds() <= 0)
        {
            isTimerOn = false;
            currentState = new LoserState();
        }

        HandleInput(window, playerInput, playerText);
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
    
    return 0;
}

void HandleInput(sf::RenderWindow& window, sf::String& playerInput, sf::Text& playerText)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::TextEntered && event.key.code != sf::Keyboard::Enter)
        {
            if (event.text.unicode != 8 && event.text.unicode != '\r')
            {
                sf::String str = event.text.unicode;
                playerInput += str;
                playerText.setString(playerInput);
            }
            else if(playerInput.getSize() > 0 && event.text.unicode != '\r')
            {
                playerInput.erase(playerInput.getSize() - 1, 2);
                playerText.setString(playerInput);
            }
        }

        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter)
        {
            currentState = currentState->HandleInput(playerInput);
            playerInput = "";
            playerText.setString(playerInput);
        }

        // "close requested" event: we close the window
        if (event.type == sf::Event::Closed)
            window.close();
    }
}
