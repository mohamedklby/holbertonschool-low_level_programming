#include <stdio.h>
#include "main.h"

int print_last_digit(int);

int main(void) {
    int r;

    r = print_last_digit(98);
    printf(" => Retourne : %d\n", r);

    r = print_last_digit(-1234);
    printf(" => Retourne : %d\n", r);

    r = print_last_digit(0);
    printf(" => Retourne : %d\n", r);

    return 0;
}
