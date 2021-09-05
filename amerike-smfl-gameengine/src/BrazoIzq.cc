#include "BrazoIzq.hh"

BrazoIzq::BrazoIzq(int w, int h, int x, int y, sf::Color color)
{
    brazoizq = new sf::RectangleShape(sf::Vector2f(w, h));
    brazoizq->setPosition(sf::Vector2f(x, y));
    brazoizq->setFillColor(color);
}

BrazoIzq::~BrazoIzq()
{
}
sf::RectangleShape* BrazoIzq::GetShape() const
{
  return brazoizq;
}