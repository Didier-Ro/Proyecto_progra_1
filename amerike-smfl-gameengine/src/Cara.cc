#include "Cara.hh"

Cara::Cara(int w, int h, int x, int y, sf::Color color)
{
    cara = new sf::RectangleShape(sf::Vector2f(w, h));
    cara->setPosition(sf::Vector2f(x, y));
    cara->setFillColor(color);
}

Cara::~Cara()
{
}
sf::RectangleShape* Cara::GetShape() const
{
  return cara;
}