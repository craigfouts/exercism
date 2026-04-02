#include "binary.h"

int len(const char *input) {
    int length;

    for (length = 0; input[length]; ++length);

    return length;
}

int pwr(int input, int power) {
    int out = 1;

    for (int i = 0; i < power; ++i)
        out *= input;

    return out;
}

int convert(const char *input) {
    int out = 0, num = 0;
    int length = len(input);

    for (int i = 0; i < length; ++i) {
        num = (int)input[i] - 48;

        if (num == 0 || num == 1) {
            out += num*pwr(2, length - i - 1);
            continue;
        }

        return INVALID;
    }

    return out;
}
