#pragma once

#include <SFML/Graphics.hpp>

/**
 * Grid base class
*/
class Grid
{
private:
	// The size of each square. The smaller, the more square drawns
	sf::Vector2f squareSize;

	//

public:
	Grid();
	~Grid();
};

Grid::Grid()
{
}

Grid::~Grid()
{
}