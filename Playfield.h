#ifndef _PLAYFIELD_H_
#define _PLAYFIELD_H_

#include "Playfield.h"
//#include "Window.h"
#include <SFML/Graphics.hpp>

class Playfield{
public:
  Playfield(void);
  //Playfield(type);
  ~Playfield();
  void drawPlayfield(sf::RenderWindow & window);
private:
  //sf::Sprite charles;
  int boundaries;
};

#endif
