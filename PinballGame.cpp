#include "PinballGame.h"

PinballGame::PinballGame(void){
  //get screensize save to variables and make fullscreen window
  this->window.create(sf::VideoMode(1200,800), "pinballz");
}

void PinballGame::play(void){
  while (this->window.isOpen()){
    while(this->window.pollEvent(event)){
      if(this->event.type == sf::Event::Closed){
        this->window.close();
      }
      this->window.clear(sf::Color::Green);
      this->playfield.drawPlayfield(window);
      this->ball.drawBall(window);
      this->window.display();
    }
  }
}
