#makefile

#make Pinball
makePinball: main.o PinballGame.o Playfield.o Ball.o
	g++ main.o PinballGame.o Playfield.o Ball.o -o makePinball -lsfml-graphics -lsfml-window -lsfml-system

#make a main
main: main.cpp PinballGame.h
	g++ -c main.cpp

#make a PinballGame
PinballGame: PinballGame.cpp Playfield.h Ball.h
	g++ -c PinballGame.cpp

#make a ball
Ball: Ball.cpp
	g++ -c Ball.cpp

#make a Window
Window: Window.cpp Playfield.h
	g++ -c Window.cpp

#make a Playfield
Playfield: Playfield.cpp
	g++ -c Playfield.cpp

#make clean
clean:
	rm -f *.o
	rm makePinball

#make run
run: makePinball
	./makePinball
