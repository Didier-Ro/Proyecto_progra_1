#include "OjoDer.hh"

OjoDer::OjoDer(int w, int h, int x, int y, sf::Color color)
{
    ojoder = new sf::RectangleShape(sf::Vector2f(w, h));
    ojoder->setPosition(sf::Vector2f(x, y));
    ojoder->setFillColor(color);
}

OjoDer::~OjoDer()
{
}
sf::RectangleShape* OjoDer::GetShape() const
{
  return ojoder;
}