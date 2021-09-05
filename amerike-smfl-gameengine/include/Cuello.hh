#pragma once
#include <SFML/Graphics.hpp>

class Cuello
{
private:
   sf::RectangleShape*cuello{}; 
   
public:
    Cuello(int w, int h, int x, int y, sf::Color color);
    ~Cuello();
    sf::RectangleShape* GetShape() const;
};


