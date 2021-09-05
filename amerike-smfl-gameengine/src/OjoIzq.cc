#include "OjoIzq.hh"

OjoIzq::OjoIzq(int w, int h, int x, int y, sf::Color color)
{
    ojoizq = new sf::RectangleShape(sf::Vector2f(w, h));
    ojoizq->setPosition(sf::Vector2f(x, y));
    ojoizq->setFillColor(color);
}

OjoIzq::~OjoIzq()
{
}
sf::RectangleShape* OjoIzq::GetShape() const
{
  return ojoizq;
}