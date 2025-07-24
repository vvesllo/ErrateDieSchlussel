#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

class Game
{
private:
	std::unique_ptr<sf::RenderWindow> m_window;

	void update(const float& dt);
	void pollEvent();
	void draw();

public:
	Game()=delete;
	Game(const unsigned short& width, const unsigned short& height, const char* title);

	void run();
};

