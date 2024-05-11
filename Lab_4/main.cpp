#include <SFML/Graphics.hpp>
#include "Figure.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML");

	srand(time(0));

	const int n = 5;
	mt::Circle c[n];
	mt::Rectangle rec[n];
	mt::Triangle t[n];
	mt::Line l[n];


	for (int i = 0; i < n; i++)
	{
		int x = rand() % 1000;
		int y = rand() % 600;
		int r = rand() % 100;
		int a = rand() % 100;
		int b = rand() % 100;
		c[i].SetupC(x, y, r);
		rec[i].SetupR(x, y, a, b);
		t[i].SetupT(x, y, r);
		l[i].SetupL(x, y, a, b);
	}

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		for (int i = 0; i < n; i++)
		{
			window.draw(c[i].GetC());
			window.draw(rec[i].GetR());
			window.draw(t[i].GetT());
			window.draw(l[i].GetL());
		}

		window.display();
	}

	return 0;
};