#include <Cuello.hh>

Cuello::Cuello(int w, int h, int x, int y, sf::Color color)
{
    cuello = new sf::RectangleShape(sf::Vector2f(w, h));
    cuello->setPosition(sf::Vector2f(x, y));
    cuello->setFillColor(color);
}

Cuello::~Cuello()
{
}
sf::RectangleShape* Cuello::GetShape() const
{
  return cuello;
}