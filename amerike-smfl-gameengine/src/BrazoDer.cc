#include "BrazoDer.hh"

BrazoDer::BrazoDer(int w, int h, int x, int y, sf::Color color)
{
    brazoder = new sf::RectangleShape(sf::Vector2f(w, h));
    brazoder->setPosition(sf::Vector2f(x, y));
    brazoder->setFillColor(color);
}

BrazoDer::~BrazoDer()
{
}
sf::RectangleShape* BrazoDer::GetShape() const
{
  return brazoder;
}