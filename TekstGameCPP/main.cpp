#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");

    sf::Font pixelFont;
    pixelFont.loadFromFile("Assets/pixelFont.ttf");
    sf::Texture texture;
    texture.loadFromFile("Assets/image.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);

    sf::String playerInput;
    sf::Text playerText(playerInput, pixelFont, 24);
    sf::String intro = "     DONT SHIT YOUR PANTS!\nA SURVIVAL HORRO ADVENTURE\n\n"
        "INSTRUCTIONS:\n- TO START TYPE 'PLAY'\nGOAL:\n- DONT SHIT YOUR PANTS ";
    sf::Text IntroText(intro, pixelFont, 24);

    

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::TextEntered)
            {
                playerInput += event.text.unicode;
                playerText.setString(playerInput);
            }
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);
        sf::FloatRect bounds = IntroText.getLocalBounds();
        IntroText.setPosition(400 - bounds.width/2, 0);
        window.draw(IntroText);
        window.draw(playerText);

        // end the current frame
        window.display();
    }

    return 0;
}