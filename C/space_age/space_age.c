#include "space_age.h"

float periods[] = {0.2408467, 0.61519726, 1.0, 1.8808158, 11.862615, 29.447498, 84.016846, 164.79132};

float age(planet_t planet, int64_t seconds) {
    if (planet < 0 || 7 < planet)
        return -1.0;

    float period = periods[planet];
    float earthYears = seconds/31557600.0;

    return earthYears/period;
}
