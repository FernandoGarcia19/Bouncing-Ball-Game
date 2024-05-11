#pragma once
#include "Vector2D.hpp"
#include <SFML/Graphics.hpp>
#define BALL_RADIUS 30.0f

class Ball {
private:
	sf::CircleShape m_shape;
	Vector2D m_posiiton;
	Vector2D m_velocity;
public:
	Ball(const Vector2D& pos, const Vector2D& vel)
		:	m_posiiton(pos), m_velocity(vel)
	{
		m_shape.setRadius(BALL_RADIUS);
		m_shape.setPosition(m_posiiton.x(), m_posiiton.y());
	}
	~Ball() {}
	Vector2D& position()
	{
		return m_posiiton;
	}
	Vector2D& velocity()
	{
		return m_velocity;
	}

};
