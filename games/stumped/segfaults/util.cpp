#include <iostream>

#include "util.hpp"


// Begin section util
quadrant get_quadrant(int x, int y)
{
    bool isOnTop = y >= 10;
    bool isRight = x >= 16;

    
    if(isOnTop && isRight) return TOP_RIGHT; 
    if(isOnTop)            return TOP_LEFT;
    if(isRight)            return BOTTOM_RIGHT;
    
    return BOTTOM_LEFT;
}
// End section util