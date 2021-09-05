#include "Cinturon.hh"

Cinturon::Cinturon(int w, int h, int x, int y, sf::Color color)
{
    cinturon = new sf::RectangleShape(sf::Vector2f(w, h));
    cinturon->setPosition(sf::Vector2f(x, y));
    cinturon->setFillColor(color);
}

Cinturon::~Cinturon()
{
}
sf::RectangleShape* Cinturon::GetShape() const
{
  return cinturon;
}