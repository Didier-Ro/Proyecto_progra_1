#pragma once
#include <SFML/Graphics.hpp>

class Hombros
{
private:
    sf::RectangleShape* hombros{};
public:
    Hombros(int w, int h, int x, int y, sf::Color color);
    ~Hombros();
    sf::RectangleShape* GetShape() const;
};
