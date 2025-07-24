#pragma once

#include <SFML/Graphics.hpp>

class Player
{
private:
	std::unique_ptr<sf::Sprite> m_sprite;

public:
	Player(const sf::Texture&& texture);

	void update();

	const std::unique_ptr<sf::Sprite> const getSprite() const;
};

