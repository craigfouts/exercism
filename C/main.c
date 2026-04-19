#include "eliuds_eggs/eliuds_eggs.h"
#include "stdio.h"

int main(void) {
    unsigned int num = 89;

    printf("%d\n", egg_count(num));
    printf("%d\n", num);

    return 0;
}
