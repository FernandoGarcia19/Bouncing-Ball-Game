#pragma once

class Vector2D {
private:
	float m_x;
	float m_y;
public:
	Vector2D()
		:m_x(0.0f), m_y(0.0f)
	{}

	Vector2D(float x, float y)
		:m_x(x), m_y(y)
	{}
	Vector2D(const Vector2D& rv)
	{
		m_x = rv.m_x;
		m_y = rv.m_y;
	}
	~Vector2D() {}
	const float x() const {
		return m_x;
	}
	const float y() const {
		return m_y;
	}
	float& x() {
		return m_x;
	}
	float& y() {
		return m_y;
	}
	void operator =(const Vector2D& rv) {
		m_x = rv.m_x;
		m_y = rv.m_y;
	}
	void operator +(const Vector2D& rv) {
		m_x += rv.m_x;
		m_y += rv.m_y;
	}
	void operator -(const Vector2D& rv) {
		m_x -= rv.m_x;
		m_y -= rv.m_y;
	}

};