#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

class Window : public sf::Drawable{
public:
  Window(void);
  void open(void);
  void gameLoop(void);
private:
  sf::RenderWindow window;
  sf::Sprite playfield;
  void setPlayfield(void);
};

#endif
