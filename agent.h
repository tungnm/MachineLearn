#ifndef AGENT_H
#define AGENT_H
#define ALPHA 0.5
#define GAMMA 1
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
	void updateStateValue(Point currentState, Action a, Point nextState);
	Action chooseAction(Policy p, Point currentState, Point nextState);
	Point makeAction(Action a, Point currentState);
	bool isMovable(Action a, Point currentState);
};

#endif