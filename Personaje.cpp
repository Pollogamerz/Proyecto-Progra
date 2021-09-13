#include<iostream>
#include<SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow* window{new sf::RenderWindow(sf::VideoMode(800, 800), "Game1")};
    sf::Event* event{new sf::Event()};
    
    sf::RectangleShape* rectangleShape{new sf::RectangleShape(sf::Vector2f(100, 100))};
    rectangleShape->setPosition(sf::Vector2f(200, 50));
    rectangleShape->setFillColor(sf::Color::Yellow);
    rectangleShape->setOutlineThickness(1);
    rectangleShape->setOutlineThickness(sf::Color::Green);
    //main loop
    while (Window->isOpen())
    {
        while(window->pollEvent(*event))
        {
            if(event->type == sf::Event::Closed)
            {
                window->close();
            }
        }
        window->clear(sf::Color::Black);

        window->draw(*rectangleShape);

        window->display();
    }
    delete window;
    delete event;

    return EXIT_SUCCESS;
}

