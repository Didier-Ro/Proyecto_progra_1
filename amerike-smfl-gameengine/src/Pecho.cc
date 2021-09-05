#include "Pecho.hh"

Pecho::Pecho(int w, int h, int x, int y, sf::Color color)
{
    pecho = new sf::RectangleShape(sf::Vector2f(w, h));
    pecho->setPosition(sf::Vector2f(x, y));
    pecho->setFillColor(color);
}

Pecho::~Pecho()
{
}
sf::RectangleShape* Pecho::GetShape() const
{
    return pecho;
}