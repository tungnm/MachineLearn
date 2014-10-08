#include <iostream>
#include <vector>
#include "agent.h"
#include "environment.h"
#include "point.h"
#include <cstdlib>
#define SENTINEL -999
using namespace std;

//contructors
Agent::Agent()
{
	alpha = ALPHA;
	gamma = GAMMA;
	episode = 0;
}
Agent::Agent(Environment *envi)
{
	alpha = ALPHA;
	gamma = GAMMA;
	episode = 0;
	en = envi;
}

//destructor
//~Agent()

/*
 * the full training of the agent
 */
void Agent::training(Renderer* myrenderer)
{
	cout << "Beginning state: " << endl;
	en->printAllMapValue();
	while(episode <= MAX_EPISODE)
	{
		path.clear();
		episode++;
		runEpisode();
		//path is full
		std::vector<PointSimple> newPath;
		PointSimple point;
		for(int i = 0; i< path.size();i++)
		{
			point.x = path[i].x;
			point.y = path[i].y;
			newPath.push_back(point);
		}
		std::cout << "FOUND PATH\n\n\n\n\n\n\n\n\n" << endl;
		myrenderer->addPath(newPath);
	}
}

/* 
 * run a single episode
 */
void Agent::runEpisode()
{
	Point nextState;
	Point currentState = en->ss;
	int actionTook = 0;
	bool isFinish = false;
	while(isFinish == false)
	{
		Action currentAction = chooseAction(p, currentState, nextState);
		if(currentAction == EXIT)
		{
			isFinish = true;
		}
		nextState = makeAction(currentAction, currentState);
		path.push_back(nextState);
		updateStateValue(currentState, currentAction, nextState);
		actionTook++;
		cout << "Action num: " << actionTook <<". Action: " << currentAction << endl;
		//en->printAllMapValue();
		cout << "Current position: " << currentState.x<< "," << currentState.y << " next position : " << nextState.x <<","<< nextState.y << endl;	
		currentState = nextState;
	}
}

/*
 * Update the value of the previous state after action was made
 */
void Agent::updateStateValue(Point currentState, Action a, Point nextState)
{
	double newValue;
	double currentValue = en->map[currentState.x][currentState.y].getActionValue(a);
	double nextValue;
	double tempValue = SENTINEL;
	if(en->map[nextState.x][nextState.y].isTerminal() == true)
	{
		nextValue = 10;
	}
	else
	{
		for(int i = 0; i < 4; i++)
		{
			if(isMovable(Action(i),nextState))
			{
				tempValue = en->map[nextState.x][nextState.y].getActionValue(i);
				if(nextValue == SENTINEL || nextValue < tempValue)
				{
					nextValue = tempValue;
				}
			}
		}
	}
	double reward;
	if(a == EXIT)
	{
		reward = 10;
	}
	else
	{
		reward = -1;
	}
	newValue = currentValue*(1-alpha) + alpha*(reward + gamma * nextValue);
	en->map[currentState.x][currentState.y].setActionValue(newValue,a);
}


/*
 * determine the action under predefined policy
 */
Action Agent::chooseAction(Policy p, Point currentState, Point nextState)
{
	//if this is a terminal state, just exit and return reward value
	if(en->map[currentState.x][currentState.y].isTerminal() == true)
	{
		Action a = EXIT;
		return a;
	}
	else//else choose action based on policy(e-greedy)
	{
		double random = ((double) rand() / (RAND_MAX));
		Action nextAction;

		// randomly choose the next move -> exploration
		if(random <= EPSILON)
		{
			while(true)
			{
				Action a = Action(rand()%4);
				if(isMovable(a, currentState) == true)
				{
					return a;
				}
			}
		}
		else//choose move based on the values of next state actions -> exploitation
		{
			//4 is the number of possible action, excluding EXIT
			std::vector<double> nextActionBestValue;
			std::vector<Action> bestActions;
			for(int i = 0; i < 4; i++)
			{
				if(isMovable(Action(i), currentState) == true)
				{
					if(nextActionBestValue.empty() == true || nextActionBestValue[0] < en->map[currentState.x][currentState.y].getActionValue(i))
					{
						nextActionBestValue.clear();
						nextActionBestValue.push_back(en->map[currentState.x][currentState.y].getActionValue(i));
						bestActions.clear();
						bestActions.push_back(Action(i));
					}
					else if(nextActionBestValue[0] == en->map[currentState.x][currentState.y].getActionValue(i))
					{
						bestActions.push_back(Action(i));
					}
				}
			}
			int choosen = rand()%(bestActions.size());
			return bestActions[choosen];
		}
	}
}

/*
 * find the s' under policy and action a
 */
Point Agent::makeAction(Action a, Point currentState)
{
	int wind = en->map[currentState.x][currentState.y].getAttribute();
	if( a == NORTH)
	{
		int newY;
		if(currentState.y + wind + 1 >= MAP_HEIGHT-1)
		{
			newY = MAP_HEIGHT-1;
		}
		else
		{
			newY = currentState.y + wind + 1;
		}
		return Point(currentState.x,newY);
	}
	else if(a == EAST)
	{
		int newY;
		int newX ;
		if(currentState.x + 1 >= MAP_WIDTH-1)
		{
			newX = MAP_WIDTH-1;
		}
		else
		{
			newX = currentState.x + 1;
		}
		if(currentState.y + wind >= MAP_HEIGHT-1)
		{
			newY = MAP_HEIGHT-1;
		}
		else
		{
			newY =  currentState.y + wind;
		}
		return Point(newX, newY);
	}
	else if(a == SOUTH)
	{
		int newY;
		if(currentState.y -1 + wind <= 0)
		{
			newY = 0;
		}
		else if(currentState.y -1 + wind >= MAP_HEIGHT-1)
		{
			newY = MAP_HEIGHT-1;
		}
		else
		{
			newY = currentState.y -1 + wind;
		}
		return Point(currentState.x, newY);
	}
	else 
	{
		int newX;
		if(currentState.x -1 <= 0)
		{
			newX = 0;
		}
		else
		{
			newX = currentState.x -1;
		}
		int newY;
		if(currentState.y + wind >= MAP_HEIGHT-1)
		{
			newY = MAP_HEIGHT-1;
		}
		else
		{
			newY = currentState.y + wind;
		}
		return Point(newX, newY);
	}
}

/*
 * check if whether a certain action is executable
 */
bool Agent::isMovable(Action a, Point currentState)
{
	if(a == NORTH)
	{
		if(currentState.y == MAP_HEIGHT-1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else if(a == EAST)
	{
		if(currentState.x == MAP_WIDTH-1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else if(a == SOUTH)
	{
		if(currentState.y == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		if(currentState.x == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}