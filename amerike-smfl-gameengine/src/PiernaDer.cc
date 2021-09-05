#include "PiernaDer.hh"

PiernaDer::PiernaDer(int w, int h, int x, int y, sf::Color color)
{
    piernader = new sf::RectangleShape(sf::Vector2f(w, h));
    piernader->setPosition(sf::Vector2f(x, y));
    piernader->setFillColor(color);
}

PiernaDer::~PiernaDer()
{
}
sf::RectangleShape* PiernaDer::GetShape() const
{
  return piernader;
}