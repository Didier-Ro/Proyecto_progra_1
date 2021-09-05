#pragma once
#include <SFML/Graphics.hpp>

class Cinturon
{
private:
    sf::RectangleShape* cinturon{};
public:
    Cinturon(int w, int h, int x, int y, sf::Color color);
    ~Cinturon();
    sf::RectangleShape* GetShape() const;
};

