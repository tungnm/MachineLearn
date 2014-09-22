#include <iostream>
#include "environment.h"
#include "cell.h"
#include "point.h"


Environment::Environment(Point start, Point terminal)
{
	//create the full map
	map = new(Cell*[MAP_WIDTH]);
	for(int i = 0; i < MAP_WIDTH; i++)
	{
		map[i] = new (Cell[MAP_HEIGHT]);
	}
	//setting the terminal point 
	ss = start;
	map[terminal.x][terminal.y].setTerminal();
}

void Environment::setWind(int col, int level)
{
	for(int i = 0; i < MAP_HEIGHT; i++)
	{
		map[col][i].setAttribute(level);
	}
}

