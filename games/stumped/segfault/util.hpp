#ifndef UTIL_HPP
#define UTIL_HPP

namespace cpp_client
{

    namespace stumped
    {

        enum quadrant {
            TOP_LEFT,
            TOP_RIGHT,
            BOTTOM_LEFT,
            BOTTOM_RIGHT
        };

        quadrant get_quadrant(int x, int y) 
        {
            bool isOnTop = y >= 10;
            bool isRight = x >= 16;

            
            if(isOnTop && isRight) return TOP_RIGHT; 
            if(isOnTop)            return TOP_LEFT;
            if(isRight)            return BOTTOM_RIGHT;
            
            return BOTTOM_LEFT;
        }
    }
}

#endif
