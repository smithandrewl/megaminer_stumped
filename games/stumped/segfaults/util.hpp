#ifndef UTIL_HPP
#define UTIL_HPP

// Begin section util
enum quadrant {
    TOP_LEFT,
    TOP_RIGHT,
    BOTTOM_LEFT,
    BOTTOM_RIGHT
};

quadrant get_quadrant(int x, int y);
// End section util
#endif