#pragma once
#include <SFML/Graphics.hpp>

class BrazoDer
{
private:
    sf::RectangleShape* brazoder{};
public:
    BrazoDer(int w, int h, int x, int y, sf::Color color);
    ~BrazoDer();
    sf::RectangleShape* GetShape() const;
};

