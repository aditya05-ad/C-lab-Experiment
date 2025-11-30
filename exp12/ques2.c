//2.	Write a program to define a function in directives.

#include <stdio.h>
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num = 5;
    int a = 10, b = 20;

    printf("Square of %d = %d\n", num, SQUARE(num));
    printf("Maximum of %d and %d = %d\n", a, b, MAX(a, b));

    return 0;
}