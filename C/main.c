#include <stdio.h>
#include "hamming/hamming.h"

#include <string.h>

int main(void) {
    char dest[100] = "Hello";
    char src[100] = "World";
    strncat(dest, src, 100);
    printf("%s\n", dest);

    return 0;
}
