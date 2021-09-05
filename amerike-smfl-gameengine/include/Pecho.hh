#pragma once
#include <SFML/Graphics.hpp>

class Pecho
{
private:
    sf::RectangleShape* pecho{};

public:
    Pecho(int w, int h, int x, int y, sf::Color color);
    ~Pecho();
    sf::RectangleShape* GetShape() const;
};


