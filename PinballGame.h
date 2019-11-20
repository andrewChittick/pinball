#ifndef _PINBALLGAME_H_
#define _PINBALLGAME_H_

#include "Window.h"
#include "Playfield.h"
#include "Ball.h"

class PinballGame{
public:
  PinballGame(void);
  void play(void);
private:
  sf::RenderWindow window;
  sf::Event event;
  Playfield playfield;
  Ball ball;
};

#endif
