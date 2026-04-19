#include "eliuds_eggs.h"

unsigned int egg_count(unsigned int input) {
    unsigned int out = 0;

    for (; input > 0; input >>= 1)
        out += input & 1;

    return out;
}
