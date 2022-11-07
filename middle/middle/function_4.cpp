#include "middle.h"

int itc_rev_oct_num(long long number) {
    int a, i, c;
    a = 0;
    i = 1;
    c = 0;
    while (number > 0) {
        c = number % 10;
        if (c >= 8)
            return -1;
        a = a + (c * i);
        i = i * 8;
        number = number / 10;
    }
    return a;
}
