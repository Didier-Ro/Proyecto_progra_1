#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"
#include "Cara.hh"
#include "Menton.hh"
#include "Cuello.hh"
#include "Hombros.hh"
#include "Pecho.hh"
#include "BrazoDer.hh"
#include "BrazoIzq.hh"
#include "PiernaDer.hh"
#include "PiernaIzq.hh"
#include "OjoDer.hh"
#include "OjoIzq.hh"
#include "Banda.hh"
#include "Cinturon.hh"

Rectangle* rectangle{new Rectangle(100, 25, 300, 100, sf::Color::Black)};
Cara* cara{new Cara(100, 25, 300, 125, sf::Color::Yellow)};
Menton* menton{new Menton(100, 25, 300, 150, sf::Color::Black)};
Cuello* cuello{new Cuello(20, 30, 340, 175, sf::Color::Black)};
Hombros* hombros{new Hombros(125, 25, 290, 200, sf::Color::Black)};
Pecho* pecho{new Pecho(75, 130, 315, 200, sf::Color::Black)};
BrazoDer* brazoder{new BrazoDer(25, 80, 265, 200, sf::Color::Black)};
BrazoIzq* brazoizq{new BrazoIzq(25, 80, 415, 200, sf::Color::Black)};
PiernaDer* piernader{new PiernaDer(30, 90, 315, 325, sf::Color::Black)};
PiernaIzq* piernaizq{new PiernaIzq(30, 90, 360, 325, sf::Color::Black)};
OjoDer* ojoder{new OjoDer(15,15, 320, 129, sf::Color::Blue)};
OjoIzq* ojoizq{new OjoIzq(15,15, 360, 129, sf::Color::Blue)};
Banda* banda{new Banda(100, 10, 300, 115, sf::Color::Red)};
Cinturon* cinturon{new Cinturon(75, 10, 315, 300, sf::Color::Red)};

Game::Game()
{
  window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_NAME);
  event = new sf::Event();
}

Game::~Game()
{
}

//Starting things
void Game::Start()
{

}

void Game::Initialize()
{
  Start();
  MainLoop();
}

//Logic, animations, etc
void Game::Update()
{

}

void Game::MainLoop()
{
  while (window->isOpen())
  {
    while(window->pollEvent(*event))
    {
      if(event->type == sf::Event::Closed)
      {
        window->close();
      }
    }
    Input();
    Update();
    Render();
  }
  Destroy();
}

void Game::Render()
{
  window->clear(sf::Color::White);
  Draw();
  window->display();
}

//Drawing sprites or geometry.
void Game::Draw()
{
  window->draw(*rectangle->GetShape());
  window->draw(*cara->GetShape());
  window->draw(*menton->GetShape());
  window->draw(*cuello->GetShape());
  window->draw(*hombros->GetShape());
  window->draw(*pecho->GetShape());
  window->draw(*brazoder->GetShape());
  window->draw(*brazoizq->GetShape());
  window->draw(*piernader->GetShape());
  window->draw(*piernaizq->GetShape());
  window->draw(*ojoder->GetShape());
  window->draw(*ojoizq->GetShape());
  window->draw(*banda->GetShape());
  window->draw(*cinturon->GetShape());
}

//Keyboard, joysticks, etc.
void Game::Input()
{

}

void Game::Destroy()
{
  delete window;
  delete event;
}