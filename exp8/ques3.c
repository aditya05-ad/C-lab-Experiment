//3.	Write a function that accepts pointers as parameters. Pass variables by reference using pointers and modify their values within the function.

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;   
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}