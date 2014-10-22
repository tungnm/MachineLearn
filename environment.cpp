#include <iostream>
#include "environment.h"
#include "cell.h"
#include "point.h"
#include <vector>
#include <iomanip> 

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
/*

map representation of positions regarding WIDTH and HEIGHT
(0,6) (1,6) (2,6) (3,6) (4,6) (5,6) (6,6) (7,6) (8,6) (9,6)
(0,5) (1,5) (2,5) (3,5) (4,5) (5,5) (6,5) (7,5) (8,5) (9,5)
(0,4) (1,4) (2,4) (3,4) (4,4) (5,4) (6,4) (7,4) (8,4) (9,4)
(0,3) (1,3) (2,3) (3,3) (4,3) (5,3) (6,3) (7,3) (8,3) (9,3)
(0,2) (1,2) (2,2) (3,2) (4,2) (5,2) (6,2) (7,2) (8,2) (9,2)
(0,1) (1,1) (2,1) (3,1) (4,1) (5,1) (6,1) (7,1) (8,1) (9,1)
(0,0) (1,0) (2,0) (3,0) (4,0) (5,0) (6,0) (7,0) (8,0) (9,0)

 *
 */
void Environment::printAllMapValue()
{
	for(int j = MAP_HEIGHT-1; j >= 0; j--)
	{
		for(int i = 0; i < MAP_WIDTH; i++)
		{
			cout << std::fixed;
			if(getMaxActionValue(i,j) < 0 )
			{
				cout << " " << std::setprecision(2) << getMaxActionValue(i,j);
			}
			else
			{
				cout << "  " << std::setprecision(2) << getMaxActionValue(i,j);
			}
			if(i == MAP_WIDTH -1)
			{
				cout << "\n";
			}
		}
	}
}

//get max action value of a single cell
double Environment::getMaxActionValue(int i, int j)
{
	if(map[i][j].isTerminal() == true)
	{
		return map[i][j].getActionValue(4);
	}
	vector<int> movable;
	for(int k = 0; k < 4;k++)
	{
		if(i != 0)
		{
			movable.push_back(3);
		}
		if(i != MAP_WIDTH -1)
		{
			movable.push_back(1);
		}
		if(j != 0)
		{
			movable.push_back(2);
		}
		if(j != MAP_HEIGHT-1)
		{
			movable.push_back(0);
		}
	}
	double currentMax = map[i][j].getActionValue(movable[0]);
	for(int k = 1; k < movable.size(); k++)
	{
		if(currentMax < map[i][j].getActionValue(movable[k]))
		{
			currentMax = map[i][j].getActionValue(movable[k]);
		}
	}
	return currentMax;
}