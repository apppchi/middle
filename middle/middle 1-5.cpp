#include "middle.h"

void itc_num_print(int number){
    cout << number;
}

int itc_len_num(long long number){
    int n;
    n = 0;
    while (number =! 0){
        n = n + 1;
    }
    return n;
}

int itc_sum_num(long long number){
    int n;
    n = 0;
    while (number > 0){
        n = n + number % 10;
        number = number / 10;
    }
    return n;
}

int itc_multi_num(long long number){
    int n;
    n = 1;
    while (number > 0){
        n = n * (number % 10);
        number = number / 10;
    }
    return n;
}

int itc_max_num(long long number){
    int n1, n_max;
    n_max = number % 10;
    while (number > 0) {
        n1 = number / 10 % 10;
        if (n_max > n1)
            n_max = n_max;
            else
                n1 = n_max;
        number = number / 10;
    }
    return n_max;
}

int itc_min_num(long long number){
    int n1, n_min;
    n_min = number % 10;
    while (number > 0) {
        n1 = number / 10 % 10;
        if (n_min > 1n1)
            n_min = n_min;
            else
                n1 = n_min;
        number = number / 10;
    }
    return n_min;
}
