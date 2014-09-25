#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

//starting with a simple map
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

private:
	//the map of the environment
	Cell** map;
	friend class Agent;
public:
	//constructor
	Environment(Point start, Point terminal);
	void setWind(int col, int level);
	void printAllMapValue();
};
#endif