#include <stdio.h>
#include "hamming/hamming.h"

int main(void) {
    printf("%d\n", compute("AATG", "AAA"));

    return 0;
}
