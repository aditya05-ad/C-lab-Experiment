//1.	Write a program to define some constant variable in preprocessor.

#include <stdio.h>

#define PI 3.14159
#define MAX 100
#define GREETING "Hello, Pralav!"

int main() {
    printf("Value of PI: %f\n", PI);
    printf("Maximum limit: %d\n", MAX);
    printf("%s\n", GREETING);
    return 0;
}