#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(150, 25, 300, 0, sf::Color::Black)};
Rectangle* rectangle2{new Rectangle(208, 25, 270, 25, sf::Color::Black)};
Rectangle* rectangle3{new Rectangle(264, 25, 240, 50, sf::Color::Black)};
Rectangle* rectangle4{new Rectangle(323, 149, 210, 75, sf::Color::Black)};
Rectangle* rectangle5{new Rectangle(37, 75, 300, 50, sf::Color::Blue)};
Rectangle* rectangle6{new Rectangle(37, 75, 410, 50, sf::Color::Blue)};
Rectangle* rectangle7{new Rectangle(73, 37, 338, 88, sf::Color::White)};
Rectangle* rectangle8{new Rectangle(150, 25, 300, 125, sf::Color::White)};
Rectangle* rectangle9{new Rectangle(208, 73, 270, 150, sf::Color::White)};
Rectangle* rectangle10{new Rectangle(73, 73, 338, 150, sf::Color::Black)};
Rectangle* rectangle11{new Rectangle(150, 25, 300, 223, sf::Color::White)};
Rectangle* rectangle12{new Rectangle(73, 37, 338, 248, sf::Color::Red)};
Rectangle* rectangle13{new Rectangle(30, 30, 240, 223, sf::Color::Black)};
Rectangle* rectangle14{new Rectangle(30, 30, 478, 223, sf::Color::Black)};

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
  window->clear(sf::Color::Cyan);
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