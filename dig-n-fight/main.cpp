/*
 * main.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: ian
 */

/*
 * Drawing a window first just to test main and the library
 */

#include <SFML/Window.hpp>

int main() {
	sf::Window App(sf::VideoMode(800, 600, 32), "SFML Window");
	App.Create(sf::VideoMode(800, 600, 32), "SFML Window");

	bool Running = true;
	while (Running)
	{
	    App.Display();
	}

	return EXIT_SUCCESS;

	return 0;
}
