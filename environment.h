#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

//starting with a simple map
//todo: make this attributes of Environment class instead of
//define
#define MAP_WIDTH 10 
#define MAP_HEIGHT 7 

#include <iostream>
#include "cell.h"
#include "point.h"

using namespace std;

class Agent;
class Environment
{
public:
 	//start state
	Point ss;
	//the map of the environment
	Cell** map;

private:
	friend class Agent;
public:
	//constructor
	Environment(Point start, Point terminal);
	void setWind(int col, int level);
	void printAllMapValue();

    //accessor to cell map
    Cell** getCellMap()
    {
        return map; 
    }

    //get max action value of a single cell
    double getMaxActionValue(int i, int j);
};
#endif
