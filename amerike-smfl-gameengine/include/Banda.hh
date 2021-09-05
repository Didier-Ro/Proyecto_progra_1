#pragma once
#include <SFML/Graphics.hpp>

class Banda
{
private:
    sf::RectangleShape* banda{};
public:
    Banda(int w, int h, int x, int y, sf::Color color);
    ~Banda();
    sf::RectangleShape* GetShape() const;
};
