#pragma once
#include "Vector2D.hpp"
#include <SFML/Graphics.hpp>
#define BALL_RADIUS 30.0f

class Ball {
private:
	sf::CircleShape m_shape;
	Vector2D m_position;
	Vector2D m_velocity;
public:
	Ball(const Vector2D& pos, const Vector2D& vel)
		:	m_position(pos), m_velocity(vel)
	{
		m_shape.setFillColor(sf::Color::White);
		m_shape.setRadius(BALL_RADIUS);
		m_shape.setPosition(m_position.x(), m_position.y());
	}
	~Ball() {}
	Vector2D& position()
	{
		return m_position;
	}
	Vector2D& velocity()
	{
		return m_velocity;
	}
	const sf::CircleShape& shape()
	{
		return m_shape;
	}
};
