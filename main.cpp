#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"
#include "World.h"



int Window_Width = 800;
int Window_Height = 600;

bool VerticalSync = true;

using namespace sf;

int main()
{
	sf::RenderWindow window(sf::VideoMode(Window_Width, Window_Height), "GreenWorld");
	window.setVerticalSyncEnabled(VerticalSync);
	
	Player p("2.png", Window_Width/2, Window_Height/2, 29, 50);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(p.getSprite());
		window.display();
	}

	return 0;
}