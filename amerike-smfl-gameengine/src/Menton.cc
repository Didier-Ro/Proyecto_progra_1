#include "Menton.hh"

Menton::Menton(int w, int h, int x, int y, sf::Color color)
{
    menton = new sf::RectangleShape(sf::Vector2f(w, h));
    menton->setPosition(sf::Vector2f(x, y));
    menton->setFillColor(color);
}

Menton::~Menton()
{
}
sf::RectangleShape* Menton::GetShape() const
{
  return menton;
}