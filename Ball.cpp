#include "Ball.h"

Ball::Ball(void){
  this->ballSprite.setRadius(50.f);
  ballSprite.setFillColor(sf::Color::Black);
  //this->ballSprite.setRadius(30.f);
  //this->ballSprite.setFillColor(sf::Color::Green);
}

Ball::~Ball(){}

void Ball::drawBall(sf::RenderWindow & window){
  //stuff
  //sf::Texture texture;
/*
  if (!texture.loadFromFile("pinball.png")){
    //error
    std::cout<<"no"<<std::endl;
  }
*/
  //texture.loadFromFile("pinball.png");
  //sf::Sprite sprite;
  //sprite.setTexture(texture);
  this->ballSprite.move(5.f, 5.f);
/*
  sf::VertexArray charles(sf::Triangles, 3);
  charles[0].position == sf::Vector2f(10.f, 10.f);
  charles[1].position == sf::Vector2f(100.f, 10.f);
  charles[2].position == sf::Vector2f(100.f, 100.f);
  //charles[3].position == sf::Vector2f(10, 700);

  charles[0].color = sf::Color::Red;
  charles[1].color = sf::Color::Red;
  charles[2].color = sf::Color::Red;
  //charles[3].color = sf::Color::Red;

  window.draw(charles);
*/
  //sf::Vector2f point = sf::Vector2f(600.f, 700.f);
  //sf::Lines; //linez(600.f, 0.f, 600.f, 700.f);
  sf::FloatRect boundingBox = this->ballSprite.getGlobalBounds();
/*
  if (boundingBox.contains(charles)){
    std::cout<<"steve"<<std::endl;
    this->ballSprite.setPosition(0.f, 0.f);
  }
  */


  window.draw(this->ballSprite);

  //sf::CircleShape shape(100.f);
  //shape.setPosition(100.f, 100.f);
  //shape.setFillColor(sf::Color::Green);
  return;
}
