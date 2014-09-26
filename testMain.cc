
#include "GLFW/glfw3.h"
#include <stdlib.h>
#include <stdio.h>
#include "environment.h"
//todo: eventually put this in a renderer class or something
float g_ratio;
int g_width, g_height;
GLFWwindow* window;
float mCellSize;
Environment* mEnvironment;
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
void drawSquare(float x, float y, float scaleX, float scaleY)
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    //glRotatef((float) glfwGetTime() * 50.f, 0.f, 0.f, 1.f);
    glTranslatef(x,y,0.0);

    glScalef(scaleX,scaleY,1.0f);
    glBegin(GL_POLYGON);

    glVertex3f(0.0, 0.0, 0.f); 
    glVertex3f(0.0, 1.0, 0.f); 
    glVertex3f(1.0, 1.0, 0.f); 
    glVertex3f(1.0, 0.0, 0.f);

    glEnd();

}
void drawEnvironment(Environment* env)
{
   for(int i = 0; i < MAP_WIDTH; i++)
   {
        for(int j = 0; j < MAP_HEIGHT; j++)
        {
            //todo: can add code to draw each type of cell
            //differently
            drawSquare(
            -1.0 + i * mCellSize, 
            1.0 - mCellSize - j * mCellSize,
            mCellSize,
            mCellSize); 
        }
   }
}

void mainLoop()
{
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        drawEnvironment(mEnvironment);
  //  drawSquare(-1,0,0.5,0.5);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

}

void setEnvironment(Environment* env)
{
    mEnvironment = env; 
}

void init()
{
    glfwSetErrorCallback(error_callback);

    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(720, 720, "Artificial Intelligence", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback);

    glfwGetFramebufferSize(window, &g_width, &g_height);
    g_ratio = g_width / (float) g_height;
    if (MAP_WIDTH > MAP_HEIGHT)
        mCellSize = 2.0f / MAP_WIDTH;
    else
        mCellSize = 2.0 / MAP_HEIGHT;
    glViewport(0, 0, g_width, g_height);
    glColor3f(1.f, 1.f, 1.f);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    //we dont change projection matrix onthe flight here
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 0, -1.f, 1.f, 1.f, -1.f);

}
void deinit()
{
    glfwDestroyWindow(window);
    glfwTerminate(); 
}
int main(void)
{
    init();    
    mainLoop();

    exit(EXIT_SUCCESS);
}
