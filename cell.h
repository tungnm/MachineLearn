#ifndef CELL_H
#define CELL_H
#include <iostream>
using namespace std;
class Cell
{
private:
	//state value
	double value;
	
	//is Terminal
	bool terminal;
	//need modify to be generic******
	//will be wind level atm
	int attribute;

	//reward for coming to this cell
	//need to modify to be generic*****
	double reward;
public:

	//constructor
	Cell()
	{
/*		std::cout <<"hello";*/
		terminal = false;
		value = 0;
		attribute = 0;
	}
	void setAttribute(int a)
	{
		attribute = a;
	}	
	void setTerminal()
	{
		terminal = true;
	}
	void setStateValue(double v)
	{
		value = v;
	}
	void setReward(double r)
	{
		reward = r;
	}
	bool isTerminal()
	{
		return terminal;
	}
	double getStateValue()
	{
		return value;
	}
	double getReward()
	{
		return reward;
	}
	double getAttribute()
	{
		return attribute;
	}
};
#endif
