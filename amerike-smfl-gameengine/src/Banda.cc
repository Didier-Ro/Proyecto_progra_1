#include "Banda.hh"

Banda::Banda(int w, int h, int x, int y, sf::Color color)
{
    banda = new sf::RectangleShape(sf::Vector2f(w, h));
    banda->setPosition(sf::Vector2f(x, y));
    banda->setFillColor(color);
}

Banda::~Banda()
{
}
sf::RectangleShape* Banda::GetShape() const
{
  return banda;
}