#include <iostream>
#include <vector>
#include "agent.h"
#include "environment.h"
#include "point.h"
#include <cstdlib>
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
void Agent::training()
{
	cout << "Beginning state: " << endl;
	en->printAllMapValue();
	while(episode <= MAX_EPISODE)
	{
		episode++;
		runEpisode();
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
	double reward;
	while(isFinish == false)
	{
		Action currentAction = chooseAction(p, currentState, nextState);
		if(currentAction == EXIT)
		{
			isFinish = true;
		}
		nextState = makeAction(currentAction, currentState);
		updateStateValue(currentState, currentAction, nextState);
		actionTook++;
		cout << "Action num: " << actionTook <<". Action: " << currentAction << endl;
		en->printAllMapValue();
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
	double currentValue = en->map[currentState.x][currentState.y].getStateValue();
	double nextValue = en->map[nextState.x][nextState.y].getStateValue();

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
	en->map[currentState.x][currentState.y].setStateValue(newValue);
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

		// randomly choose the next move
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
		else//choose move based on the values of next states
		{
			//4 is the number of possible action, excluding EXIT
			std::vector<double> nextStateBestValues;
			std::vector<Action> nextStateBestAction;
			for(int i = 0; i < 4; i++)
			{
				if(isMovable(Action(i), currentState) == true)
				{
					Point tempState = makeAction(Action(i), currentState);
					if(nextStateBestValues.empty() == true || nextStateBestValues[0] < en->map[tempState.x][tempState.y].getStateValue())
					{
						nextStateBestValues.clear();
						nextStateBestValues.push_back(en->map[tempState.x][tempState.y].getStateValue());
						nextStateBestAction.clear();
						nextStateBestAction.push_back(Action(i));
					}
					else if(nextStateBestValues[0] == en->map[currentState.x][currentState.y].getStateValue())
					{
						nextStateBestAction.push_back(Action(i));
					}
				}
			}
			int choosen = rand()%(nextStateBestAction.size());
			return nextStateBestAction[choosen];
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