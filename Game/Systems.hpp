#pragma once
#include "Ball.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <array>
#include <memory.h>

class Systems {
private:
	Player m_player;
	Ball m_ball;
	std::array<std::shared_ptr<Enemy>, 1> m_enemies;

	sf::RenderWindow m_window;
public:
	Systems()
		:	m_player(Player(Vector2D(400.0f, 400.0f))),
			m_ball(Ball(Vector2D(500.0f, 500.0f), Vector2D(500.0f, 500.0f))),
			m_window(sf::VideoMode(1280, 800), "SFML works!")
	{
		for (auto& e : m_enemies)
		{
			static uint32_t id = 0;
			e = std::make_shared<Enemy>(id++, Vector2D(800.0f, 800.0f));
		}
	}
	~Systems() {}
	void run()
	{
		while (m_window.isOpen())
		{
			sf::Event event;
			while (m_window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					m_window.close();
			}

			
			m_window.clear();
			m_window.draw(m_player.shape());
			m_window.display();
		}
	}

};