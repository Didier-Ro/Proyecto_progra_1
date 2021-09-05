#pragma once
#include <SFML/Graphics.hpp>

class OjoDer
{
private:
    sf::RectangleShape* ojoder{};
public:
    OjoDer(int w, int h, int x, int y, sf::Color color);
    ~OjoDer();
    sf::RectangleShape* GetShape() const;
};

