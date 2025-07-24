#include "..\include\Player.h"

Player::Player(const sf::Texture&& texture)
{
	m_sprite = std::make_unique<sf::Sprite>(texture);
}
