#include "Hombros.hh"

Hombros::Hombros(int w, int h, int x, int y, sf::Color color)
{
    hombros = new sf::RectangleShape(sf::Vector2f(w, h));
    hombros->setPosition(sf::Vector2f(x, y));
    hombros->setFillColor(color);
}

Hombros::~Hombros()
{
}
sf::RectangleShape* Hombros::GetShape() const
{
  return hombros;
}