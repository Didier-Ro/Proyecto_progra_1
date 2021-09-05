#pragma once
#include<SFML/Graphics.hpp>

class PiernaIzq
{
private:
    sf::RectangleShape* piernaizq{};
public:
    PiernaIzq(int w, int h, int x, int y, sf::Color color);
    ~PiernaIzq();
    sf::RectangleShape* GetShape() const;
};


