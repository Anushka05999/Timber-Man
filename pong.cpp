#include <SFML/Graphics.hpp>
#include<sstream>
#include "Bat.h"
#include"Ball.h"
using namespace sf;

int main(){

	//Define a window
	VideoMode vm(1920,1080);

	//Create a window
	RenderWindow window(vm, "Pong Game", Style::Fullscreen);

	View view(FloatRect(0,0,1920,1080));         //Calculates the coordinates according to the main resolution
	window.setView(view);
	
	int score=0;
	int lives=3;

	Bat bat(900, 1000);
	Ball ball(910,0);
	
	Text hud;
	Font font;
	font.loadFromFile("font/KOMIKAP_.ttf");
	hud.setFont(font);
	hud.setCharacterSize(75);
	hud.setFillColor(Color::White);
	hud.setPosition(20,10);

	Clock clock;

	//Gaming loop
	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
			if(event.type==Event::Closed){
				window.close();
			}
		}
		if(Keyboard::isKeyPressed(Keyboard::Escape)){
			window.close();
		}

		if(Keyboard::isKeyPressed(Keyboard::Left)){
			bat.moveLeft();
		}
		else{
			bat.stopLeft();
		}

		if(Keyboard::isKeyPressed(Keyboard::Right)){
			bat.moveRight();
		}
		else{
			bat.stopRight();
		}

		Time dt=clock.restart();	//update the delta time
		bat.update(dt);
		ball.update(dt);
		
		std::stringstream ss;
		ss<<"Score: "<<score<<"\nLives: "<<lives;
		hud.setString(ss.str());

		//Draw
		window.clear();
		window.draw(hud);
		window.draw(bat.getShape());
		window.draw(ball.getShape());
		window.display();
		}
		}
