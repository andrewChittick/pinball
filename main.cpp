#include "PinballGame.h"
//#include <vector>
//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include "Window.h"


void renderingThread(sf::RenderWindow* window){
    //sf::Sprite sprite;
    /*
    Playfield playfield;
    //sprite = playfield.getPlayfield();
      // activate the window's context
      window->setActive(true);

      // the rendering loop
      while (window->isOpen())
      {
        sf::Event event;
        while (window->pollEvent(event)){
          if (event.type == sf::Event::Closed){
            window->close();
          }
        }
          // draw...

          window->clear(sf::Color::Green);
          //playfield.drawSprite(*window);
        //window.display();

          // end the current frame
          window->display();
      }
      */
}

int main(int argc, char * argv []){
  PinballGame *game = new PinballGame();
  game->play();
  return 0;
}
  /*multithread
      // create the window (remember: it's safer to create it in the main thread due to OS limitations)
      sf::RenderWindow window(sf::VideoMode(800, 600), "OpenGL");

      // deactivate its OpenGL context
      window.setActive(false);

      // launch the rendering thread
      sf::Thread thread(&renderingThread, &window);
      thread.launch();

      // the event/logic/whatever loop
      while (window.isOpen()){
        std::cout<<"steve"<<std::endl;
      }

      return 0;
}
*/
