#include "Figure.hpp"
#include <SFML/Graphics.hpp>

namespace mt
{
	Circle::Circle(float x, float y, float r)
	{
		SetupC(x, y, r);
	}
	void Circle::SetupC(float x, float y, float r)
	{
		m_x = x;
		m_y = y;
		m_r = r;
		m_shape.setRadius(m_r);
		m_shape.setPosition(m_x, m_y);
		m_shape.setFillColor(sf::Color(255, 120, 169));
	}

	sf::CircleShape Circle::GetC()
	{
		return m_shape;
	}



	Rectangle::Rectangle(float x, float y, float a, float b)
	{
		SetupR(x, y, a, b);
	}
	void Rectangle::SetupR(float x, float y, float a, float b)
	{
		m_x = x;
		m_y = y;
		m_a = a;
		m_a = b;
		m_shape.setSize(sf::Vector2f(m_a, m_b));
		m_shape.setPosition(m_x, m_y);
		m_shape.setFillColor(sf::Color(43, 200, 234));
	}
	sf::RectangleShape Rectangle::GetR()
	{
		return m_shape;
	}


	Triangle::Triangle(float x, float y, float size)
	{
		SetupT(x, y, size);
	}
	void Triangle::SetupT(float x, float y, float size)
	{
		m_x = x;
		m_y = y;
		m_size = size;
		sf::CircleShape tmp(size, 3);
		m_shape = tmp;
		m_shape.setPosition(m_x, m_y);
		m_shape.setFillColor(sf::Color(85, 238, 113));
	}
	sf::CircleShape Triangle::GetT()
	{
		return m_shape;
	}


	Line::Line(float x, float y, float w, float a)
	{
		SetupL(x, y, w, a);
	}
	void Line::SetupL(float x, float y, float w, float a)
	{
		m_x = x;
		m_y = y;
		m_a = a;
		m_w = w;
		sf::RectangleShape tmp(sf::Vector2f(w, 2));
		m_shape = tmp;
		m_shape.setPosition(m_x, m_y);
		m_shape.rotate(a);
		m_shape.setFillColor(sf::Color::White);
	}
	sf::RectangleShape Line::GetL()
	{
		return m_shape;
	}
};