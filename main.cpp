#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>

using namespace sf;


int main() {

	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
	window.setFramerateLimit(60);

	sf::Texture textureBackground;
	textureBackground.loadFromFile("../graphics/background.png");

	sf::Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);

	while (window.isOpen())
	{
	   sf::Event event;
	   while (window.pollEvent(event))
	   {
		   if (event.type == sf::Event::Closed)
			   window.close();
	   }
	   window.clear();
	   window.draw(spriteBackground);
	   window.display();
	}

	return 0;
}
