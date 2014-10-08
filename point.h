#ifndef POINT_H
#define POINT_H
/*
class Point
{
public:
	int x;
	int y;
	//constructor
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int newX, int newY)
	{
		x = newX;
		y = newY;
	}
	Point & operator=(const Point & rhs)
	{
		if(this != &rhs)
		{
			x = rhs.x;
			y = rhs.y;
		}
	}
};
*/
struct Point
{
    int x;
    int y;
};

#endif