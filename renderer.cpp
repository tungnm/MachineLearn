#include "renderer.h"


//this should be called inside mainloop, between glClear and glswapbuffer
void Renderer::drawSquare(float x, float y, float scaleX, float scaleY)
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
void Renderer::drawEnvironment(Environment* env)
{
   glColor3f(1.f, 1.f, 1.f);
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
void Renderer::drawCell(int i, int j)
{
    drawSquare(
            -1.0 + j * mCellSize, 
            1.0 - mCellSize - i * mCellSize,
            mCellSize,
            mCellSize); 

}
void Renderer::drawPath(DrawingPath path)
{
    glColor3f(1.f, 0.f, 0.f);
    //draw from the beginning to current index   
    for(int i = 0; i < path.mCurrentPathIndex; i++)
    {
        drawCell(path.mPath[i].x,path.mPath[i].y);
    }
}
void Renderer::run()
{
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
       // drawEnvironment(mEnvironment);

       // drawPath(mCurrentDrawingPath);
        glfwSwapBuffers(window);
            //update code:
        if (mCurrentDrawingPath.mCurrentPathIndex < mCurrentDrawingPath.mPath.size())
        mCurrentDrawingPath.mCurrentPathIndex++;
        //sleep for a while here
        if (mCurrentDrawingPath.mCurrentPathIndex == mCurrentDrawingPath.mPath.size())
        {
            //done drawing this path, maybe sleep for another while

        }
        glfwPollEvents();
    }
    //mud::ThreadUtil::sleep(5000);
    
    printf("\n done with sleep");
}

Renderer::Renderer() : mud::Thread("Renderer")
{}
void Renderer::startDrawing()
{
    start();
}

void Renderer::setEnvironment(Environment* env)
{
    mEnvironment = env; 
}

void Renderer::init()
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
    //test patj
    Point p(0,1);
    Point p1(1,1);
    Point p2(1,2);
    Point p3(2,2);
    Point p4(2,3);
    Point p5(2,4);
    Point p6(2,5);
    mCurrentDrawingPath.mCurrentPathIndex = 0;
    mCurrentDrawingPath.mPath.push_back(p);
    mCurrentDrawingPath.mPath.push_back(p1);
    mCurrentDrawingPath.mPath.push_back(p2);
    mCurrentDrawingPath.mPath.push_back(p2);
    mCurrentDrawingPath.mPath.push_back(p3);
    mCurrentDrawingPath.mPath.push_back(p4);
    mCurrentDrawingPath.mPath.push_back(p5);
    mCurrentDrawingPath.mPath.push_back(p6);
}
void Renderer::deinit()
{
    join();
    glfwDestroyWindow(window);
    glfwTerminate(); 
    printf("\n deinit");
}

