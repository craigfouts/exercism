#include "resistor_color.h"

uint16_t color_code(resistor_band_t band) {
    return band;
}

resistor_band_t *colors(void) {
    resistor_band_t *out = malloc(10*sizeof(resistor_band_t));
    for (int i = BLACK; i <= WHITE; out[i] = i, i++);

    return out;
}
