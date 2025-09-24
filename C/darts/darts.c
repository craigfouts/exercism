#include "darts.h"

int score(coordinate_t landing_position) {
    float x2 = landing_position.x*landing_position.x;
    float y2 = landing_position.y*landing_position.y;
    float r2 = x2 + y2;

    return r2 > 100 ? 0 : r2 > 25 ? 1 : r2 > 1 ? 5 : 10;
}
