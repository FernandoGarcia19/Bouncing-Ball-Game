#pragma once
#include "Ball.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include <array>
#include <memory.h>
#define ENEMY_Q 20
#define WINDOW_LENGHT 1280
#define	WINDOW_HEIGHT 800


class Systems {
private:
	Player m_player;
	Ball m_ball;
	std::array<std::shared_ptr<Enemy>, ENEMY_Q> m_enemies;

	sf::RenderWindow m_window;

	void spawnEnemies() {
		uint32_t id = 1;
		for (int i = 0; i < ENEMY_Q; i++)
		{
			
		}
	}

	void playerInput() {
		sf::Event event;
		while (m_window.pollEvent(event))
		{
			if (event.type == sf::Event::KeyPressed	)
			{
				switch (event.key.code)
				{
				case sf::Keyboard::A:
					m_player.controls().left = true;
					break;
				case sf::Keyboard::D:
					m_player.controls().left = true;
					break;
				}
			}
			if (event.type == sf::Event::KeyReleased)
			{
				switch (event.key.code)
				{
				case sf::Keyboard::A:
					m_player.controls().left = false;
					break;
				case sf::Keyboard::D:
					m_player.controls().left = false;
					break;
				}
			}

		}
	}

public:
	Systems()
		:	m_player(Player(Vector2D(400.0f, 400.0f))),
			m_ball(Ball(Vector2D(500.0f, 500.0f), Vector2D(500.0f, 500.0f))),
			m_window(sf::VideoMode(WINDOW_LENGHT, WINDOW_HEIGHT), "SFML works!")
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