#pragma once
#include <SFML/Graphics.hpp>

class Menton
{
private:
    sf::RectangleShape* menton{};
public:
    Menton(int w, int h, int x, int y, sf::Color color);
    ~Menton();
    sf::RectangleShape* GetShape() const;
};


