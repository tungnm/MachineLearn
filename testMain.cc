#include <iostream>
#include "renderer.h"

int main(void)
{
    Renderer renderer1;
    renderer1.init();    
    renderer1.startDrawing();
    printf("\n I'm running now");
    renderer1.deinit();
    return 0;
}
