#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main(){

    sf::RenderWindow window(sf::VideoMode({800, 900}), "Tetris");
    window.clear();
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color(255, 23, 24));
    circle.setPosition(sf::Vector2f(400, 450));

    window.draw(circle);
    window.display();


    sf::sleep(sf::seconds(5));

    return 0;
}