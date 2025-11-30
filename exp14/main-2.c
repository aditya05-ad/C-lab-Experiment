#include <stdio.h>
#include "arith.h"

int main() {
    int a = 20, b = 5;

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", sub(a, b));
    printf("Multiplication = %d\n", mul(a, b));
    printf("Division = %d\n", divide(a, b));

    return 0;
}