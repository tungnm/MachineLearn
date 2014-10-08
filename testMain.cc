#include <iostream>
#include "renderer.h"

int main(void)
{
    Renderer renderer1;
    //start render thread 
    renderer1.startDrawing(2);
    //start eventloop(update) thread
    renderer1.startEventLoop();
    
    _sleep(2000);

    //test path
    Point p;
    std::vector<Point> path1;
    p.x = 0; p.y = 1;
    path1.push_back(p);
    p.x = 1; p.y = 1;
    path1.push_back(p);
    p.x = 1; p.y = 2;
    path1.push_back(p);
    p.x = 2; p.y = 2;
    path1.push_back(p);
    p.x = 2; p.y = 3;
    path1.push_back(p);
    p.x = 2; p.y = 4;
    path1.push_back(p);
    p.x = 2; p.y = 5;
    path1.push_back(p);  
    renderer1.addPath(path1);

    _sleep(5000);
    path1.clear();
    p.x = 3; p.y = 3;
    path1.push_back(p);
    p.x = 4; p.y = 4;
    path1.push_back(p);
    p.x = 5; p.y = 5;
    path1.push_back(p);
  /*  p.x = 3; p.y = 4;
    path1.push_back(p);
    p.x = 4; p.y = 4;
    path1.push_back(p);
    p.x = 4; p.y = 5;
    path1.push_back(p);*/
    renderer1.addPath(path1);

    return 0;
}
