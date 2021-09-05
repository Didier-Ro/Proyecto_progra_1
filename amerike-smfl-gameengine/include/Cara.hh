#pragma once
#include <SFML/Graphics.hpp>

class Cara
{
private:
    sf::RectangleShape* cara{};
    
public:
    Cara(int w, int h, int x, int y, sf::Color color);

    ~Cara();
    sf::RectangleShape* GetShape() const;
};


