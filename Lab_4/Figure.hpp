#pragma once
#include <SFML/Graphics.hpp>

namespace mt
{
	class Circle
	{
		float m_r;
		float m_x, m_y;
		sf::CircleShape m_shape;

	public:
		Circle() = default;
		Circle(float x, float y, float r);
		void SetupC(float x, float y, float r);
		sf::CircleShape GetC();
	};

	class Rectangle
	{
		float m_a, m_b;
		float m_x, m_y;
		sf::RectangleShape m_shape;

	public:
		Rectangle() = default;
		Rectangle(float x, float y, float a, float b);
		void SetupR(float x, float y, float a, float b);

		sf::RectangleShape GetR();
	};

	class Triangle
	{
		float m_size;
		float m_x, m_y;
		sf::CircleShape m_shape;

	public:

		Triangle() = default;
		Triangle(float x, float y, float size);
		void SetupT(float x, float y, float size);
		sf::CircleShape GetT();
	};

	class Line
	{
		float m_w, m_a;
		float m_x, m_y;
		sf::RectangleShape m_shape;

	public:
		Line() = default;
		Line(float x, float y, float w, float a);
		void SetupL(float x, float y, float w, float a);
		sf::RectangleShape GetL();
	};
}






//Circle* m_c;
		//int m_n;
		//&m_window{ window };
		//&m_window{ window };


//void foo(window& m_window);