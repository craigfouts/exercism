#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
    int hamming = 0;

    for (; *lhs != '\0' && *rhs != '\0'; ++lhs, ++rhs) {
        if (*lhs != *rhs)
            ++hamming;
    }

    if (*lhs != '\0' || *rhs != '\0')
        return -1;
    return hamming;
}
