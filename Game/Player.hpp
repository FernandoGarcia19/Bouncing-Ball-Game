#pragma once
#include "Vector2D.hpp"
#include <SFML/Graphics.hpp>
#define PLAYER_LENGHT 100.0f
#define PLAYER_HEIGHT 20.0f

class Player
{
private:
	sf::RectangleShape m_shape;
	Vector2D m_position;
	Vector2D m_velocity;
public:
	Player(const Vector2D& pos)
		:m_position(pos)
	{
		m_shape.setFillColor(sf::Color::White);
		m_shape.setSize(sf::Vector2f(PLAYER_LENGHT, PLAYER_HEIGHT));
		m_shape.setPosition(m_position.x(), m_position.y());
	}
	~Player() {}
	Vector2D& position()
	{
		return m_position;
	}
	Vector2D& velocity()
	{
		return m_velocity;
	}
	const sf::RectangleShape& shape()
	{
		return m_shape;
	}

};