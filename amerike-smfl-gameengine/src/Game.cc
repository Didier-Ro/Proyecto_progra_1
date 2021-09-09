#include "Game.hh"
#include "Constants.hh"
#include "Rectangle.hh"

Rectangle* rectangle{new Rectangle(80, 20, 300, 0, sf::Color::Black)};
Rectangle* rectangle2{new Rectangle(40, 20, 260, 19, sf::Color::Black)};
Rectangle* rectangle3{new Rectangle(40, 20, 380, 19, sf::Color::Black)};
Rectangle* rectangle4{new Rectangle(20, 20, 240, 39, sf::Color::Black)};
Rectangle* rectangle5{new Rectangle(20, 20, 420, 39, sf::Color::Black)};
Rectangle* rectangle6{new Rectangle(20, 40, 220, 59, sf::Color::Black)};
Rectangle* rectangle7{new Rectangle(20, 40, 440, 59, sf::Color::Black)};
Rectangle* rectangle8{new Rectangle(20, 400, 200, 99, sf::Color::Black)};
Rectangle* rectangle9{new Rectangle(20, 400, 460, 99, sf::Color::Black)};
Rectangle* rectangle10{new Rectangle(280, 20, 200, 159, sf::Color::Black)};
Rectangle* rectangle11{new Rectangle(280, 20, 200, 420, sf::Color::Black)};
Rectangle* rectangle12{new Rectangle(40, 20, 160, 179, sf::Color::Black)};
Rectangle* rectangle13{new Rectangle(40, 20, 480, 179, sf::Color::Black)};
Rectangle* rectangle14{new Rectangle(20, 60, 140, 199, sf::Color::Black)};
Rectangle* rectangle15{new Rectangle(20, 60, 520, 199, sf::Color::Black)};
Rectangle* rectangle16{new Rectangle(40, 20, 160, 239, sf::Color::Black)};
Rectangle* rectangle17{new Rectangle(40, 20, 480, 239, sf::Color::Black)};
Rectangle* rectangle18{new Rectangle(20, 160, 160, 239, sf::Color::Black)};
Rectangle* rectangle19{new Rectangle(20, 160, 500, 239, sf::Color::Black)};
Rectangle* rectangle20{new Rectangle(20, 20, 180, 379, sf::Color::Black)};
Rectangle* rectangle21{new Rectangle(20, 20, 480, 379, sf::Color::Black)};
Rectangle* rectangle22{new Rectangle(20, 40, 140, 399, sf::Color::Black)};
Rectangle* rectangle23{new Rectangle(20, 40, 520, 399, sf::Color::Black)};
Rectangle* rectangle24{new Rectangle(20, 60, 120, 439, sf::Color::Black)};
Rectangle* rectangle25{new Rectangle(20, 60, 540, 439, sf::Color::Black)};
Rectangle* rectangle26{new Rectangle(60, 20, 140, 479, sf::Color::Black)};
Rectangle* rectangle27{new Rectangle(60, 20, 480, 479, sf::Color::Black)};
Rectangle* rectangle28{new Rectangle(20, 20, 280, 439, sf::Color::Black)};
Rectangle* rectangle29{new Rectangle(20, 20, 380, 439, sf::Color::Black)};
Rectangle* rectangle30{new Rectangle(20, 40, 260, 459, sf::Color::Black)};
Rectangle* rectangle31{new Rectangle(20, 40, 400, 459, sf::Color::Black)};
Rectangle* rectangle32{new Rectangle(120, 20, 280, 479, sf::Color::Black)};
Rectangle* rectangle33{new Rectangle(40, 20, 320, 19, sf::Color::Blue)};
Rectangle* rectangle34{new Rectangle(20, 20, 320, 59, sf::Color::Black)};
Rectangle* rectangle35{new Rectangle(20, 40, 340, 39, sf::Color::Black)};
Rectangle* rectangle36{new Rectangle(20, 60, 300, 39, sf::Color::Blue)};
Rectangle* rectangle37{new Rectangle(20, 60, 360, 39, sf::Color::Blue)};
Rectangle* rectangle38{new Rectangle(40, 20, 320, 79, sf::Color::Blue)};
Rectangle* rectangle39{new Rectangle(20, 20, 260, 39, sf::Color::Blue)};
Rectangle* rectangle40{new Rectangle(20, 20, 400, 39, sf::Color::Blue)};
Rectangle* rectangle41{new Rectangle(20, 20, 240, 59, sf::Color::Blue)};
Rectangle* rectangle42{new Rectangle(20, 20, 420, 59, sf::Color::Blue)};
Rectangle* rectangle43{new Rectangle(40, 20, 240, 99, sf::Color::Blue)};
Rectangle* rectangle44{new Rectangle(40, 20, 240, 139, sf::Color::Blue)};
Rectangle* rectangle45{new Rectangle(20, 40, 300, 119, sf::Color::Blue)};
Rectangle* rectangle46{new Rectangle(20, 40, 340, 119, sf::Color::Blue)};
Rectangle* rectangle47{new Rectangle(20, 40, 380, 119, sf::Color::Blue)};
Rectangle* rectangle48{new Rectangle(20, 40, 420, 119, sf::Color::Blue)};
Rectangle* rectangle49{new Rectangle(20, 20, 360, 119, sf::Color::Blue)};
Rectangle* rectangle50{new Rectangle(20, 20, 360, 139, sf::Color::Red)};
Rectangle* rectangle51{new Rectangle(80, 20, 300, 199, sf::Color::Blue)};
Rectangle* rectangle52{new Rectangle(80, 20, 300, 239, sf::Color::Blue)};
Rectangle* rectangle53{new Rectangle(20, 40, 300, 279, sf::Color::Blue)};
Rectangle* rectangle54{new Rectangle(20, 40, 360, 279, sf::Color::Blue)};
Rectangle* rectangle55{new Rectangle(20, 80, 300, 340, sf::Color::Blue)};
Rectangle* rectangle56{new Rectangle(20, 80, 360, 340, sf::Color::Blue)};
Rectangle* rectangle57{new Rectangle(40, 20, 320, 340, sf::Color::Blue)};
Rectangle* rectangle58{new Rectangle(40, 20, 320, 400, sf::Color::Blue)};
Rectangle* rectangle59{new Rectangle(20, 20, 340, 360, sf::Color::Black)};
Rectangle* rectangle60{new Rectangle(20, 20, 320, 380, sf::Color::Black)};
Rectangle* rectangle61{new Rectangle(20, 20, 320, 360, sf::Color(128, 128, 128))};
Rectangle* rectangle62{new Rectangle(20, 20, 340, 380, sf::Color(128, 128, 128))};
Rectangle* rectangle63{new Rectangle(40, 40, 320, 279, sf::Color(128, 128, 128))};
Rectangle* rectangle64{new Rectangle(20, 40, 180, 399, sf::Color(128, 128, 128))};
Rectangle* rectangle65{new Rectangle(20, 40, 480, 399, sf::Color(128, 128, 128))};
Rectangle* rectangle66{new Rectangle(40, 20, 320, 439, sf::Color(128, 128, 128))};
Rectangle* rectangle67{new Rectangle(20, 20, 300, 459, sf::Color(128, 128, 128))};
Rectangle* rectangle68{new Rectangle(20, 20, 360, 459, sf::Color(128, 128, 128))};
Rectangle* rectangle69{new Rectangle(20, 160, 220, 200, sf::Color(128, 128, 128))};
Rectangle* rectangle70{new Rectangle(20, 160, 440, 200, sf::Color(128, 128, 128))};
Rectangle* rectangle71{new Rectangle(20, 220, 260, 200, sf::Color(128, 128, 128))};
Rectangle* rectangle72{new Rectangle(20, 220, 400, 200, sf::Color(128, 128, 128))};
Rectangle* rectangle73{new Rectangle(20, 20, 240, 200, sf::Color(128, 128, 128))};
Rectangle* rectangle74{new Rectangle(20, 20, 420, 200, sf::Color(128, 128, 128))};
Rectangle* rectangle75{new Rectangle(20, 20, 240, 340, sf::Color(128, 128, 128))};
Rectangle* rectangle76{new Rectangle(20, 20, 420, 340, sf::Color(128, 128, 128))};

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
  window->draw(*rectangle15->GetShape());
  window->draw(*rectangle16->GetShape());
  window->draw(*rectangle17->GetShape());
  window->draw(*rectangle18->GetShape());
  window->draw(*rectangle19->GetShape());
  window->draw(*rectangle20->GetShape());
  window->draw(*rectangle21->GetShape());
  window->draw(*rectangle22->GetShape());
  window->draw(*rectangle23->GetShape());
  window->draw(*rectangle24->GetShape());
  window->draw(*rectangle25->GetShape());
  window->draw(*rectangle26->GetShape());
  window->draw(*rectangle27->GetShape());
  window->draw(*rectangle28->GetShape());
  window->draw(*rectangle29->GetShape());
  window->draw(*rectangle30->GetShape());
  window->draw(*rectangle31->GetShape());
  window->draw(*rectangle32->GetShape());
  window->draw(*rectangle33->GetShape());
  window->draw(*rectangle34->GetShape());
  window->draw(*rectangle35->GetShape());
  window->draw(*rectangle36->GetShape());
  window->draw(*rectangle37->GetShape());
  window->draw(*rectangle38->GetShape());
  window->draw(*rectangle39->GetShape());
  window->draw(*rectangle40->GetShape());
  window->draw(*rectangle41->GetShape());
  window->draw(*rectangle42->GetShape());
  window->draw(*rectangle43->GetShape());
  window->draw(*rectangle44->GetShape());
  window->draw(*rectangle45->GetShape());
  window->draw(*rectangle46->GetShape());
  window->draw(*rectangle47->GetShape());
  window->draw(*rectangle48->GetShape());
  window->draw(*rectangle49->GetShape());
  window->draw(*rectangle50->GetShape());
  window->draw(*rectangle51->GetShape());
  window->draw(*rectangle52->GetShape());
  window->draw(*rectangle53->GetShape());
  window->draw(*rectangle54->GetShape());
  window->draw(*rectangle55->GetShape());
  window->draw(*rectangle56->GetShape());
  window->draw(*rectangle57->GetShape());
  window->draw(*rectangle58->GetShape());
  window->draw(*rectangle59->GetShape());
  window->draw(*rectangle60->GetShape());
  window->draw(*rectangle61->GetShape());
  window->draw(*rectangle62->GetShape());
  window->draw(*rectangle63->GetShape());
  window->draw(*rectangle64->GetShape());
  window->draw(*rectangle65->GetShape());
  window->draw(*rectangle66->GetShape());
  window->draw(*rectangle67->GetShape());
  window->draw(*rectangle68->GetShape());
  window->draw(*rectangle69->GetShape());
  window->draw(*rectangle70->GetShape());
  window->draw(*rectangle71->GetShape());
  window->draw(*rectangle72->GetShape());
  window->draw(*rectangle73->GetShape());
  window->draw(*rectangle74->GetShape());
  window->draw(*rectangle75->GetShape());
  window->draw(*rectangle76->GetShape());
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