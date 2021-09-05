#pragma once
#include <SFML/Graphics.hpp>

class OjoIzq
{
private:
    sf::RectangleShape* ojoizq{};
public:
    OjoIzq(int w, int h, int x, int y, sf::Color color);
    ~OjoIzq();
    sf::RectangleShape* GetShape() const;
};

