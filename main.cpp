#include <iostream>
#include <vector>

#include "cell.h"
#include "environment.h"
#include "point.h"
#include "agent.h"
#include <cstdlib>
#define START_X 0
#define START_Y 3
#define TERMINAL_X 7	
#define TERMINAL_Y 3
using namespace std;

//goal is to get from the start state to terminal state with as small as possible

int main()
{
    srand((int)time(NULL));
	int check = 3;
	Environment en(Point(START_X, START_Y),Point(TERMINAL_X,TERMINAL_Y));
	en.setWind(3,1);
	en.setWind(4,1);
	en.setWind(5,1);
	en.setWind(6,2);
	en.setWind(7,2);
	en.setWind(8,1);
	Agent myAgent(&en);
	myAgent.training();
}
