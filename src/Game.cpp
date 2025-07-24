#include "../include/Game.h"

void Game::update(const float& dt)
{
}

void Game::pollEvent()
{
	while (std::optional<sf::Event> event = m_window->pollEvent())
	{
		if (event->getIf<sf::Event::Closed>())
			m_window->close();
	}
}

void Game::draw()
{
	m_window->clear(sf::Color(0x1A'20'5A'FF));

	m_window->display();
}

Game::Game(const unsigned short& width, const unsigned short& height, const char* title)
{
	m_window = std::make_unique<sf::RenderWindow>(
		sf::VideoMode(sf::Vector2u(width, height)),
		title
	);
}

void Game::run()
{
	sf::Clock delta_time_clock, event_clock;
	sf::Time delta_time;

	while (m_window->isOpen())
	{
		event_clock.restart();
		pollEvent();
		delta_time = delta_time_clock.restart() - event_clock.restart();
		update(delta_time.asSeconds());
		draw();
	}
}
