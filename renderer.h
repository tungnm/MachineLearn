#include "GLFW/glfw3.h"
#include <stdlib.h>
#include <stdio.h>
#include "environment.h"
#include <vector>
#include "threading/ThreadUtil.h"
#include "threading/Thread.h"
#include "threading/SimpleLock.h"
#include "threading/ScopeLock.h"
#include "memory/ThreadsafeQueue.h"
struct DrawingPath
    {
        int mCurrentPathIndex;
        std::vector<Point> mPath;
};
class Renderer : mud::Thread
{
public:
    
    Renderer();
    ~Renderer();
    void setEnvironment(Environment* env);
    //number of changes per second
    void startDrawing(int animationSpeed);
    void startEventLoop();
    //Provide a path for the renderer to draw. This function is thread-safe.
    //return false if the queue of paths is full
    bool addPath(std::vector<Point> path);

private:
    void init();
    static void error_callback(int error, const char* description)
    {
        fputs(description, stderr);
    }
    static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
    {
        if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    }



    //this should be called inside mainloop, between glClear and glswapbuffer
    void drawSquare(float x, float y, float scaleX, float scaleY);

    void drawEnvironment(Environment* env);

    void drawCell(int i, int j);

    void drawPath(DrawingPath path);

    void run();

    void eventLoop();

    bool shouldExit();
private:

    DEFINE_METHOD_THREAD(EventLoopThread, Renderer, eventLoop);
    static const int MAX_DRAWING_PATH_QUEUE_SIZE = 200;
    //todo: eventually put this in a renderer class or something
    float g_ratio;
    int g_width, g_height;
    GLFWwindow* window;
    float mCellSize;
    Environment* mEnvironment;
    
    bool mShouldExit;
    mud::SimpleLock mShouldExitLock;

    DrawingPath mCurrentDrawingPath;
    mud::SimpleLock mCurrentDrawingPathLock;
    int getCurrentPathIndex();
    void incrementCurrentPathIndex();

    mud::ThreadsafeQueue<DrawingPath> mDrawingPathQueue;

    EventLoopThread et;

    int mAnimationSpeed;
};




