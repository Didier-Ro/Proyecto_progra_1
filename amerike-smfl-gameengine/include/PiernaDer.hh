#pragma once
#include<SFML/Graphics.hpp>

class PiernaDer
{
private:
    sf::RectangleShape* piernader{};
public:
    PiernaDer(int w, int h, int x, int y, sf::Color color);
    ~PiernaDer();
    sf::RectangleShape* GetShape() const;
};

