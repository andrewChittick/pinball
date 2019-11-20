#include "Window.h"

Window::Window(void){}

void Window::open(void){
	//sf::RenderWindow window(sf::VideoMode(600,800),"Pinball Mania!");
  //resize
	this->window.create(sf::VideoMode(600,800), "Pinballz!");
	setPlayfield();
}

void Window::gameLoop(void){
  while(window.isOpen()){
    sf::Event event;
    while(window.pollEvent(event)){
      if(event.type==sf::Event::Closed){
        window.close();
      }
			//Playfield playfield;
      //sf::Texture texture;
      //texture.loadFromFile("pinball.png");
      //sf::Sprite sprite;
      //sprite.setTexture(texture);
      window.clear(sf::Color::Black);

			window.draw(this->playfield);
      //window.draw(getBackground());
      //window.draw(getForeground());
      //window.draw(scorebaord.getScoreBoard());
      //window.draw(game.getGameState());
      window.display();
    }
  }
	//sf::RenderWindow window(sf::VideoMode(200,200), "steeve");

	//sf::Window window;


	//window.create(sf::VideoMode(200,200), "testwinder");
	//window.clear();
	//window.draw();
	//window.display();
	return;
}

void Window::setPlayfield(void){
  //stuff
  sf::Texture texture;

  if (!texture.loadFromFile("pinball.png")){
    //error
    std::cout<<"no"<<std::endl;
  }

  texture.loadFromFile("pinball.png");
  //sf::Sprite sprite;
  this->playfield.setTexture(texture);

  //sf::CircleShape shape(100.f);
  //shape.setPosition(100.f, 100.f);
  //shape.setFillColor(sf::Color::Green);
  return;
}

/*
int main(){
	//PinballGame game;
	//game.play();

	std::vector<sf::VideoMode> charles = sf::VideoMode::getFullscreenModes();


    //sf::RenderWindow window(sf::VideoMode(charles[0]), "SFML works!");
		sf::Window window;
		window.create(sf::VideoMode(200,200), "testwinder", sf::Style::Fullscreen);

		sf::CircleShape shape(100.f);
    shape.setPosition(100.f, 100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }


    return 0;
}
*/
