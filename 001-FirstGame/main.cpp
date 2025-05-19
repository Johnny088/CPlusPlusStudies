#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
//#include <SFML/Network.hpp>
using namespace std;
int main()
{
    //Windows parameters
    sf::RenderWindow window(sf::VideoMode({1024, 768}), "My first game" /*,sf::Style::Titlebar*/);
    sf::Event ev();
    //game loop
    while (window.isOpen())
    {
        while (window.pollEvent())
        {
            switch (ev = window.pollEvent())
            {
            default:
                break;
            }
        }
    }
}