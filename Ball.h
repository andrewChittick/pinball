#ifndef _BALL_H_
#define _BALL_H_

//#include "Playfield.h"
//#include "Window.h"
#include <SFML/Graphics.hpp>
#include <iostream>

class Ball{
public:
  Ball(void);
  ~Ball();
  void drawBall(sf::RenderWindow & window);
private:
  sf::CircleShape ballSprite;
  //sf::VertexArray charles(sf::Triangles, 3);
  //sf::Sprite charles;
  //int boundaries;
};

#endif
