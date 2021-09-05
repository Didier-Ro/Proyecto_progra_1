#include "PiernaIzq.hh"

PiernaIzq::PiernaIzq(int w, int h, int x, int y, sf::Color color)
{
    piernaizq = new sf::RectangleShape(sf::Vector2f(w, h));
    piernaizq->setPosition(sf::Vector2f(x, y));
    piernaizq->setFillColor(color);
}

PiernaIzq::~PiernaIzq()
{
}
sf::RectangleShape* PiernaIzq::GetShape() const
{
  return piernaizq;
}