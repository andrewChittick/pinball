#include "Playfield.h"

Playfield::Playfield(void){}

Playfield::~Playfield(){}

void Playfield::drawPlayfield(sf::RenderWindow & window){
  //stuff
  sf::Texture texture;

  if (!texture.loadFromFile("pinball.png")){
    //error
    //std::cout<<"no"<<std::endl;
  }

  //texture.loadFromFile("pinball.png");
  sf::Sprite sprite;
  sprite.setTexture(texture);
  window.draw(sprite);

  //sf::CircleShape shape(100.f);
  //shape.setPosition(100.f, 100.f);
  //shape.setFillColor(sf::Color::Green);
  return;
}
