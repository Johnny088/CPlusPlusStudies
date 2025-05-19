#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
int main()
{
    sf::RenderWindow window(sf::VideoMode({ 600, 600 }), "SFML works!");
    sf::RectangleShape shape(sf::Vector2f(250, 100));
    shape.setFillColor(sf::Color::Blue);
    shape.setPosition({ 200, 200 });

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    
}