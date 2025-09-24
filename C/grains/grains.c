#include "grains.h"

uint64_t square(uint64_t index) {
    return index < 2 ? index : 2*(square(index - 1));
}

uint64_t total(void) {
    uint64_t i, out;

    for (i = 0, out = 0; i < 64; i++, out += square(i));

    return out;
}
