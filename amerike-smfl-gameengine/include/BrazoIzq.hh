#pragma once
#include<SFML/Graphics.hpp>

class BrazoIzq
{
private:
    sf::RectangleShape* brazoizq{};
public:
    BrazoIzq(int w, int h, int x, int y, sf::Color color);
    ~BrazoIzq();
    sf::RectangleShape* GetShape() const;
};

