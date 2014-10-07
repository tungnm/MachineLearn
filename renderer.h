#include "GLFW/glfw3.h"
#include <stdlib.h>
#include <stdio.h>
#include "environment.h"
#include <vector>
#include "threading/ThreadUtil.h"
#include "threading/Thread.h"
#include "threading/SimpleLock.h"
struct DrawingPath
    {
        int mCurrentPathIndex;
        std::vector<Point> mPath;
};
class Renderer : mud::Thread
{
public:
    void init();
    Renderer();
    void setEnvironment(Environment* env);
    void deinit();
    void startDrawing();
private:
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
private:
    //todo: eventually put this in a renderer class or something
    float g_ratio;
    int g_width, g_height;
    GLFWwindow* window;
    float mCellSize;
    Environment* mEnvironment;


    DrawingPath mCurrentDrawingPath;

};




