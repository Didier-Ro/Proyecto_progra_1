#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(100, 25, 300, 100, sf::Color::Black)};
Rectangle* rectangle2{new Rectangle(100, 25, 300, 125, sf::Color::Yellow)};
Rectangle* rectangle3{new Rectangle(100, 25, 300, 150, sf::Color::Black)};
Rectangle* rectangle4{new Rectangle(20, 30, 340, 175, sf::Color::Black)};
Rectangle* rectangle5{new Rectangle(125, 25, 290, 200, sf::Color::Black)};
Rectangle* rectangle6{new Rectangle(75, 130, 315, 200, sf::Color::Black)};
Rectangle* rectangle7{new Rectangle(25, 80, 265, 200, sf::Color::Black)};
Rectangle* rectangle8{new Rectangle(25, 80, 415, 200, sf::Color::Black)};
Rectangle* rectangle9{new Rectangle(30, 90, 315, 325, sf::Color::Black)};
Rectangle* rectangle10{new Rectangle(30, 90, 360, 325, sf::Color::Black)};
Rectangle* rectangle11{new Rectangle(15,15, 320, 129, sf::Color::Blue)};
Rectangle* rectangle12{new Rectangle(15,15, 360, 129, sf::Color::Blue)};
Rectangle* rectangle13{new Rectangle(100, 10, 300, 115, sf::Color::Red)};
Rectangle* rectangle14{new Rectangle(75, 10, 315, 300, sf::Color::Red)};

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
  window->draw(*rectangle2->GetShape());
  window->draw(*rectangle3->GetShape());
  window->draw(*rectangle4->GetShape());
  window->draw(*rectangle5->GetShape());
  window->draw(*rectangle6->GetShape());
  window->draw(*rectangle7->GetShape());
  window->draw(*rectangle8->GetShape());
  window->draw(*rectangle9->GetShape());
  window->draw(*rectangle10->GetShape());
  window->draw(*rectangle11->GetShape());
  window->draw(*rectangle12->GetShape());
  window->draw(*rectangle13->GetShape());
  window->draw(*rectangle14->GetShape());
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