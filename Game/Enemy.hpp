#pragma once
#include <SFML/Graphics.hpp>
#include "Vector2D.hpp"
#define ENEMY_LENGHT 100.0f
#define ENEMY_HEIGHT 40.0f

class Enemy {
private:
	uint32_t m_id;
	sf::RectangleShape m_shape;
	Vector2D m_position;
	bool active = true;

public:
	Enemy(uint32_t id, const Vector2D& pos)
		: m_id(id), m_position(pos)
	{
		m_shape.setFillColor(sf::Color::White);
		m_shape.setSize(sf::Vector2f(ENEMY_LENGHT, ENEMY_HEIGHT));
		m_shape.setPosition(m_position.x(), m_position.y());
	};
	~Enemy() {}
	const Vector2D& position() const
	{
		return m_position;
	}
	void destroy() 
	{
		active = false;
	}
	const sf::RectangleShape& shape()
	{
		return m_shape;
	}
};