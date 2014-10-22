#ifndef CELL_H
#define CELL_H
#include <iostream>
using namespace std;
class Cell
{
	double value[5];
private:
	//state value
	
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
		for(int i = 0; i <= 4/*hardcode*/; i++)
		{
			value[i] = 0;			
		}
		attribute = 0;
	}
	/*
	 * set an attribute
	 */
	void setAttribute(int a)
	{
		attribute = a;
	}
	/*
	 * set the state to be a terminal value
	 */
	void setTerminal()
	{
		terminal = true;
	}
	void setActionValue(double v, int actionId)
	{
		value[actionId] = v;
	}
	void setReward(double r)
	{
		reward = r;
	}
	bool isTerminal()
	{
		return terminal;
	}
	double getActionValue(int actionId)
	{
		return value[actionId];
	}
	double getReward()
	{
		return reward;
	}
	double getAttribute()
	{
		return attribute;
	}
	void printAllCellValue()
	{
		cout << "Up: " << value[0] << endl;
		cout << "Right: " << value[1] << endl;
		cout << "Down: " << value[2] << endl;
		cout << "Left: " << value[3] << endl;
		cout << "Exit: " << value[4] << endl;
	}
};
#endif
