#include <iostream>
#include <vector>
#include "agent.h"
#include "environment.h"
#include "point.h"
using namespace std;

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

void Agent::training()
{
	Point currentState = en.ss;
	Point nextState;
	while(episode <= MAX_EPISODE)
	{
		episode++;
		runEposide();
	}
}

void Agent::runEposide()
{
	Action currentAction = chooseAction(p);
	nextState = makeAction(currentAction);
}

Action Agent::chooseAction(Policy p)
{
	if(map[currentState.x][currentState.y].isTerminal() == true)
	{
		return Action.EXIT;
	}
	else
	{
		double random = ((double) rand() / (RAND_MAX));
		Action nextAction;

		// randomly choose the next move
		if(random <= EPSILON)
		{
			random = rand()%5;	
		}
		else//choose move based on the values of next states
		

		}
	}
}

bool Agent::isMovable(Action a)
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