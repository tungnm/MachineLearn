#ifndef AGENT_H
#define AGENT_H
#define ALPHA 0.5
#define GAMMA 0.9
#define EPSILON 0.1
#define MAX_EPISODE 1000
#include <vector>
#include "point.h"
#include "environment.h"


enum Action{ NORTH, EAST, SOUTH, WEST, EXIT};

/* the policy of the algorithm */

enum Policy{ GREEDY, E_GREEDY};


class Agent
{
private: 
	std::vector<Point> path;
	double alpha;
	double gamma;
	int episode;
	Environment* en;
	Policy p;
public:
	//constructors
	Agent();
	Agent(Environment *en);
	//destructor
	//~Agent();
	void training();
	void runEpisode();
	void updateStateValue();
	Action chooseAction(Policy p);
	Point makeAction(Action a);
	bool isMovable(Action a);
};

#endif